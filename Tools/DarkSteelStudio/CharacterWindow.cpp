#include "CharacterWindow.h"

namespace DarkSteelStudio {

    using namespace System::IO;
    using namespace System::Data;
    using namespace System::Windows::Markup;

    // ---------------------------------------------------------------------------
    // construction
    // ---------------------------------------------------------------------------

    CharacterWindow::CharacterWindow(Window^ owner, String^ xamlRoot, StudioSettings^ settings, DbBrowser^ db,
                                     CodexCatalog^ catalog, long long characterUid, String^ characterName,
                                     System::Action<long long>^ openItem)
    {
        m_openItem  = openItem;
        m_edits     = gcnew Dictionary<int, CwRequest^>();
        m_overviewInt = gcnew Dictionary<String^, bool>();
        m_editSeq   = 0;
        m_accountUid = 0;
        m_settings  = settings;
        m_db        = db;
        m_catalog   = catalog;
        m_uid       = characterUid;
        m_name      = characterName;
        m_xamlRoot  = xamlRoot;
        m_generation = 0;
        m_closed    = false;
        m_sections  = gcnew List<CwSection^>();
        m_tabPanels = gcnew Dictionary<String^, StackPanel^>();
        m_tabEmpty  = gcnew Dictionary<String^, TextBlock^>();
        m_tabLoaded = gcnew Dictionary<String^, bool>();
        m_tabPending = gcnew Dictionary<String^, int>();
        m_tabShown  = gcnew Dictionary<String^, int>();

        LoadXaml(owner);
        BuildTabs();
        m_title->Text = m_name;
        m_window->Title = "Character - " + m_name + " (#" + m_uid.ToString() + ")";
        m_status->Text = "Loading...";
        LoadOverview();
    }

    void CharacterWindow::Show()
    {
        m_window->Show();
        m_window->Activate();
    }

    String^ CharacterWindow::G() { return DbBrowser::Quote(m_settings->GameSchema); }

    void CharacterWindow::LoadXaml(Window^ owner)
    {
        String^ file = Path::Combine(m_xamlRoot, "CharacterWindow.xaml");
        ParserContext^ context = gcnew ParserContext();
        context->BaseUri = gcnew Uri(file, UriKind::Absolute);

        FileStream^ stream = gcnew FileStream(file, FileMode::Open, FileAccess::Read, FileShare::Read);
        try
        {
            m_window = dynamic_cast<Window^>(XamlReader::Load(stream, context));
        }
        finally
        {
            stream->Close();
        }
        if (m_window == nullptr)
        {
            throw gcnew InvalidOperationException("CharacterWindow.xaml: the root must be a <Window>.");
        }
        m_window->Owner = owner;

        m_tabs     = safe_cast<TabControl^>(m_window->FindName("CwTabs"));
        m_title    = safe_cast<TextBlock^>(m_window->FindName("CwTitleText"));
        m_subtitle = safe_cast<TextBlock^>(m_window->FindName("CwSubtitleText"));
        m_classIcon = dynamic_cast<Image^>(m_window->FindName("CwClassIcon"));
        m_status   = safe_cast<TextBlock^>(m_window->FindName("CwStatusText"));
        m_refresh  = safe_cast<Button^>(m_window->FindName("CwRefreshButton"));
        if (m_tabs == nullptr || m_title == nullptr || m_subtitle == nullptr || m_status == nullptr || m_refresh == nullptr)
        {
            throw gcnew InvalidOperationException("CharacterWindow.xaml is missing a required control.");
        }

        m_tabs->SelectionChanged += gcnew SelectionChangedEventHandler(this, &CharacterWindow::OnTabChanged);
        m_refresh->Click += gcnew RoutedEventHandler(this, &CharacterWindow::OnRefreshClick);
        m_window->Closed += gcnew EventHandler(this, &CharacterWindow::OnClosed);
    }

    void CharacterWindow::OnClosed(Object^ /*sender*/, EventArgs^ /*e*/) { m_closed = true; }

    // ---------------------------------------------------------------------------
    // tabs and sections
    // ---------------------------------------------------------------------------

    StackPanel^ CharacterWindow::EnsureTab(String^ tab)
    {
        StackPanel^ panel;
        if (m_tabPanels->TryGetValue(tab, panel)) return panel;

        panel = gcnew StackPanel();
        panel->Margin = Thickness(4.0, 10.0, 12.0, 10.0);

        TextBlock^ empty = gcnew TextBlock();
        empty->Text = "Nothing is stored for this character on this tab.";
        empty->Visibility = Visibility::Collapsed;
        empty->Margin = Thickness(0.0, 0.0, 0.0, 8.0);
        System::Windows::Media::Brush^ muted = dynamic_cast<System::Windows::Media::Brush^>(m_window->TryFindResource("Brush.TextMuted"));
        if (muted != nullptr) empty->Foreground = muted;
        panel->Children->Add(empty);

        ScrollViewer^ scroll = gcnew ScrollViewer();
        scroll->VerticalScrollBarVisibility = ScrollBarVisibility::Auto;
        scroll->Content = panel;

        TabItem^ item = gcnew TabItem();
        item->Header = tab;
        item->Tag = tab;
        item->Content = scroll;
        m_tabs->Items->Add(item);

        m_tabPanels[tab] = panel;
        m_tabEmpty[tab] = empty;
        return panel;
    }

    CwSection^ CharacterWindow::AddSection(String^ tab, String^ title, String^ sql, String^ names)
    {
        StackPanel^ panel = EnsureTab(tab);

        CwSection^ s = gcnew CwSection();
        s->Tab = tab;
        s->Title = title;
        s->Sql = sql;
        s->Names = names;
        s->Edits = gcnew Dictionary<String^, String^>();

        TextBlock^ heading = gcnew TextBlock();
        System::Windows::Style^ titleStyle = dynamic_cast<System::Windows::Style^>(m_window->TryFindResource("CardTitleStyle"));
        if (titleStyle != nullptr) heading->Style = titleStyle;
        heading->Text = title->ToUpperInvariant();

        DataGrid^ grid = gcnew DataGrid();
        grid->IsReadOnly = true;
        grid->AutoGenerateColumns = true;
        grid->CanUserAddRows = false;
        grid->HeadersVisibility = DataGridHeadersVisibility::Column;
        grid->MaxHeight = 320.0;
        grid->ClipboardCopyMode = DataGridClipboardCopyMode::IncludeHeader;
        grid->Tag = s;
        grid->SelectionMode = DataGridSelectionMode::Single;
        grid->AutoGeneratingColumn += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &CharacterWindow::OnAutoColumn);
        grid->CellEditEnding += gcnew EventHandler<DataGridCellEditEndingEventArgs^>(this, &CharacterWindow::OnCellEditEnding);
        grid->MouseDoubleClick += gcnew System::Windows::Input::MouseButtonEventHandler(this, &CharacterWindow::OnGridDoubleClick);

        DockPanel^ head = gcnew DockPanel();
        head->Children->Add(heading);
        head->Margin = Thickness(0.0, 0.0, 0.0, 4.0);
        s->Head = head;

        StackPanel^ inner = gcnew StackPanel();
        inner->Children->Add(head);
        inner->Children->Add(grid);

        Border^ box = gcnew Border();
        System::Windows::Style^ cardStyle = dynamic_cast<System::Windows::Style^>(m_window->TryFindResource("CardStyle"));
        if (cardStyle != nullptr) box->Style = cardStyle;
        box->Padding = Thickness(10.0);
        box->Margin = Thickness(0.0, 0.0, 0.0, 10.0);
        box->Child = inner;
        box->Visibility = Visibility::Collapsed;    // shown once it has rows
        panel->Children->Add(box);

        s->Box = box;
        s->TitleText = heading;
        s->Grid = grid;
        m_sections->Add(s);
        return s;
    }

    void CharacterWindow::BuildTabs()
    {
        String^ g = G();
        String^ u = m_uid.ToString();

        // ---- Overview (two tables filled by the overview query) ----
        {
            Grid^ layout = gcnew Grid();
            layout->Margin = Thickness(4.0, 10.0, 12.0, 10.0);
            ColumnDefinition^ c0 = gcnew ColumnDefinition();
            ColumnDefinition^ c1 = gcnew ColumnDefinition();
            c1->Width = GridLength(380.0);
            layout->ColumnDefinitions->Add(c0);
            layout->ColumnDefinitions->Add(c1);

            System::Windows::Style^ cardStyle = dynamic_cast<System::Windows::Style^>(m_window->TryFindResource("CardStyle"));
            System::Windows::Style^ titleStyle = dynamic_cast<System::Windows::Style^>(m_window->TryFindResource("CardTitleStyle"));
            array<String^>^ heads = gcnew array<String^> { "PROFILE", "CURRENCIES & ACCOUNT" };
            array<DataGrid^>^ grids = gcnew array<DataGrid^>(2);
            for (int i = 0; i < 2; ++i)
            {
                TextBlock^ heading = gcnew TextBlock();
                if (titleStyle != nullptr) heading->Style = titleStyle;
                heading->Text = heads[i];
                DataGrid^ grid = gcnew DataGrid();
                grid->AutoGenerateColumns = true;
                grid->CanUserAddRows = false;
                grid->HeadersVisibility = DataGridHeadersVisibility::None;
                grid->ClipboardCopyMode = DataGridClipboardCopyMode::IncludeHeader;
                grid->IsReadOnly = false;
                grid->Tag = "overview";
                grid->AutoGeneratingColumn += gcnew EventHandler<DataGridAutoGeneratingColumnEventArgs^>(this, &CharacterWindow::OnAutoColumn);
                grid->BeginningEdit += gcnew EventHandler<DataGridBeginningEditEventArgs^>(this, &CharacterWindow::OnBeginningEdit);
                grid->CellEditEnding += gcnew EventHandler<DataGridCellEditEndingEventArgs^>(this, &CharacterWindow::OnCellEditEnding);
                StackPanel^ inner = gcnew StackPanel();
                inner->Children->Add(heading);
                inner->Children->Add(grid);
                Border^ box = gcnew Border();
                if (cardStyle != nullptr) box->Style = cardStyle;
                box->Padding = Thickness(10.0);
                box->Margin = Thickness(0.0, 0.0, (i == 0) ? 10.0 : 0.0, 0.0);
                box->VerticalAlignment = System::Windows::VerticalAlignment::Top;
                box->Child = inner;
                Grid::SetColumn(box, i);
                layout->Children->Add(box);
                grids[i] = grid;
            }
            m_profileGrid = grids[0];
            m_currencyGrid = grids[1];

            ScrollViewer^ scroll = gcnew ScrollViewer();
            scroll->VerticalScrollBarVisibility = ScrollBarVisibility::Auto;
            scroll->Content = layout;
            TabItem^ item = gcnew TabItem();
            item->Header = "Overview";
            item->Tag = "Overview";
            item->Content = scroll;
            m_tabs->Items->Add(item);
        }

        // ---- shared item-query pieces ----
        String^ itemJoins =
            " LEFT JOIN " + g + ".item_reinforce_tb rf ON rf.ItemUID = it.ItemUID"
            " LEFT JOIN " + g + ".item_smelting_tb sm ON sm.ItemUID = it.ItemUID";
        String^ itemExtras =
            ", IFNULL(rf.ReinforceLev, 0) AS Reinforce, IFNULL(sm.SmeltingLev, 0) AS Smelting, it.IsLock AS Locked"
            ", (SELECT GROUP_CONCAT(CONCAT(o.OptionSlot, ':', o.OptionIdx, '=', o.OptionValue) ORDER BY o.OptionSlot SEPARATOR '  ') FROM " + g + ".item_option_tb o WHERE o.ItemUID = it.ItemUID) AS Options"
            ", (SELECT GROUP_CONCAT(CONCAT(j.JewelSlot, ':', j.JewelItemIdx) ORDER BY j.JewelSlot SEPARATOR '  ') FROM " + g + ".item_jewel_tb j WHERE j.ItemUID = it.ItemUID) AS Jewels";

        // ---- Items ----
        AddSection("Items", "Equipped",
            "SELECT e.EquipSlot AS Slot, it.ItemUID AS UID, it.ItemIdx AS ItemId" + itemExtras +
            " FROM " + g + ".equip_item_tb e JOIN " + g + ".item_tb it ON it.ItemUID = e.ItemUID" + itemJoins +
            " WHERE e.CharacterUID = " + u + " ORDER BY e.EquipSlot", "ItemId=item");
        AddSection("Items", "Inventory",
            "SELECT it.ItemUID AS UID, it.ItemIdx AS ItemId, IFNULL(st.StackCnt, 1) AS Stack" + itemExtras +
            " FROM " + g + ".item_character_tb ic JOIN " + g + ".item_tb it ON it.ItemUID = ic.ItemUID" + itemJoins +
            " LEFT JOIN " + g + ".item_stack_tb st ON st.ItemUID = it.ItemUID"
            " WHERE ic.CharacterUID = " + u +
            " AND it.ItemUID NOT IN (SELECT ItemUID FROM " + g + ".equip_item_tb WHERE CharacterUID = " + u + ")"
            " AND it.ItemUID NOT IN (SELECT ItemUID FROM " + g + ".item_storage_tb WHERE CharacterUID = " + u + ")"
            " ORDER BY it.ItemIdx LIMIT 3000", "ItemId=item");
        CwSection^ storageSection = AddSection("Items", "Storage",
            "SELECT it.ItemUID AS UID, it.ItemIdx AS ItemId, s.StackCnt AS Stack" + itemExtras +
            " FROM " + g + ".item_storage_tb s JOIN " + g + ".item_tb it ON it.ItemUID = s.ItemUID" + itemJoins +
            " WHERE s.CharacterUID = " + u + " ORDER BY it.ItemIdx LIMIT 3000", "ItemId=item");
        storageSection->AlwaysShow = true;   // the warehouse is part of the page even while it holds nothing
        AddSection("Items", "Storage size",
            "SELECT SlotCount AS Slots FROM " + g + ".item_storage_size_tb WHERE CharacterUID = " + u, nullptr);
        AddSection("Items", "Quick slots",
            "SELECT SlotIndex AS Slot, ItemIndex AS ItemId FROM " + g + ".character_quickslot_tb WHERE CharacterUID = " + u + " ORDER BY SlotIndex", "ItemId=item");

        // ---- Skills ----
        AddSection("Skills", "Skills",
            "SELECT ActiveIdx AS SkillId, ActiveLev AS Level FROM " + g + ".skill_active_tb WHERE CharacterUID = " + u + " ORDER BY ActiveIdx", "SkillId=skill");
        AddSection("Skills", "Skill decks",
            "SELECT DeckNum AS Deck, SkillSlot AS Slot, ActiveIdx AS SkillId FROM " + g + ".skill_deck_tb WHERE CharacterUID = " + u + " ORDER BY DeckNum, SkillSlot", "SkillId=skill");
        AddSection("Skills", "Passive groups",
            "SELECT PassiveGroupIdx AS GroupId, PassiveGroupLev AS Level, PassiveGroupExp AS Exp FROM " + g + ".skill_passivegroup_tb WHERE CharacterUID = " + u + " ORDER BY PassiveGroupIdx", nullptr);
        AddSection("Skills", "Passives",
            "SELECT PassiveGroupIdx AS GroupId, PassiveIdx AS PassiveId, PassiveLev AS Level FROM " + g + ".skill_passive_tb WHERE CharacterUID = " + u + " ORDER BY PassiveGroupIdx, PassiveIdx", nullptr);
        AddSection("Skills", "Potential",
            "SELECT PotentialId, Level, UpdateTime FROM " + g + ".character_potential_tb WHERE CharacterUID = " + u + " ORDER BY PotentialId", nullptr);

        // ---- Spirits & Mounts ----
        AddSection("Spirits & Mounts", "Spirits",
            "SELECT p.PetTID AS PetId, p.Grade, (SELECT GROUP_CONCAT(it.ItemIdx ORDER BY pe.SlotID SEPARATOR ',') FROM " + g + ".pet_equip_item_tb pe JOIN " + g + ".item_tb it ON it.ItemUID = pe.ItemUID "
            "WHERE pe.CharacterUID = p.CharacterUID AND pe.PetTID = p.PetTID) AS Equipment FROM " + g + ".pet_tb p WHERE p.CharacterUID = " + u + " ORDER BY p.PetTID", "PetId=pet;Equipment=itemlist");
        AddSection("Spirits & Mounts", "Spirit decks",
            "SELECT DeckID AS Deck, SlotID AS Slot, PetTID AS PetId FROM " + g + ".pet_deck_tb WHERE CharacterUID = " + u + " ORDER BY DeckID, SlotID", "PetId=pet");
        AddSection("Spirits & Mounts", "Spirit equipment",
            "SELECT pe.PetTID AS PetId, pe.SlotID AS Slot, it.ItemIdx AS ItemId FROM " + g + ".pet_equip_item_tb pe JOIN " + g + ".item_tb it ON it.ItemUID = pe.ItemUID"
            " WHERE pe.CharacterUID = " + u + " ORDER BY pe.PetTID, pe.SlotID", "PetId=pet;ItemId=item");
        AddSection("Spirits & Mounts", "Mounts",
            "SELECT v.VehicleGroupId AS GroupId, v.VehicleIdx AS MountId, IF(ev.VehicleGroupId IS NULL, '', 'Equipped') AS State FROM " + g + ".vehicle_tb v"
            " LEFT JOIN " + g + ".equip_vehicle_tb ev ON ev.CharacterUID = v.CharacterUID AND ev.VehicleGroupId = v.VehicleGroupId"
            " WHERE v.CharacterUID = " + u + " ORDER BY v.VehicleGroupId", "MountId=vehicle");

        // ---- Progress ----
        AddSection("Progress", "Main quests", "SELECT QuestIdx AS QuestId, State, QuestValue AS Value FROM " + g + ".quest_main_tb WHERE CharacterUID = " + u + " ORDER BY QuestIdx", "QuestId=quest");
        AddSection("Progress", "Sub quests", "SELECT QuestIdx AS QuestId, State, QuestValue AS Value FROM " + g + ".quest_sub_tb WHERE CharacterUID = " + u + " ORDER BY QuestIdx", "QuestId=quest");
        AddSection("Progress", "Request quests", "SELECT QuestId, State, QuestValue AS Value, UpdateTime FROM " + g + ".quest_request_tb WHERE CharacterUID = " + u + " ORDER BY QuestId", nullptr);
        AddSection("Progress", "Mystery (relation) quests", "SELECT RelationId, State, CurrentLevel AS Value FROM " + g + ".quest_relation_tb WHERE CharacterUID = " + u + " ORDER BY RelationId", "RelationId=relation");
        AddSection("Progress", "Daily quests", "SELECT QuestIdx AS QuestId, State, QuestValue AS Value FROM " + g + ".quest_daily_list_tb WHERE CharacterUID = " + u + " ORDER BY QuestIdx", "QuestId=dailyquest");
        AddSection("Progress", "Achievements", "SELECT AchievementGroupIdx AS GroupId, AchievementGroupGrade AS Grade FROM " + g + ".achievement_tb WHERE CharacterUID = " + u + " ORDER BY AchievementGroupIdx", "GroupId=achievement");
        AddSection("Progress", "Collection book",
            "SELECT CollectionStageIdx AS Stage, CollectionMonsterIdx AS Monster, CollectionLev AS Level, CollectionCnt AS Count FROM " + g + ".collectionbook_tb WHERE CharacterUID = " + u + " ORDER BY CollectionStageIdx, CollectionMonsterIdx", nullptr);
        AddSection("Progress", "Collection rewards", "SELECT CollectionStageIdx AS Stage FROM " + g + ".collectionbook_stagereward_tb WHERE CharacterUID = " + u + " ORDER BY CollectionStageIdx", nullptr);
        AddSection("Progress", "Item collections", "SELECT CollectionId, SlotMask FROM " + g + ".item_collection_tb WHERE CharacterUID = " + u + " ORDER BY CollectionId", nullptr);
        AddSection("Progress", "Scripture hall",
            "SELECT CollectionID, Slot1Count, Slot2Count, Slot3Count, Slot4Count, Slot5Count, CompleteDate, RewardDate FROM " + g + ".scripture_tb WHERE CharacterUID = " + u + " ORDER BY CollectionID", nullptr);
        AddSection("Progress", "Events", "SELECT EventId, StepNumber AS Step, ClaimedAt FROM " + g + ".event_progress_tb WHERE CharacterUID = " + u + " ORDER BY EventId", nullptr);
        AddSection("Progress", "Play data", "SELECT PlayDataIdx AS Id, PlayDataValue AS Value FROM " + g + ".playdata_tb WHERE CharacterUID = " + u + " ORDER BY PlayDataIdx", nullptr);
        AddSection("Progress", "Waypoints", "SELECT WayPointIdx AS WaypointId FROM " + g + ".waypoint_tb WHERE CharacterUID = " + u + " ORDER BY WayPointIdx", nullptr);

        // ---- Growth ----
        AddSection("Growth", "Inner force", "SELECT ForceIdx AS ForceId, Level, SlumpExpireTime FROM " + g + ".force_tb WHERE CharacterUID = " + u + " ORDER BY ForceIdx", nullptr);
        AddSection("Growth", "Inner force blood", "SELECT ForceIdx AS ForceId, BloodIdx AS BloodId, BloodLev AS Level FROM " + g + ".force_blood_tb WHERE CharacterUID = " + u + " ORDER BY ForceIdx, BloodIdx", nullptr);
        AddSection("Growth", "Masteries", "SELECT MasterySlot AS Slot, MasteryCnt AS Points FROM " + g + ".mastery_tb WHERE CharacterUID = " + u + " ORDER BY MasterySlot", nullptr);
        AddSection("Growth", "Holy stuff", "SELECT HolyStuffIdx AS HolyStuffId, HolyStuffLev AS Level, HolyStuffExp AS Exp FROM " + g + ".holystuff_tb WHERE CharacterUID = " + u + " ORDER BY HolyStuffIdx", nullptr);
        AddSection("Growth", "Holy stuff slots", "SELECT HolyStuffIdx AS HolyStuffId, HolyStuffSlot AS Slot, HolyStuffSlotLev AS SlotLevel FROM " + g + ".holystuff_slot_tb WHERE CharacterUID = " + u + " ORDER BY HolyStuffIdx, HolyStuffSlot", nullptr);
        AddSection("Growth", "Treasures", "SELECT TreasureIdx AS TreasureId, TreasureLev AS Level FROM " + g + ".treasure_lev_tb WHERE CharacterUID = " + u + " ORDER BY TreasureIdx", nullptr);
        AddSection("Growth", "Dragon gear blessing", "SELECT SlotId, SlotLevel, SlotExp FROM " + g + ".dragon_gear_bless_tb WHERE CharacterUID = " + u + " ORDER BY SlotId", nullptr);
        AddSection("Growth", "Divine dragon", "SELECT HoleId, IsTemp, Slot, OptionIdx, OptionValue FROM " + g + ".character_divine_dragon_tb WHERE CharacterUID = " + u + " ORDER BY HoleId, Slot", nullptr);
        AddSection("Growth", "Divine chart", "SELECT PieceId, PuzzleId, RestoredTime FROM " + g + ".divine_chart_tb WHERE CharacterUID = " + u + " ORDER BY PieceId", nullptr);
        AddSection("Growth", "Closed training", "SELECT TrainingStatusId AS StatusId, TrainingLevel AS Level FROM " + g + ".closed_training_tb WHERE CharacterUID = " + u + " ORDER BY TrainingStatusId", nullptr);
        AddSection("Growth", "Artifacts", "SELECT a.ArtifactSlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".artifact_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.ItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.ArtifactSlot", "ItemId=item");
        AddSection("Growth", "Transference equipment", "SELECT a.TESlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".te_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.ItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.TESlot", "ItemId=item");
        AddSection("Growth", "Ragnos", "SELECT a.RagnosSlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".ragnos_equip_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.ItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.RagnosSlot", "ItemId=item");
        AddSection("Growth", "Conquest treasures", "SELECT a.TreasureSlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".conquest_treasure_equip_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.ItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.TreasureSlot", "ItemId=item");
        AddSection("Growth", "Magic stone decks", "SELECT a.DeckIndex AS Deck, a.EquipSlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".magic_stone_deck_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.EquipItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.DeckIndex, a.EquipSlot", "ItemId=item");
        AddSection("Growth", "Magic orb decks", "SELECT a.DeckIndex AS Deck, a.EquipSlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".magic_orb_deck_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.EquipItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.DeckIndex, a.EquipSlot", "ItemId=item");
        AddSection("Growth", "Mystical piece decks", "SELECT a.DeckIndex AS Deck, a.EquipSlot AS Slot, it.ItemIdx AS ItemId FROM " + g + ".mystical_piece_deck_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.EquipItemUID WHERE a.CharacterUID = " + u + " ORDER BY a.DeckIndex, a.EquipSlot", "ItemId=item");

        // ---- Guild & Conquest ----
        AddSection("Guild & Conquest", "Guild",
            "SELECT gd.GuildUID, gd.GuildName, gd.GuildLevel, cg.MemberGrade, cg.Alias, cg.AuthPersonnel, cg.AuthFinance, cg.AuthDiplomacy, cg.AuthWarfare FROM " + g + ".character_guild_tb cg"
            " JOIN " + g + ".guild_tb gd ON gd.GuildUID = cg.GuildUID WHERE cg.CharacterUID = " + u, nullptr);
        AddSection("Guild & Conquest", "Conquest buildings",
            "SELECT BuildingUID AS BuildingId, UpgradeLevel AS Level, UpgradeState AS State, Opened, SupportCount, MaxSupportCount, TotalAccelTime, UpdateTime FROM " + g + ".great_building_tb WHERE CharacterUID = " + u + " ORDER BY BuildingUID", "BuildingId=building");
        AddSection("Guild & Conquest", "Domination state", "SELECT State, ConquerWorldId, ReturnStageIdx, ReturnX, ReturnY, ReturnZ, EnterTime, UpdateTime FROM " + g + ".character_conquer_tb WHERE CharacterUID = " + u, nullptr);
        AddSection("Guild & Conquest", "Guild daily missions", "SELECT MissionIndex AS Mission, GuildUID, Count, ClearCnt, LastUpdateTime, LastCollectTime FROM " + g + ".guild_daily_mission_tb WHERE CharacterUID = " + u + " ORDER BY MissionIndex", nullptr);
        AddSection("Guild & Conquest", "Guild development", "SELECT GuildUID, DonationCount, LastUpdateTime FROM " + g + ".guild_develop_limit_tb WHERE CharacterUID = " + u, nullptr);
        AddSection("Guild & Conquest", "Guild expedition tickets", "SELECT RemainingTicket, LastResetTime FROM " + g + ".guild_expedition_ticket_tb WHERE CharacterUID = " + u, nullptr);
        AddSection("Guild & Conquest", "Friends",
            "SELECT f.FriendUID AS UID, c2.CharacterName AS Name, f.Favorites, f.CreateTime FROM " + g + ".character_friend_tb f LEFT JOIN " + g + ".character_tb c2 ON c2.CharacterUID = f.FriendUID WHERE f.CharacterUID = " + u + " ORDER BY f.CreateTime DESC", nullptr);

        // ---- Appearance ----
        AddSection("Appearance", "Costumes",
            "SELECT CostumeIdx AS CostumeId, CostumeGrade AS Grade, PaletteGroupIdx AS Palette, HairColorIdx AS HairColor, MainColorBrightness AS MainBrightness, ClothesColorIdx AS ClothesColor, SubColorBrightness AS SubBrightness FROM " + g + ".costume_tb WHERE CharacterUID = " + u + " ORDER BY CostumeIdx", nullptr);
        AddSection("Appearance", "Equipped costumes", "SELECT e.CostumeEquipSlot AS Slot, e.CostumeIdx AS CostumeId, IFNULL(h.IsHidden, 0) AS Hidden FROM " + g + ".equip_costume_tb e LEFT JOIN " + g + ".equip_costume_hide_tb h ON h.CharacterUID = e.CharacterUID AND h.CostumeEquipSlot = e.CostumeEquipSlot WHERE e.CharacterUID = " + u + " ORDER BY e.CostumeEquipSlot", nullptr);
        AddSection("Appearance", "Luxury costumes", "SELECT a.LuxuryParts AS Part, it.ItemIdx AS ItemId, IFNULL(h.IsHidden, 0) AS Hidden FROM " + g + ".luxury_costume_equip_tb a JOIN " + g + ".item_tb it ON it.ItemUID = a.EquipItemUID LEFT JOIN " + g + ".luxury_costume_hide_tb h ON h.CharacterUID = a.CharacterUID AND h.LuxuryParts = a.LuxuryParts WHERE a.CharacterUID = " + u + " ORDER BY a.LuxuryParts", "ItemId=item");
        AddSection("Appearance", "Customize", "SELECT ElementType, ElementValue FROM " + g + ".customize_tb WHERE CharacterUID = " + u + " ORDER BY ElementType", nullptr);
        AddSection("Appearance", "Phase customize", "SELECT PhaseClass, ElementType, ElementValue FROM " + g + ".phase_customize_tb WHERE CharacterUID = " + u + " ORDER BY PhaseClass, ElementType", nullptr);
        AddSection("Appearance", "Titles", "SELECT CustomTitle FROM " + g + ".customtitle_tb WHERE CharacterUID = " + u, nullptr);

        // ---- Misc ----
        AddSection("Misc", "Buffs", "SELECT BuffId, RemainTimeMs, SkillLevel FROM " + g + ".character_buff_tb WHERE CharacterUID = " + u + " ORDER BY BuffId", nullptr);
        AddSection("Misc", "Dungeon tickets", "SELECT TicketType, TicketCount, GoldRechargeCount, ItemRechargeCount, LastResetTime FROM " + g + ".character_dungeon_ticket_tb WHERE CharacterUID = " + u + " ORDER BY TicketType", nullptr);
        AddSection("Misc", "Game options", "SELECT OptionType, OptionValue FROM " + g + ".game_option_tb WHERE CharacterUID = " + u + " ORDER BY OptionType", nullptr);
        AddSection("Misc", "Market listings", "SELECT SaleState, ItemTID AS ItemId, StackCount, CostType, CostValue, RegisterTime, EndTime, SoldTime FROM " + g + ".market_tb WHERE CharacterUID = " + u + " ORDER BY RegisterTime DESC", "ItemId=item");
        AddSection("Misc", "Death penalties", "SELECT PenaltyType, StageId, Exp, Level, Disabled, RecoveryCompleted, StartDate, EndDate FROM " + g + ".character_death_penalty WHERE CharacterUID = " + u + " ORDER BY StartDate DESC", nullptr);
        AddSection("Misc", "Payments", "SELECT TransactionId, GoodsId, ProductId, PriceCents, Status, CreateDate, PaidDate, DeliveredDate FROM " + g + ".payment_tb WHERE CharacterUID = " + u + " ORDER BY CreateDate DESC", nullptr);
        AddSection("Misc", "Coupons used", "SELECT CouponID, CouponCode, UsedTime FROM " + g + ".coupon_tb WHERE CharacterUID = " + u + " ORDER BY UsedTime DESC", nullptr);
        AddSection("Misc", "Battle pass records", "SELECT RecordType, KeyId, Value FROM " + g + ".event_battlepass_tb WHERE CharacterUID = " + u + " ORDER BY RecordType, KeyId LIMIT 500", nullptr);
        AddSection("Misc", "Gacha", "SELECT GachaType, Value FROM " + g + ".gacha_tb WHERE CharacterUID = " + u, nullptr);

        // ---- editable columns: {v} = the new value, {Col} = that column's current value in the row ----
        array<String^>^ itemTitles = gcnew array<String^> { "Equipped", "Inventory", "Storage" };
        for each (String^ title in itemTitles)
        {
            Edit("Items", title, "Reinforce", "INSERT INTO " + g + ".item_reinforce_tb (ItemUID, ReinforceLev) VALUES ({UID}, {v}) ON DUPLICATE KEY UPDATE ReinforceLev = VALUES(ReinforceLev)");
            Edit("Items", title, "Smelting",  "INSERT INTO " + g + ".item_smelting_tb (ItemUID, SmeltingLev) VALUES ({UID}, {v}) ON DUPLICATE KEY UPDATE SmeltingLev = VALUES(SmeltingLev)");
            Edit("Items", title, "Locked",    "UPDATE " + g + ".item_tb SET IsLock = {v} WHERE ItemUID = {UID}");
            Deletable("Items", title);
        }
        Edit("Items", "Inventory", "Stack", "INSERT INTO " + g + ".item_stack_tb (ItemUID, StackCnt) VALUES ({UID}, {v}) ON DUPLICATE KEY UPDATE StackCnt = VALUES(StackCnt)");
        Edit("Items", "Storage", "Stack", "UPDATE " + g + ".item_storage_tb SET StackCnt = {v} WHERE CharacterUID = " + u + " AND ItemUID = {UID}");
        Edit("Skills", "Skills", "Level", "UPDATE " + g + ".skill_active_tb SET ActiveLev = {v} WHERE CharacterUID = " + u + " AND ActiveIdx = {SkillId}");
        array<String^>^ questTitles = gcnew array<String^> { "Main quests", "Sub quests", "Daily quests" };
        array<String^>^ questTables = gcnew array<String^> { "quest_main_tb", "quest_sub_tb", "quest_daily_list_tb" };
        for (int i = 0; i < questTitles->Length; ++i)
        {
            Edit("Progress", questTitles[i], "State", "UPDATE " + g + "." + questTables[i] + " SET State = {v} WHERE CharacterUID = " + u + " AND QuestIdx = {QuestId}");
            Edit("Progress", questTitles[i], "Value", "UPDATE " + g + "." + questTables[i] + " SET QuestValue = {v} WHERE CharacterUID = " + u + " AND QuestIdx = {QuestId}");
        }
        Edit("Progress", "Request quests", "State", "UPDATE " + g + ".quest_request_tb SET State = {v} WHERE CharacterUID = " + u + " AND QuestId = {QuestId}");
        Edit("Progress", "Request quests", "Value", "UPDATE " + g + ".quest_request_tb SET QuestValue = {v} WHERE CharacterUID = " + u + " AND QuestId = {QuestId}");
        Edit("Progress", "Mystery (relation) quests", "State", "UPDATE " + g + ".quest_relation_tb SET State = {v} WHERE CharacterUID = " + u + " AND RelationId = {RelationId}");
        Edit("Progress", "Mystery (relation) quests", "Value", "UPDATE " + g + ".quest_relation_tb SET CurrentLevel = {v} WHERE CharacterUID = " + u + " AND RelationId = {RelationId}");
        Edit("Progress", "Play data", "Value", "UPDATE " + g + ".playdata_tb SET PlayDataValue = {v} WHERE CharacterUID = " + u + " AND PlayDataIdx = {Id}");
        Edit("Guild & Conquest", "Conquest buildings", "Level", "UPDATE " + g + ".great_building_tb SET UpgradeLevel = {v} WHERE CharacterUID = " + u + " AND BuildingUID = {BuildingId}");

        // the overview tab is built first; remember that it is loaded by the constructor        m_tabLoaded["Overview"] = true;
    }

    // ---------------------------------------------------------------------------
    // loading
    // ---------------------------------------------------------------------------

    void CharacterWindow::Send(String^ sql, CwRequest^ request, int maxRows)
    {
        m_db->Configure(m_settings->DbHost, m_settings->DbPort, m_settings->DbUser, m_settings->DbPass);

        BrowserJob^ job = gcnew BrowserJob(m_db, m_window->Dispatcher, gcnew System::Action<BrowserResult^>(this, &CharacterWindow::OnDone));
        job->Action = "query";
        job->Sql = sql;
        job->MaxRows = maxRows;
        job->State = request;
        job->PostProcess = gcnew System::Action<BrowserResult^>(this, &CharacterWindow::AddNames);
        job->Start();
    }

    void CharacterWindow::LoadOverview()
    {
        String^ g = G();
        String^ cls = "ELT(c.Class,'Warrior','Sorcerer','Taoist','Arbalist','Lancer','Darkist','Lionheart','Spirit Summoner')";
        String^ sql =
            "SELECT c.*, " + cls + " AS ClassName, a.AccountName, a.Cash, a.GoldFree, a.GoldEvent, "
            "gd.GuildName, cg.MemberGrade AS GuildRank, cg.Alias AS GuildAlias, d.DeleteTime "
            "FROM " + g + ".character_tb c "
            "LEFT JOIN " + g + ".account_tb a ON a.AccountUID = c.AccountUID "
            "LEFT JOIN " + g + ".character_guild_tb cg ON cg.CharacterUID = c.CharacterUID "
            "LEFT JOIN " + g + ".guild_tb gd ON gd.GuildUID = cg.GuildUID "
            "LEFT JOIN " + g + ".character_delete_tb d ON d.CharacterUID = c.CharacterUID "
            "WHERE c.CharacterUID = " + m_uid.ToString();

        CwRequest^ request = gcnew CwRequest();
        request->Generation = m_generation;
        Send(sql, request, 1);
    }

    void CharacterWindow::LoadTab(String^ tab)
    {
        bool loaded = false;
        if (m_tabLoaded->TryGetValue(tab, loaded) && loaded) return;
        m_tabLoaded[tab] = true;

        int count = 0;
        for each (CwSection^ s in m_sections)
        {
            if (!String::Equals(s->Tab, tab)) continue;
            ++count;
            CwRequest^ request = gcnew CwRequest();
            request->Section = s;
            request->Generation = m_generation;
            Send(s->Sql, request, 3000);
        }
        m_tabPending[tab] = count;
        m_tabShown[tab] = 0;
        m_status->Text = "Loading " + tab + "...";
    }

    void CharacterWindow::OnTabChanged(Object^ /*sender*/, SelectionChangedEventArgs^ e)
    {
        if (!Object::ReferenceEquals(e->OriginalSource, m_tabs)) return;   // bubbled up from a grid
        TabItem^ item = dynamic_cast<TabItem^>(m_tabs->SelectedItem);
        if (item == nullptr || item->Tag == nullptr) return;
        LoadTab(item->Tag->ToString());
    }

    void CharacterWindow::OnRefreshClick(Object^ /*sender*/, RoutedEventArgs^ /*e*/)
    {
        ++m_generation;   // answers to the old requests are dropped
        List<String^>^ loaded = gcnew List<String^>();
        for each (KeyValuePair<String^, bool> pair in m_tabLoaded)
        {
            if (pair.Value) loaded->Add(pair.Key);
        }
        for each (CwSection^ s in m_sections) s->Box->Visibility = Visibility::Collapsed;
        for each (KeyValuePair<String^, TextBlock^> pair in m_tabEmpty) pair.Value->Visibility = Visibility::Collapsed;
        m_tabLoaded->Clear();
        m_status->Text = "Reloading...";
        LoadOverview();
        m_tabLoaded["Overview"] = true;
        for each (String^ tab in loaded)
        {
            if (!String::Equals(tab, "Overview")) LoadTab(tab);
        }
    }

    // ---------------------------------------------------------------------------
    // names (worker thread)
    // ---------------------------------------------------------------------------

    void CharacterWindow::AddNames(BrowserResult^ r)
    {
        CwRequest^ req = dynamic_cast<CwRequest^>(r->State);

        // The overview query: add a read-only StageName column right after StageIdx.
        if (req != nullptr && req->Section == nullptr && String::IsNullOrEmpty(req->Kind) && r->Table != nullptr &&
            r->Table->Columns->Contains("StageIdx") && !r->Table->Columns->Contains("StageName"))
        {
            DataColumn^ stageName = r->Table->Columns->Add("StageName", String::typeid);
            stageName->SetOrdinal(r->Table->Columns["StageIdx"]->Ordinal + 1);
            for each (DataRow^ row in r->Table->Rows)
            {
                long long stageId = 0;
                if (row["StageIdx"] != DBNull::Value && Int64::TryParse(Convert::ToString(row["StageIdx"]), stageId))
                {
                    row[stageName] = m_catalog->NameOf("stage", stageId);
                }
            }
            return;
        }

        if (req == nullptr || req->Section == nullptr || String::IsNullOrEmpty(req->Section->Names) || r->Table == nullptr) return;

        DataTable^ table = r->Table;
        for each (String^ spec in req->Section->Names->Split(L';'))
        {
            int eq = spec->IndexOf(L'=');
            if (eq <= 0) continue;
            String^ column = spec->Substring(0, eq);
            String^ kind = spec->Substring(eq + 1);
            if (!table->Columns->Contains(column)) continue;

            if (String::Equals(kind, "itemlist"))
            {
                // comma-separated item ids in one cell -> their names, in the same column
                for each (DataRow^ row in table->Rows)
                {
                    String^ raw = (row[column] == DBNull::Value) ? String::Empty : Convert::ToString(row[column]);
                    if (raw->Length == 0) continue;
                    List<String^>^ parts = gcnew List<String^>();
                    for each (String^ piece in raw->Split(L','))
                    {
                        long long itemId = 0;
                        if (!Int64::TryParse(piece->Trim(), itemId)) continue;
                        ItemEntry^ item = m_catalog->FindItem(itemId);
                        parts->Add((item != nullptr) ? item->Name : ("Item " + itemId.ToString()));
                    }
                    row[column] = String::Join(", ", parts);
                }
                continue;
            }

            int at = table->Columns[column]->Ordinal;
            String^ nameColumn = String::Equals(kind, "item") ? gcnew String("Item") : gcnew String("Name");
            while (table->Columns->Contains(nameColumn)) nameColumn = nameColumn + "_";
            DataColumn^ names = table->Columns->Add(nameColumn, String::typeid);
            names->SetOrdinal(at + 1);
            DataColumn^ grades = nullptr;
            if (String::Equals(kind, "item"))
            {
                grades = table->Columns->Add("Grade", String::typeid);
                grades->SetOrdinal(at + 2);
            }

            for each (DataRow^ row in table->Rows)
            {
                long long id = 0;
                if (row[column] == DBNull::Value || !Int64::TryParse(Convert::ToString(row[column]), id)) continue;

                String^ label = String::Empty;
                if (String::Equals(kind, "item"))
                {
                    ItemEntry^ item = m_catalog->FindItem(id);
                    if (item != nullptr)
                    {
                        label = item->Name;
                        row[grades] = CodexCatalog::ItemGradeLabel(item->Grade);
                    }
                }
                else if (String::Equals(kind, "building"))
                {
                    if (id == 1000000) label = "Tower of Conquest";
                    else if (id == 2000000) label = "Forge";
                    else if (id == 3000000) label = "Mine";
                    else if (id == 4000000) label = "Millennial Tree";
                    else if (id == 5000000) label = "Training Sanctum";
                    else if (id == 6000000) label = "Tower of Quintessence";
                    else if (id == 7000000) label = "Tower of Victory";
                    else if (id == 8000000) label = "Holy Shrine";
                    else if (id == 9000000) label = "Portal";
                    else if (id == 10000000) label = "Sanctuary of Hydra";
                }
                else if (String::Equals(kind, "achievement"))
                {
                    long long grade = 0;
                    if (table->Columns->Contains("Grade") && row["Grade"] != DBNull::Value) Int64::TryParse(Convert::ToString(row["Grade"]), grade);
                    label = m_catalog->AchievementName(id, grade);
                }
                else
                {
                    label = m_catalog->NameOf(kind, id);
                }
                row[names] = label;
            }
        }
    }

    // ---------------------------------------------------------------------------
    // results (UI thread)
    // ---------------------------------------------------------------------------

    // Moves item so it sits directly after fter (no-op when either is missing).
    static void MoveAfter(List<String^>^ list, String^ item, String^ after)
    {
        int from = list->IndexOf(item);
        if (from < 0 || list->IndexOf(after) < 0) return;
        list->RemoveAt(from);
        list->Insert(list->IndexOf(after) + 1, item);
    }

    String^ CharacterWindow::Describe(Object^ value)
    {
        if (value == nullptr || value == DBNull::Value) return String::Empty;
        return Convert::ToString(value);
    }

    void CharacterWindow::ShowOverview(DataTable^ table)
    {
        DataTable^ profile = gcnew DataTable();
        profile->Columns->Add("Field", String::typeid);
        profile->Columns->Add("Value", String::typeid);
        DataTable^ money = gcnew DataTable();
        money->Columns->Add("Field", String::typeid);
        money->Columns->Add("Value", String::typeid);

        if (table->Rows->Count == 0)
        {
            m_status->Text = "Character #" + m_uid.ToString() + " was not found in " + m_settings->GameSchema + ".";
            return;
        }

        array<String^>^ currencyNames = gcnew array<String^> {
            "Gold", "Copper", "Wonbo", "Mileage", "EnergyPoint", "DarkSteel", "DragonSteel", "AncientCoin",
            "GuildPoint", "AccelerationPoint", "DragonJade", "BlackIron", "Cash", "GoldFree", "GoldEvent" };
        DataRow^ src = table->Rows[0];
        m_accountUid = 0;
        Int64::TryParse(Describe(src["AccountUID"]), m_accountUid);
        m_overviewInt->Clear();

        // Field order: ClassName right under Class, AccountName right under AccountUID.
        List<String^>^ order = gcnew List<String^>();
        for each (DataColumn^ column in table->Columns) order->Add(column->ColumnName);
        MoveAfter(order, "ClassName", "Class");
        MoveAfter(order, "AccountName", "AccountUID");

        for each (String^ name in order)
        {
            DataColumn^ column = table->Columns[name];
            m_overviewInt[name] = (column->DataType == Int64::typeid);
            String^ value = Describe(src[column]);
            bool isMoney = Array::IndexOf(currencyNames, name) >= 0;
            if (isMoney)
            {
                long long number = 0;
                if (Int64::TryParse(value, number)) value = number.ToString("N0");
            }
            DataTable^ target = isMoney ? money : profile;
            DataRow^ row = target->NewRow();
            row[0] = name;
            row[1] = value;
            target->Rows->Add(row);
        }
        m_profileGrid->ItemsSource = profile->DefaultView;
        m_currencyGrid->ItemsSource = money->DefaultView;

        String^ guild = Describe(src["GuildName"]);
        m_subtitle->Text = Describe(src["ClassName"]) + "  |  Lv " + Describe(src["Lev"]) + "  |  " +
                           String::Format("{0:N0}", Convert::ToInt64(src["CombatPoint"])) + " CP  |  Account " + Describe(src["AccountName"]) +
                           " (#" + Describe(src["AccountUID"]) + ")" + (guild->Length > 0 ? ("  |  Guild " + guild) : String::Empty) +
                           (Describe(src["DeleteTime"])->Length > 0 ? gcnew String("  |  DELETED") : String::Empty);
        m_classId = 0;
        if (src->Table->Columns->Contains("Class") && src["Class"] != DBNull::Value) m_classId = Convert::ToInt32(src["Class"]);
        ClassIcons::Ensure(gcnew System::Action(this, &CharacterWindow::ApplyClassIcon));
        ApplyClassIcon();
        m_status->Text = "Overview loaded. Open the other tabs to load their tables.";
    }

    void CharacterWindow::ApplyClassIcon()
    {
        if (m_closed || m_classIcon == nullptr) return;
        m_classIcon->Source = ClassIcons::Get(m_classId);
    }

    void CharacterWindow::OnDone(BrowserResult^ r)
    {
        if (m_closed || r == nullptr) return;
        CwRequest^ req = dynamic_cast<CwRequest^>(r->State);
        if (req == nullptr) return;

        if (String::Equals(req->Kind, "edit"))
        {
            if (r->Ok)
            {
                m_status->Text = "Saved: " + req->Edit->Sql;
            }
            else
            {
                try { req->Edit->Row[req->Edit->Column] = req->Edit->OldValue; } catch (Exception^) {}   // put the old value back
                m_status->Text = "Update failed, reverted: " + r->Error;
            }
            return;
        }
        if (String::Equals(req->Kind, "delete"))
        {
            if (!r->Ok) { m_status->Text = "Delete failed (nothing was changed): " + r->Error; return; }
            CwSection^ owner = req->Section;
            if (req->Row != nullptr) req->Row->Row->Table->Rows->Remove(req->Row->Row);
            if (owner != nullptr && owner->Grid->ItemsSource != nullptr)
            {
                System::Data::DataView^ view = dynamic_cast<System::Data::DataView^>(owner->Grid->ItemsSource);
                int left = (view == nullptr) ? 0 : view->Count;
                owner->TitleText->Text = owner->Title->ToUpperInvariant() + "  (" + left.ToString() + ")";
            }
            m_status->Text = "Item deleted from every table: " + r->Text;
            return;
        }
        if (req->Generation != m_generation) return;

        if (req->Section == nullptr)
        {
            if (!r->Ok) { m_status->Text = "Could not load the character: " + r->Error; return; }
            ShowOverview(r->Table);
            return;
        }

        CwSection^ s = req->Section;
        int rows = r->Ok ? r->Table->Rows->Count : 0;
        if (!r->Ok)
        {
            // keep the section visible with the error so a missing table is obvious
            s->TitleText->Text = s->Title->ToUpperInvariant() + "  -  " + r->Error;
            s->Grid->ItemsSource = nullptr;
            s->Grid->Visibility = Visibility::Collapsed;
            s->Box->Visibility = Visibility::Visible;
        }
        else if (rows > 0)
        {
            s->TitleText->Text = s->Title->ToUpperInvariant() + "  (" + rows.ToString() + ")";
            s->Grid->ItemsSource = r->Table->DefaultView;
            s->Grid->Visibility = Visibility::Visible;
            s->Box->Visibility = Visibility::Visible;
            int shown = 0;
            m_tabShown->TryGetValue(s->Tab, shown);
            m_tabShown[s->Tab] = shown + 1;
        }
        else if (s->AlwaysShow)
        {
            s->TitleText->Text = s->Title->ToUpperInvariant() + "  (empty)";
            s->Grid->ItemsSource = nullptr;
            s->Grid->Visibility = Visibility::Collapsed;
            s->Box->Visibility = Visibility::Visible;
        }

        int pending = 0;
        if (m_tabPending->TryGetValue(s->Tab, pending))
        {
            --pending;
            m_tabPending[s->Tab] = pending;
            if (pending <= 0)
            {
                int shown = 0;
                m_tabShown->TryGetValue(s->Tab, shown);
                TextBlock^ empty;
                if (m_tabEmpty->TryGetValue(s->Tab, empty)) empty->Visibility = (shown == 0) ? Visibility::Visible : Visibility::Collapsed;
                m_status->Text = s->Tab + " loaded (" + shown.ToString() + " table(s) with data).";
            }
        }
    }

    // ===========================================================================
    // editing, delete, double-click
    // ===========================================================================

    CwSection^ CharacterWindow::Find(String^ tab, String^ title)
    {
        for each (CwSection^ s in m_sections)
        {
            if (String::Equals(s->Tab, tab) && String::Equals(s->Title, title)) return s;
        }
        return nullptr;
    }

    void CharacterWindow::Edit(String^ tab, String^ title, String^ column, String^ updateTemplate)
    {
        CwSection^ s = Find(tab, title);
        if (s == nullptr) return;
        s->Edits[column] = updateTemplate;
        s->Grid->IsReadOnly = false;   // individual columns are locked in OnAutoColumn
    }

    void CharacterWindow::Deletable(String^ tab, String^ title)
    {
        CwSection^ s = Find(tab, title);
        if (s == nullptr || s->CanDelete) return;
        s->CanDelete = true;

        Button^ remove = gcnew Button();
        remove->Content = "Delete selected item";
        remove->Tag = s;
        remove->Padding = Thickness(10.0, 2.0, 10.0, 2.0);
        remove->ToolTip = "Select a row, then delete that item from every table (inventory, equipment, storage, options, jewels, ...)";
        remove->Click += gcnew RoutedEventHandler(this, &CharacterWindow::OnDeleteClick);
        DockPanel::SetDock(remove, Dock::Right);
        s->Head->Children->Insert(0, remove);
    }

    // The character-table fields that are derived from other tables or are keys the game owns.
    bool CharacterWindow::OverviewEditable(String^ field)
    {
        return !(String::Equals(field, "CharacterUID") || String::Equals(field, "Class") || String::Equals(field, "ClassName") ||
                 String::Equals(field, "GuildName") || String::Equals(field, "GuildRank") || String::Equals(field, "GuildAlias") ||
                 String::Equals(field, "DeleteTime") || String::Equals(field, "StageName"));
    }

    void CharacterWindow::OnAutoColumn(Object^ sender, DataGridAutoGeneratingColumnEventArgs^ e)
    {
        DataGrid^ grid = dynamic_cast<DataGrid^>(sender);
        if (grid == nullptr) return;
        CwSection^ s = dynamic_cast<CwSection^>(grid->Tag);
        if (s != nullptr)
        {
            e->Column->IsReadOnly = !s->Edits->ContainsKey(e->PropertyName);   // only columns with an UPDATE template
        }
        else
        {
            e->Column->IsReadOnly = !String::Equals(e->PropertyName, "Value");   // overview: only the Value column
        }
    }

    void CharacterWindow::OnBeginningEdit(Object^ /*sender*/, DataGridBeginningEditEventArgs^ e)
    {
        System::Data::DataRowView^ row = dynamic_cast<System::Data::DataRowView^>(e->Row->Item);
        if (row == nullptr) return;
        if (!OverviewEditable(Convert::ToString(row["Field"])))
        {
            e->Cancel = true;
            m_status->Text = Convert::ToString(row["Field"]) + " cannot be edited here.";
        }
    }

    // Text -> a typed value: whole numbers for integer columns (commas allowed), NULL for the word NULL.
    static bool ParseCell(bool isInt, String^ text, Object^% value, String^% error)
    {
        if (String::Equals(text, "NULL")) { value = DBNull::Value; return true; }
        if (isInt)
        {
            long long n = 0;
            if (!Int64::TryParse(text->Replace(",", "")->Trim(), n))
            {
                error = "'" + text + "' is not a whole number.";
                return false;
            }
            value = n;
            return true;
        }
        value = text;
        return true;
    }

    void CharacterWindow::OnCellEditEnding(Object^ sender, DataGridCellEditEndingEventArgs^ e)
    {
        if (e->EditAction != DataGridEditAction::Commit) return;
        DataGrid^ grid = dynamic_cast<DataGrid^>(sender);
        System::Data::DataRowView^ rv = dynamic_cast<System::Data::DataRowView^>(e->Row->Item);
        TextBox^ box = dynamic_cast<TextBox^>(e->EditingElement);
        if (grid == nullptr || rv == nullptr || box == nullptr) return;

        try
        {
            CwSection^ s = dynamic_cast<CwSection^>(grid->Tag);
            String^ text = box->Text;
            String^ error;
            Object^ newValue;
            String^ sql;
            String^ column;
            Object^ oldValue;

            if (s != nullptr)
            {
                column = e->Column->SortMemberPath;
                String^ tpl;
                if (!s->Edits->TryGetValue(column, tpl)) return;
                System::Data::DataColumn^ dc = rv->Row->Table->Columns[column];
                oldValue = rv[column];
                if (!ParseCell(dc->DataType == Int64::typeid, text, newValue, error)) { e->Cancel = true; m_status->Text = error + " (" + column + ")"; return; }
                if (Convert::ToString(oldValue) == Convert::ToString(newValue) && (oldValue == DBNull::Value) == (newValue == DBNull::Value)) return;

                sql = tpl->Replace("{v}", DbBrowser::SqlLiteral(newValue));
                for each (System::Data::DataColumn^ c in rv->Row->Table->Columns)
                {
                    sql = sql->Replace("{" + c->ColumnName + "}", DbBrowser::SqlLiteral(rv[c->ColumnName]));
                }
            }
            else
            {
                // overview: the row is Field / Value
                column = "Value";
                String^ field = Convert::ToString(rv["Field"]);
                if (!OverviewEditable(field)) { e->Cancel = true; return; }
                oldValue = rv["Value"];
                bool isInt = false;
                m_overviewInt->TryGetValue(field, isInt);
                if (!ParseCell(isInt, text, newValue, error)) { e->Cancel = true; m_status->Text = error + " (" + field + ")"; return; }
                if (Convert::ToString(oldValue)->Replace(",", "") == Convert::ToString(newValue)->Replace(",", "")) return;

                bool accountField = String::Equals(field, "AccountName") || String::Equals(field, "Cash") ||
                                    String::Equals(field, "GoldFree") || String::Equals(field, "GoldEvent");
                if (accountField && m_accountUid == 0) { e->Cancel = true; m_status->Text = "The account id is unknown."; return; }
                sql = accountField
                    ? ("UPDATE " + G() + ".account_tb SET " + DbBrowser::Quote(field) + " = " + DbBrowser::SqlLiteral(newValue) + " WHERE AccountUID = " + m_accountUid.ToString() + " LIMIT 1")
                    : ("UPDATE " + G() + ".character_tb SET " + DbBrowser::Quote(field) + " = " + DbBrowser::SqlLiteral(newValue) + " WHERE CharacterUID = " + m_uid.ToString() + " LIMIT 1");
            }

            BrowserEdit^ edit = gcnew BrowserEdit();
            edit->Row = rv;
            edit->Column = column;
            edit->OldValue = oldValue;
            edit->Sql = sql;
            RunEdit(sql, edit);
        }
        catch (Exception^ ex)
        {
            e->Cancel = true;
            m_status->Text = "Edit failed: " + ex->Message;
        }
    }

    void CharacterWindow::RunEdit(String^ sql, BrowserEdit^ edit)
    {
        m_db->Configure(m_settings->DbHost, m_settings->DbPort, m_settings->DbUser, m_settings->DbPass);
        CwRequest^ request = gcnew CwRequest();
        request->Kind = "edit";
        request->Edit = edit;
        request->Generation = m_generation;

        BrowserJob^ job = gcnew BrowserJob(m_db, m_window->Dispatcher, gcnew System::Action<BrowserResult^>(this, &CharacterWindow::OnDone));
        job->Action = "exec";
        job->Sql = sql;
        job->State = request;
        job->Start();

        DbBrowser::Audit("character.view.edit uid=" + m_uid.ToString() + " " + sql);
        m_status->Text = "Saving...";
    }

    // Double-clicking a read-only cell of a row that has an ItemId opens that item on the Game Data tab.
    void CharacterWindow::OnGridDoubleClick(Object^ /*sender*/, System::Windows::Input::MouseButtonEventArgs^ e)
    {
        DependencyObject^ node = dynamic_cast<DependencyObject^>(e->OriginalSource);
        DataGridCell^ cell = nullptr;
        while (node != nullptr)
        {
            cell = dynamic_cast<DataGridCell^>(node);
            if (cell != nullptr) break;
            if (dynamic_cast<System::Windows::Media::Visual^>(node) != nullptr) node = System::Windows::Media::VisualTreeHelper::GetParent(node);
            else node = LogicalTreeHelper::GetParent(node);
        }
        if (cell == nullptr || !cell->Column->IsReadOnly) return;   // editable cells: double-click edits as usual

        System::Data::DataRowView^ row = dynamic_cast<System::Data::DataRowView^>(cell->DataContext);
        if (row == nullptr || !row->Row->Table->Columns->Contains("ItemId") || m_openItem == nullptr) return;
        long long itemId = 0;
        if (Int64::TryParse(Convert::ToString(row["ItemId"]), itemId) && itemId > 0)
        {
            m_openItem->Invoke(itemId);
            e->Handled = true;
        }
    }

    void CharacterWindow::OnDeleteClick(Object^ sender, RoutedEventArgs^ /*e*/)
    {
        Button^ button = dynamic_cast<Button^>(sender);
        CwSection^ s = (button == nullptr) ? nullptr : dynamic_cast<CwSection^>(button->Tag);
        if (s == nullptr) return;

        System::Data::DataRowView^ row = dynamic_cast<System::Data::DataRowView^>(s->Grid->SelectedItem);
        if (row == nullptr || !row->Row->Table->Columns->Contains("UID")) { m_status->Text = "Select an item row first."; return; }
        long long itemUid = 0;
        if (!Int64::TryParse(Convert::ToString(row["UID"]), itemUid) || itemUid <= 0) return;
        String^ name = row->Row->Table->Columns->Contains("Item") ? Convert::ToString(row["Item"]) : String::Empty;
        if (name->Length == 0) name = "item " + Convert::ToString(row["ItemId"]);

        System::Windows::MessageBoxResult answer = System::Windows::MessageBox::Show(m_window,
            "Permanently delete " + name + " (item UID " + itemUid.ToString() + ") from " + m_name + "?\n\n"
            "It is removed from EVERY table that references it (inventory, equipment, storage, options, jewels, decks, market, mail, ...). "
            "This cannot be undone. If the character is online the game may still hold the item in memory.",
            "Delete item", System::Windows::MessageBoxButton::YesNo, System::Windows::MessageBoxImage::Warning);
        if (answer != System::Windows::MessageBoxResult::Yes) return;

        CwRequest^ request = gcnew CwRequest();
        request->Kind = "delete";
        request->Section = s;
        request->Row = row;
        request->Generation = m_generation;

        m_db->Configure(m_settings->DbHost, m_settings->DbPort, m_settings->DbUser, m_settings->DbPass);
        BrowserJob^ job = gcnew BrowserJob(m_db, m_window->Dispatcher, gcnew System::Action<BrowserResult^>(this, &CharacterWindow::OnDone));
        job->Action = "deleteitem";
        job->Schema = m_settings->GameSchema;
        job->ItemUid = itemUid;
        job->State = request;
        job->Start();

        DbBrowser::Audit("character.view.deleteitem uid=" + m_uid.ToString() + " itemUid=" + itemUid.ToString() + " name=" + name);
        m_status->Text = "Deleting " + name + "...";
    }
}
