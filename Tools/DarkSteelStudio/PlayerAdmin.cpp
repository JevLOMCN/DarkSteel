#include "PlayerAdmin.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Text;
    using namespace System::Data;

    // ---------------------------------------------------------------------------
    // basics
    // ---------------------------------------------------------------------------

    PlayerAdmin::PlayerAdmin(Window^ window, StudioSettings^ settings, DbBrowser^ browser,
                             System::Action<String^>^ status, System::Action<String^, String^>^ navigate,
                             System::Func<CodexCatalog^>^ catalogProvider, String^ xamlRoot,
                             System::Action<long long>^ openItem)
    {
        m_openItem = openItem;
        m_catalogProvider = catalogProvider;
        m_xamlRoot = xamlRoot;
        m_window   = window;
        m_settings = settings;
        m_db       = browser;
        m_status   = status;
        m_navigate = navigate;
        m_seq      = gcnew Dictionary<String^, int>();
        m_accUid   = 0;
        m_chrUid   = 0;
    }

    String^ PlayerAdmin::G() { return DbBrowser::Quote(m_settings->GameSchema); }
    String^ PlayerAdmin::F() { return DbBrowser::Quote(m_settings->FrontSchema); }

    Object^ PlayerAdmin::Req(FrameworkElement^ root, String^ name)
    {
        Object^ found = root->FindName(name);
        if (found == nullptr)
        {
            throw gcnew InvalidOperationException("XAML is missing a required element named '" + name + "'.");
        }
        return found;
    }

    void PlayerAdmin::Say(String^ text)
    {
        if (m_status != nullptr) m_status->Invoke(text);
    }

    // 'value' with quotes, backslashes and control characters escaped.
    String^ PlayerAdmin::SqlStr(String^ value)
    {
        StringBuilder^ sb = gcnew StringBuilder("'");
        for each (wchar_t c in value)
        {
            if (c == L'\\')      sb->Append("\\\\");
            else if (c == L'\'') sb->Append("''");
            else if (c == L'\0') sb->Append("\\0");
            else if (c == L'\n') sb->Append("\\n");
            else if (c == L'\r') sb->Append("\\r");
            else if (c == L'\x1a') sb->Append("\\Z");
            else                 sb->Append(c);
        }
        sb->Append("'");
        return sb->ToString();
    }

    // '%value%' for LIKE, with % _ and \ in the value escaped.
    String^ PlayerAdmin::LikeStr(String^ value)
    {
        String^ escaped = value->Replace("\\", "\\\\")->Replace("%", "\\%")->Replace("_", "\\_");
        String^ quoted = SqlStr(escaped);               // 'escaped'
        return "'%" + quoted->Substring(1, quoted->Length - 2) + "%'";
    }

    String^ PlayerAdmin::ClassCase(String^ column)
    {
        return "ELT(" + column + ",'Warrior','Sorcerer','Taoist','Arbalist','Lancer','Darkist','Lionheart','Spirit Summoner')";
    }

    String^ PlayerAdmin::Cell(DataRowView^ row, String^ column)
    {
        if (row == nullptr || !row->Row->Table->Columns->Contains(column)) return String::Empty;
        Object^ v = row[column];
        return (v == nullptr || v == DBNull::Value) ? String::Empty : Convert::ToString(v);
    }

    long long PlayerAdmin::Num(DataRowView^ row, String^ column)
    {
        long long n = 0;
        Int64::TryParse(Cell(row, column), n);
        return n;
    }

    void PlayerAdmin::Audit(String^ line)
    {
        try
        {
            String^ dir = Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::LocalApplicationData), "DarkSteelStudio");
            Directory::CreateDirectory(dir);
            File::AppendAllText(Path::Combine(dir, "audit.log"),
                                DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss") + "  " + Environment::UserName + "  " + line + Environment::NewLine);
        }
        catch (Exception^)
        {
            // an unwritable audit log must not stop the admin action
        }
    }

    void PlayerAdmin::Send(String^ kind, String^ sql, Object^ context, bool isExec)
    {
        m_db->Configure(m_settings->DbHost, m_settings->DbPort, m_settings->DbUser, m_settings->DbPass);

        BrowserJob^ job = gcnew BrowserJob(m_db, m_window->Dispatcher,
                                           gcnew System::Action<BrowserResult^>(this, &PlayerAdmin::OnDone));
        if (isExec) job->Action = "exec";
        else        job->Action = "query";
        job->Sql = sql;
        job->MaxRows = 2000;

        int seq = 0;
        m_seq->TryGetValue(kind, seq);
        ++seq;
        m_seq[kind] = seq;

        PlayerRequest^ request = gcnew PlayerRequest();
        request->Kind = kind;
        request->Seq = seq;
        request->Context = context;
        job->Seq = seq;
        job->State = request;
        job->Start();
    }

    void PlayerAdmin::Leave()
    {
        m_accSearch = nullptr;  m_accSort = nullptr;  m_accSearchButton = nullptr;  m_accRefresh = nullptr;
        m_accCount = nullptr;  m_accStatus = nullptr;  m_accTitle = nullptr;  m_accMeta = nullptr;
        m_accGrid = nullptr;  m_accChars = nullptr;  m_accDeleted = nullptr;
        m_accOpenChar = nullptr;  m_accGradeBox = nullptr;  m_accGradeButton = nullptr;
        m_accBlockReason = nullptr;  m_accBlockDays = nullptr;  m_accBlock = nullptr;  m_accUnblock = nullptr;

        m_chrSearch = nullptr;  m_chrSearchButton = nullptr;  m_chrDeleted = nullptr;
        m_chrCount = nullptr;  m_chrStatus = nullptr;  m_chrGrid = nullptr;
        m_chrTitle = nullptr;  m_chrInfo = nullptr;  m_chrWarn = nullptr;  m_chrFields = nullptr;
        m_chrName = nullptr;  m_chrLevel = nullptr;  m_chrExp = nullptr;  m_chrCp = nullptr;  m_chrPk = nullptr;  m_chrReason = nullptr;
        m_chrApply = nullptr;  m_chrReset = nullptr;  m_chrOpen = nullptr;
        m_chrRow = nullptr;
    }

    // ---------------------------------------------------------------------------
    // one handler for every answer
    // ---------------------------------------------------------------------------

    void PlayerAdmin::OnDone(BrowserResult^ r)
    {
        PlayerRequest^ req = (r == nullptr) ? nullptr : dynamic_cast<PlayerRequest^>(r->State);
        if (req == nullptr) return;

        String^ kind = req->Kind;
        bool isReadKind = !String::Equals(kind, "accaction") && !String::Equals(kind, "chredit");
        int newest = 0;
        if (isReadKind && m_seq->TryGetValue(kind, newest) && newest != req->Seq) return;   // a newer request replaced this one

        if (String::Equals(kind, "accaction") || String::Equals(kind, "chredit"))
        {
            String^ doneText = dynamic_cast<String^>(req->Context);
            if (!r->Ok)
            {
                Say("Failed: " + r->Error);
                if (m_accStatus != nullptr) m_accStatus->Text = "Failed: " + r->Error;
                if (m_chrStatus != nullptr) m_chrStatus->Text = "Failed: " + r->Error;
                return;
            }
            if (String::Equals(kind, "chredit") && r->Affected < 1)
            {
                String^ msg = "Nothing was changed (character not found, the name is already taken, or the values were identical).";
                Say(msg);
                if (m_chrStatus != nullptr) m_chrStatus->Text = msg;
                return;
            }
            Say(doneText);
            if (m_accStatus != nullptr) m_accStatus->Text = doneText;
            if (m_chrStatus != nullptr) m_chrStatus->Text = doneText;
            if (String::Equals(kind, "accaction") && m_accGrid != nullptr) LoadAccounts();
            if (String::Equals(kind, "chredit") && m_chrGrid != nullptr) LoadCharacters();
            return;
        }

        if (String::Equals(kind, "accounts"))
        {
            if (m_accGrid == nullptr) return;
            if (!r->Ok) { m_accStatus->Text = "Could not load accounts: " + r->Error; return; }
            m_accGrid->ItemsSource = r->Table->DefaultView;
            m_accCount->Text = String::Format("{0:N0} account(s)", r->Table->Rows->Count);
            m_accStatus->Text = String::Format("Loaded in {0:N0} ms.", r->Ms);
            if (m_accUid != 0)
            {
                for each (DataRowView^ row in r->Table->DefaultView)
                {
                    if (Num(row, "UID") == m_accUid) { m_accGrid->SelectedItem = row; break; }
                }
            }
        }
        else if (String::Equals(kind, "accchars"))
        {
            if (m_accChars != nullptr) m_accChars->ItemsSource = r->Ok ? r->Table->DefaultView : nullptr;
        }
        else if (String::Equals(kind, "accdeleted"))
        {
            if (m_accDeleted != nullptr) m_accDeleted->ItemsSource = r->Ok ? r->Table->DefaultView : nullptr;
        }
        else if (String::Equals(kind, "chars"))
        {
            if (m_chrGrid == nullptr) return;
            if (!r->Ok) { m_chrStatus->Text = "Could not load characters: " + r->Error; return; }
            m_chrGrid->ItemsSource = r->Table->DefaultView;
            m_chrCount->Text = String::Format("{0:N0} character(s)", r->Table->Rows->Count);
            m_chrStatus->Text = String::Format("Loaded in {0:N0} ms.", r->Ms);

            long long want = m_chrUid;
            if (!String::IsNullOrEmpty(m_chrPreset))
            {
                Int64::TryParse(m_chrPreset, want);
                m_chrPreset = nullptr;
            }
            for each (DataRowView^ row in r->Table->DefaultView)
            {
                if (want != 0 && Num(row, "UID") == want) { m_chrGrid->SelectedItem = row; break; }
            }
        }
    }

    // ===========================================================================
    // Accounts
    // ===========================================================================

    void PlayerAdmin::ShowAccounts(FrameworkElement^ page)
    {
        m_accSearch       = safe_cast<TextBox^>(Req(page, "AccSearchBox"));
        m_accSort         = safe_cast<ComboBox^>(Req(page, "AccSortBox"));
        m_accSearchButton = safe_cast<Button^>(Req(page, "AccSearchButton"));
        m_accRefresh      = safe_cast<Button^>(Req(page, "AccRefreshButton"));
        m_accCount        = safe_cast<TextBlock^>(Req(page, "AccCountText"));
        m_accStatus       = safe_cast<TextBlock^>(Req(page, "AccStatusText"));
        m_accTitle        = safe_cast<TextBlock^>(Req(page, "AccDetailTitle"));
        m_accMeta         = safe_cast<TextBlock^>(Req(page, "AccDetailMeta"));
        m_accGrid         = safe_cast<DataGrid^>(Req(page, "AccountsGrid"));
        m_accChars        = safe_cast<DataGrid^>(Req(page, "AccCharsGrid"));
        m_accDeleted      = safe_cast<DataGrid^>(Req(page, "AccDeletedGrid"));
        m_accOpenChar     = safe_cast<Button^>(Req(page, "AccOpenCharButton"));
        m_accGradeBox     = safe_cast<ComboBox^>(Req(page, "AccGradeBox"));
        m_accGradeButton  = safe_cast<Button^>(Req(page, "AccGradeButton"));
        m_accBlockReason  = safe_cast<TextBox^>(Req(page, "AccBlockReasonBox"));
        m_accBlockDays    = safe_cast<TextBox^>(Req(page, "AccBlockDaysBox"));
        m_accBlock        = safe_cast<Button^>(Req(page, "AccBlockButton"));
        m_accUnblock      = safe_cast<Button^>(Req(page, "AccUnblockButton"));

        m_accSearchButton->Click += gcnew RoutedEventHandler(this, &PlayerAdmin::OnAccSearchClick);
        m_accRefresh->Click      += gcnew RoutedEventHandler(this, &PlayerAdmin::OnAccSearchClick);
        m_accSearch->KeyDown     += gcnew System::Windows::Input::KeyEventHandler(this, &PlayerAdmin::OnAccSearchKey);
        m_accSort->SelectionChanged += gcnew SelectionChangedEventHandler(this, &PlayerAdmin::OnAccSortChanged);
        m_accGrid->SelectionChanged += gcnew SelectionChangedEventHandler(this, &PlayerAdmin::OnAccSelected);
        m_accGradeButton->Click  += gcnew RoutedEventHandler(this, &PlayerAdmin::OnAccGradeClick);
        m_accBlock->Click        += gcnew RoutedEventHandler(this, &PlayerAdmin::OnAccBlockClick);
        m_accUnblock->Click      += gcnew RoutedEventHandler(this, &PlayerAdmin::OnAccUnblockClick);
        m_accOpenChar->Click     += gcnew RoutedEventHandler(this, &PlayerAdmin::OnAccOpenCharClick);
        m_accChars->MouseDoubleClick += gcnew System::Windows::Input::MouseButtonEventHandler(this, &PlayerAdmin::OnAccCharDoubleClick);

        m_accUid = 0;
        m_accStatus->Text = "Loading accounts...";
        LoadAccounts();
    }

    void PlayerAdmin::LoadAccounts()
    {
        if (m_accSearch == nullptr) return;

        String^ q = m_accSearch->Text->Trim();
        String^ filterSql = String::Empty;
        if (q->Length > 0)
        {
            long long number = 0;
            String^ cond = "a.AccountName LIKE " + LikeStr(q) +
                           " OR a.AccountUID IN (SELECT AccountUID FROM " + G() + ".character_tb WHERE CharacterName LIKE " + LikeStr(q) + ")";
            if (Int64::TryParse(q, number))
            {
                cond = cond + " OR a.AccountUID = " + number.ToString() +
                       " OR a.AccountUID IN (SELECT AccountUID FROM " + G() + ".character_tb WHERE CharacterUID = " + number.ToString() + ")";
            }
            filterSql = " WHERE " + cond;
        }

        String^ sortKey = String::Empty;
        ComboBoxItem^ item = dynamic_cast<ComboBoxItem^>(m_accSort->SelectedItem);
        if (item != nullptr && item->Tag != nullptr) sortKey = item->Tag->ToString();
        String^ order = "TopCP DESC, a.AccountUID";
        if (String::Equals(sortKey, "chars"))     order = "Chars DESC, TopCP DESC";
        else if (String::Equals(sortKey, "name")) order = "a.AccountName";
        else if (String::Equals(sortKey, "uid"))  order = "a.AccountUID";

        String^ sql =
            "SELECT a.AccountUID AS UID, a.AccountName AS Account, "
            "COUNT(c.CharacterUID) - COUNT(d.CharacterUID) AS Chars, "
            "COUNT(d.CharacterUID) AS Deleted, "
            "IFNULL(MAX(CASE WHEN d.CharacterUID IS NULL THEN c.CombatPoint END), 0) AS TopCP, "
            "IFNULL(gr.AccountGrade, 0) AS Grade, "
            "IFNULL(ELT(IFNULL(gr.AccountGrade, 0) + 1, 'Player', 'Gamemaster', 'Developer'), 'Unknown') AS Role, "
            "IF(b.BlockEndTime > NOW(), CONCAT('Blocked until ', DATE_FORMAT(b.BlockEndTime, '%Y-%m-%d')), '') AS Status, "
            "f.LoginTime AS LastLogin, f.CreateTime AS Created "
            "FROM " + G() + ".account_tb a "
            "LEFT JOIN " + G() + ".character_tb c ON c.AccountUID = a.AccountUID "
            "LEFT JOIN " + G() + ".character_delete_tb d ON d.CharacterUID = c.CharacterUID "
            "LEFT JOIN " + F() + ".account_tb f ON f.AccountUID = a.AccountUID "
            "LEFT JOIN " + F() + ".account_grade_tb gr ON gr.AccountUID = a.AccountUID "
            "LEFT JOIN " + F() + ".account_block_tb b ON b.AccountUID = a.AccountUID" +
            filterSql +
            " GROUP BY a.AccountUID, a.AccountName, gr.AccountGrade, b.BlockEndTime, f.LoginTime, f.CreateTime"
            " ORDER BY " + order + " LIMIT 1000";
        Send("accounts", sql, nullptr, false);
    }

    void PlayerAdmin::LoadAccountDetail(long long uid)
    {
        String^ cls = ClassCase("c.Class");
        String^ chars =
            "SELECT c.CharacterUID AS UID, " + cls + " AS Class, c.CharacterName AS Name, c.Lev AS Lv, c.CombatPoint AS CP, "
            "IFNULL(g.GuildName, '') AS Guild, c.LoginTime AS LastLogin "
            "FROM " + G() + ".character_tb c "
            "LEFT JOIN " + G() + ".character_guild_tb cg ON cg.CharacterUID = c.CharacterUID "
            "LEFT JOIN " + G() + ".guild_tb g ON g.GuildUID = cg.GuildUID "
            "WHERE c.AccountUID = " + uid.ToString() + " AND c.CharacterUID NOT IN (SELECT CharacterUID FROM " + G() + ".character_delete_tb) "
            "ORDER BY c.CombatPoint DESC";
        String^ deleted =
            "SELECT c.CharacterUID AS UID, " + cls + " AS Class, c.CharacterName AS Name, c.Lev AS Lv, d.DeleteTime AS Deleted "
            "FROM " + G() + ".character_tb c JOIN " + G() + ".character_delete_tb d ON d.CharacterUID = c.CharacterUID "
            "WHERE c.AccountUID = " + uid.ToString() + " ORDER BY d.DeleteTime DESC";
        Send("accchars", chars, nullptr, false);
        Send("accdeleted", deleted, nullptr, false);
    }

    void PlayerAdmin::OnAccSearchClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/) { LoadAccounts(); }

    void PlayerAdmin::OnAccSearchKey(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        if (e->Key == System::Windows::Input::Key::Enter) { LoadAccounts(); e->Handled = true; }
    }

    void PlayerAdmin::OnAccSortChanged(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_accGrid != nullptr) LoadAccounts();
    }

    void PlayerAdmin::OnAccSelected(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_accGrid == nullptr) return;
        DataRowView^ row = dynamic_cast<DataRowView^>(m_accGrid->SelectedItem);
        if (row == nullptr) return;

        long long uid = Num(row, "UID");
        if (uid == m_accUid && m_accChars->ItemsSource != nullptr) return;   // same account re-selected after a refresh
        m_accUid = uid;
        m_accName = Cell(row, "Account");
        m_accTitle->Text = m_accName + "   #" + uid.ToString();

        String^ status = Cell(row, "Status");
        m_accMeta->Text = Cell(row, "Role") + " (grade " + Cell(row, "Grade") + ")  |  " + Cell(row, "Chars") + " character(s), " + Cell(row, "Deleted") + " deleted" +
                          (status->Length > 0 ? ("  |  " + status) : String::Empty) +
                          "\nCreated " + Cell(row, "Created") + "  |  Last login " + Cell(row, "LastLogin");

        for each (Object^ o in m_accGradeBox->Items)
        {
            ComboBoxItem^ gi = dynamic_cast<ComboBoxItem^>(o);
            if (gi != nullptr && gi->Tag != nullptr && String::Equals(gi->Tag->ToString(), Cell(row, "Grade")))
            {
                m_accGradeBox->SelectedItem = gi;
                break;
            }
        }
        LoadAccountDetail(uid);
    }

    void PlayerAdmin::OnAccGradeClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        ComboBoxItem^ gi = (m_accGradeBox == nullptr) ? nullptr : dynamic_cast<ComboBoxItem^>(m_accGradeBox->SelectedItem);
        if (m_accUid == 0 || gi == nullptr || gi->Tag == nullptr) { Say("Select an account and a grade first."); return; }
        String^ grade = gi->Tag->ToString();

        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(m_window,
            "Set the role of " + m_accName + " (#" + m_accUid.ToString() + ") to " + gi->Content->ToString() + "?", "Account grade",
            System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Question);
        if (answer != System::Windows::MessageBoxResult::Yes) return;

        String^ sql = "INSERT INTO " + F() + ".account_grade_tb (AccountUID, AccountGrade) VALUES (" + m_accUid.ToString() + ", " + grade +
                      ") ON DUPLICATE KEY UPDATE AccountGrade = VALUES(AccountGrade)";
        Audit("account.grade uid=" + m_accUid.ToString() + " name=" + m_accName + " grade=" + grade);
        Send("accaction", sql, m_accName + " is now " + gi->Content->ToString() + ".", true);
    }

    void PlayerAdmin::OnAccBlockClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_accUid == 0) { Say("Select an account first."); return; }

        String^ reason = m_accBlockReason->Text->Trim();
        if (reason->Length > 64) reason = reason->Substring(0, 64);
        if (reason->Length == 0) reason = "Blocked by GM";

        int days = 0;
        String^ daysText = m_accBlockDays->Text->Trim();
        if (daysText->Length > 0 && (!Int32::TryParse(daysText, days) || days < 0 || days > 36500))
        {
            Say("Days must be a whole number (empty or 0 = permanent).");
            return;
        }
        String^ end = (days > 0) ? ("NOW() + INTERVAL " + days.ToString() + " DAY") : String::Format("'2037-12-31 00:00:00'");
        String^ when = (days > 0) ? (days.ToString() + " day(s)") : String::Format("permanently");

        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(m_window,
            "Block " + m_accName + " (#" + m_accUid.ToString() + ") " + when + "?\nReason: " + reason, "Block account",
            System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Warning);
        if (answer != System::Windows::MessageBoxResult::Yes) return;

        String^ sql = "INSERT INTO " + F() + ".account_block_tb (AccountUID, BlockReason, BlockEndTime) VALUES (" +
                      m_accUid.ToString() + ", " + SqlStr(reason) + ", " + end + ") ON DUPLICATE KEY UPDATE " +
                      "BlockReason = VALUES(BlockReason), BlockEndTime = VALUES(BlockEndTime)";
        Audit("account.block uid=" + m_accUid.ToString() + " name=" + m_accName + " " + when + " reason=" + reason);
        Send("accaction", sql, m_accName + " blocked " + when + ".", true);
    }

    void PlayerAdmin::OnAccUnblockClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_accUid == 0) { Say("Select an account first."); return; }
        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(m_window,
            "Remove the block from " + m_accName + " (#" + m_accUid.ToString() + ")?", "Unblock account",
            System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Question);
        if (answer != System::Windows::MessageBoxResult::Yes) return;

        Audit("account.unblock uid=" + m_accUid.ToString() + " name=" + m_accName);
        Send("accaction", "DELETE FROM " + F() + ".account_block_tb WHERE AccountUID = " + m_accUid.ToString(), m_accName + " unblocked.", true);
    }

    void PlayerAdmin::OnAccOpenCharClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        DataRowView^ row = (m_accChars == nullptr) ? nullptr : dynamic_cast<DataRowView^>(m_accChars->SelectedItem);
        if (row == nullptr) { Say("Select one of the account's characters first."); return; }
        if (m_navigate != nullptr) m_navigate->Invoke("Characters.xaml", Cell(row, "UID"));
    }

    void PlayerAdmin::OnAccCharDoubleClick(Object^ sender, System::Windows::Input::MouseButtonEventArgs^ e)
    {
        OnAccOpenCharClick(sender, nullptr);
    }

    // ===========================================================================
    // Characters
    // ===========================================================================

    void PlayerAdmin::ShowCharacters(FrameworkElement^ page, String^ presetSearch)
    {
        m_chrSearch       = safe_cast<TextBox^>(Req(page, "ChrSearchBox"));
        m_chrSearchButton = safe_cast<Button^>(Req(page, "ChrSearchButton"));
        m_chrDeleted      = safe_cast<CheckBox^>(Req(page, "ChrDeletedCheck"));
        m_chrCount        = safe_cast<TextBlock^>(Req(page, "ChrCountText"));
        m_chrStatus       = safe_cast<TextBlock^>(Req(page, "ChrStatusText"));
        m_chrGrid         = safe_cast<DataGrid^>(Req(page, "CharactersGrid"));
        m_chrTitle        = safe_cast<TextBlock^>(Req(page, "ChrEditTitle"));
        m_chrInfo         = safe_cast<TextBlock^>(Req(page, "ChrEditInfo"));
        m_chrWarn         = safe_cast<TextBlock^>(Req(page, "ChrEditWarn"));
        m_chrFields       = safe_cast<StackPanel^>(Req(page, "ChrEditFields"));
        m_chrName         = safe_cast<TextBox^>(Req(page, "ChrNameBox"));
        m_chrLevel        = safe_cast<TextBox^>(Req(page, "ChrLevelBox"));
        m_chrExp          = safe_cast<TextBox^>(Req(page, "ChrExpBox"));
        m_chrCp           = safe_cast<TextBox^>(Req(page, "ChrCpBox"));
        m_chrPk           = safe_cast<TextBox^>(Req(page, "ChrPkBox"));
        m_chrReason       = safe_cast<TextBox^>(Req(page, "ChrReasonBox"));
        m_chrApply        = safe_cast<Button^>(Req(page, "ChrApplyButton"));
        m_chrReset        = safe_cast<Button^>(Req(page, "ChrResetButton"));
        m_chrOpen         = safe_cast<Button^>(Req(page, "ChrOpenButton"));

        m_chrSearchButton->Click += gcnew RoutedEventHandler(this, &PlayerAdmin::OnChrSearchClick);
        m_chrSearch->KeyDown     += gcnew System::Windows::Input::KeyEventHandler(this, &PlayerAdmin::OnChrSearchKey);
        m_chrDeleted->Checked    += gcnew RoutedEventHandler(this, &PlayerAdmin::OnChrDeletedChanged);
        m_chrDeleted->Unchecked  += gcnew RoutedEventHandler(this, &PlayerAdmin::OnChrDeletedChanged);
        m_chrGrid->SelectionChanged += gcnew SelectionChangedEventHandler(this, &PlayerAdmin::OnChrSelected);
        m_chrApply->Click        += gcnew RoutedEventHandler(this, &PlayerAdmin::OnChrApplyClick);
        m_chrReset->Click        += gcnew RoutedEventHandler(this, &PlayerAdmin::OnChrResetClick);
        m_chrOpen->Click         += gcnew RoutedEventHandler(this, &PlayerAdmin::OnChrOpenClick);

        m_chrRow = nullptr;
        m_chrUid = 0;
        m_chrPreset = presetSearch;
        if (!String::IsNullOrEmpty(presetSearch)) m_chrSearch->Text = presetSearch;
        m_chrStatus->Text = "Loading characters...";
        LoadCharacters();
    }

    void PlayerAdmin::LoadCharacters()
    {
        if (m_chrSearch == nullptr) return;

        String^ q = m_chrSearch->Text->Trim();
        String^ filterSql = String::Empty;
        if (q->Length > 0)
        {
            long long number = 0;
            filterSql = "c.CharacterName LIKE " + LikeStr(q) + " OR a.AccountName LIKE " + LikeStr(q);
            if (Int64::TryParse(q, number))
            {
                filterSql = filterSql + " OR c.CharacterUID = " + number.ToString() + " OR c.AccountUID = " + number.ToString();
            }
        }
        bool includeDeleted = m_chrDeleted->IsChecked.HasValue && m_chrDeleted->IsChecked.Value;
        String^ filter = String::Empty;
        if (filterSql->Length > 0) filter = "(" + filterSql + ")";
        if (!includeDeleted) filter = filter + (filter->Length > 0 ? gcnew String(" AND ") : String::Empty) + "d.CharacterUID IS NULL";
        if (filter->Length > 0) filter = " WHERE " + filter;

        String^ sql =
            "SELECT c.CharacterUID AS UID, c.CharacterName AS Name, " + ClassCase("c.Class") + " AS Class, c.Lev AS Lv, c.CombatPoint AS CP, "
            "c.Exp AS Exp, c.PKPoint AS PK, a.AccountName AS Account, c.AccountUID AS AccUID, IFNULL(g.GuildName, '') AS Guild, "
            "c.Gold AS Gold, c.Copper AS Copper, c.StageIdx AS Stage, "
            "IF(d.CharacterUID IS NOT NULL, 'Deleted', IF(c.LoginTime > c.LogoutTime, 'Online', '')) AS State, "
            "c.LoginTime AS LastLogin, c.CreateTime AS Created "
            "FROM " + G() + ".character_tb c "
            "LEFT JOIN " + G() + ".account_tb a ON a.AccountUID = c.AccountUID "
            "LEFT JOIN " + G() + ".character_guild_tb cg ON cg.CharacterUID = c.CharacterUID "
            "LEFT JOIN " + G() + ".guild_tb g ON g.GuildUID = cg.GuildUID "
            "LEFT JOIN " + G() + ".character_delete_tb d ON d.CharacterUID = c.CharacterUID" +
            filter +
            " ORDER BY c.CombatPoint DESC, c.CharacterUID LIMIT 1000";
        Send("chars", sql, nullptr, false);
    }

    void PlayerAdmin::OnChrSearchClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/) { LoadCharacters(); }

    void PlayerAdmin::OnChrSearchKey(Object^ /*sender*/, System::Windows::Input::KeyEventArgs^ e)
    {
        if (e->Key == System::Windows::Input::Key::Enter) { LoadCharacters(); e->Handled = true; }
    }

    void PlayerAdmin::OnChrDeletedChanged(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_chrGrid != nullptr) LoadCharacters();
    }

    void PlayerAdmin::OnChrSelected(Object^ /*sender*/, SelectionChangedEventArgs^ /*e*/)
    {
        if (m_chrGrid == nullptr) return;
        m_chrRow = dynamic_cast<DataRowView^>(m_chrGrid->SelectedItem);
        if (m_chrRow != nullptr) m_chrUid = Num(m_chrRow, "UID");
        FillEditPanel();
    }

    void PlayerAdmin::FillEditPanel()
    {
        if (m_chrFields == nullptr) return;
        if (m_chrRow == nullptr)
        {
            m_chrFields->Visibility = Visibility::Collapsed;
            m_chrTitle->Text = "Select a character";
            m_chrInfo->Text = String::Empty;
            m_chrWarn->Text = String::Empty;
            return;
        }

        m_chrTitle->Text = Cell(m_chrRow, "Name") + "   #" + Cell(m_chrRow, "UID");
        m_chrInfo->Text = Cell(m_chrRow, "Class") + "  |  Account " + Cell(m_chrRow, "Account") + " (#" + Cell(m_chrRow, "AccUID") + ")" +
                          (Cell(m_chrRow, "Guild")->Length > 0 ? ("  |  Guild " + Cell(m_chrRow, "Guild")) : String::Empty) +
                          "\nGold " + Cell(m_chrRow, "Gold") + "  |  Copper " + Cell(m_chrRow, "Copper") + "  |  Stage " + Cell(m_chrRow, "Stage") +
                          "\nLast login " + Cell(m_chrRow, "LastLogin") + "  |  Created " + Cell(m_chrRow, "Created") +
                          "\nClass is read-only here: the game switches class through its character-phase procedures.";

        String^ state = Cell(m_chrRow, "State");
        if (String::Equals(state, "Online"))
            m_chrWarn->Text = "This character looks online. The game server holds it in memory and may overwrite edits when it saves on logout.";
        else if (String::Equals(state, "Deleted"))
            m_chrWarn->Text = "This character is deleted (soft delete).";
        else
            m_chrWarn->Text = String::Empty;

        m_chrName->Text  = Cell(m_chrRow, "Name");
        m_chrLevel->Text = Cell(m_chrRow, "Lv");
        m_chrExp->Text   = Cell(m_chrRow, "Exp");
        m_chrCp->Text    = Cell(m_chrRow, "CP");
        m_chrPk->Text    = Cell(m_chrRow, "PK");
        m_chrReason->Text = String::Empty;
        m_chrFields->Visibility = Visibility::Visible;
    }

    void PlayerAdmin::OnChrResetClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/) { FillEditPanel(); }

    // Opens the full read-only profile of the selected character in its own window.
    void PlayerAdmin::OnChrOpenClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_chrRow == nullptr || m_chrUid == 0) { Say("Select a character first."); return; }
        try
        {
            CodexCatalog^ catalog = (m_catalogProvider == nullptr) ? nullptr : m_catalogProvider->Invoke();
            if (catalog == nullptr) { Say("The game data is not available (is the servers path set?)."); return; }
            CharacterWindow^ profile = gcnew CharacterWindow(m_window, m_xamlRoot, m_settings, m_db, catalog, m_chrUid, Cell(m_chrRow, "Name"), m_openItem);
            profile->Show();
        }
        catch (Exception^ ex)
        {
            Say("Could not open the character window: " + ex->Message);
        }
    }

    void PlayerAdmin::OnChrApplyClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        if (m_chrRow == nullptr || m_chrUid == 0) { Say("Select a character first."); return; }

        List<String^>^ sets = gcnew List<String^>();
        List<String^>^ notes = gcnew List<String^>();
        String^ nameClause = String::Empty;

        // Name
        String^ name = m_chrName->Text->Trim();
        if (name->Length == 0 || name->Length > 32) { m_chrStatus->Text = "The name must be 1 to 32 characters."; return; }
        if (!String::Equals(name, Cell(m_chrRow, "Name")))
        {
            sets->Add("CharacterName = " + SqlStr(name));
            notes->Add("name " + Cell(m_chrRow, "Name") + " -> " + name);
            nameClause = " AND NOT EXISTS (SELECT 1 FROM (SELECT CharacterUID FROM " + G() + ".character_tb WHERE CharacterName = " +
                         SqlStr(name) + " AND CharacterUID <> " + m_chrUid.ToString() + ") AS taken)";
        }

        // Numbers: column, box, label, min, max
        array<String^>^ columns = gcnew array<String^> { "Lev", "Exp", "CombatPoint", "PKPoint" };
        array<String^>^ keys    = gcnew array<String^> { "Lv", "Exp", "CP", "PK" };
        array<String^>^ labels  = gcnew array<String^> { "Level", "Experience", "Combat power", "PK points" };
        array<TextBox^>^ boxes  = gcnew array<TextBox^> { m_chrLevel, m_chrExp, m_chrCp, m_chrPk };
        array<long long>^ lows  = gcnew array<long long> { 1, 0, 0, 0 };
        array<long long>^ highs = gcnew array<long long> { 150, 2147483647LL, 2147483647LL, 9000000000000000000LL };

        for (int i = 0; i < columns->Length; ++i)
        {
            long long value = 0;
            if (!Int64::TryParse(boxes[i]->Text->Trim(), value) || value < lows[i] || value > highs[i])
            {
                m_chrStatus->Text = labels[i] + " must be a whole number from " + lows[i].ToString() + " to " + highs[i].ToString("N0") + ".";
                return;
            }
            if (value != Num(m_chrRow, keys[i]))
            {
                sets->Add(columns[i] + " = " + value.ToString());
                notes->Add(String::Format("{0} {1} -> {2}", labels[i]->ToLowerInvariant(), Num(m_chrRow, keys[i]), value));
            }
        }

        if (sets->Count == 0) { m_chrStatus->Text = "Nothing to change."; return; }

        String^ summary = String::Join(", ", notes);
        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(m_window,
            "Apply to " + Cell(m_chrRow, "Name") + " (#" + m_chrUid.ToString() + "):\n\n" + summary +
            (String::Equals(Cell(m_chrRow, "State"), "Online") ? gcnew String("\n\nThe character looks ONLINE - the game may overwrite this on logout.") : String::Empty) +
            "\n\nContinue?", "Edit character", System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Warning);
        if (answer != System::Windows::MessageBoxResult::Yes) return;

        String^ reason = m_chrReason->Text->Trim();
        if (reason->Length == 0) reason = "Manual GM modification";

        String^ sql = "UPDATE " + G() + ".character_tb SET " + String::Join(", ", sets) +
                      " WHERE CharacterUID = " + m_chrUid.ToString() + nameClause + " LIMIT 1";
        Audit("character.edit uid=" + m_chrUid.ToString() + " " + summary + " reason=" + reason);
        m_chrStatus->Text = "Saving...";
        Send("chredit", sql, "Saved " + Cell(m_chrRow, "Name") + ": " + summary + ".", true);
    }
}
