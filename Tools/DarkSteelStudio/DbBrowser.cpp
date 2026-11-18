#include "DbBrowser.h"
#include <msclr/lock.h>

namespace DarkSteelStudio {

    using namespace System::Data;

    DbBrowser::DbBrowser()
    {
        m_lock = gcnew Object();
        m_db   = gcnew DbBridge();
        m_host = "127.0.0.1";
        m_port = 3306;
        m_user = String::Empty;
        m_pass = String::Empty;
    }

    void DbBrowser::Configure(String^ host, int port, String^ user, String^ password)
    {
        msclr::lock guard(m_lock);
        if (!String::Equals(host, m_host) || port != m_port || !String::Equals(user, m_user) || !String::Equals(password, m_pass))
        {
            m_db->Disconnect();
        }
        m_host = host; m_port = port; m_user = user; m_pass = password;
    }

    bool DbBrowser::IsHiddenSchema(String^ name)
    {
        return String::Equals(name, "information_schema", StringComparison::OrdinalIgnoreCase) ||
               String::Equals(name, "mysql", StringComparison::OrdinalIgnoreCase) ||
               String::Equals(name, "performance_schema", StringComparison::OrdinalIgnoreCase);
    }

    String^ DbBrowser::SqlLiteral(Object^ value)
    {
        if (value == nullptr || value == DBNull::Value) return "NULL";
        if (value->GetType() == Int64::typeid || value->GetType() == Int32::typeid)
        {
            return Convert::ToString(value, System::Globalization::CultureInfo::InvariantCulture);
        }
        System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder("'");
        for each (wchar_t c in Convert::ToString(value))
        {
            if (c == L'\\')        sb->Append("\\\\");
            else if (c == L'\'')   sb->Append("''");
            else if (c == L'\0')   sb->Append("\\0");
            else if (c == L'\n')   sb->Append("\\n");
            else if (c == L'\r')   sb->Append("\\r");
            else if (c == L'\x1a') sb->Append("\\Z");
            else                   sb->Append(c);
        }
        sb->Append("'");
        return sb->ToString();
    }

    void DbBrowser::Audit(String^ line)
    {
        try
        {
            String^ dir = System::IO::Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::LocalApplicationData), "DarkSteelStudio");
            System::IO::Directory::CreateDirectory(dir);
            System::IO::File::AppendAllText(System::IO::Path::Combine(dir, "audit.log"),
                DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss") + "  " + Environment::UserName + "  " + line + Environment::NewLine);
        }
        catch (Exception^)
        {
        }
    }

    long long DbBrowser::RunExec(String^ sql)
    {
        msclr::lock guard(m_lock);
        if (!m_db->Connected)
        {
            String^ message;
            if (!m_db->Connect(m_host, m_port, m_user, m_pass, String::Empty, message))
            {
                throw gcnew InvalidOperationException("Cannot connect: " + message);
            }
        }
        bool truncated = false;
        long long affected = 0;
        double ms = 0.0;
        m_db->Query(sql, 0, truncated, affected, ms);
        return affected;
    }

    BrowserResult^ DbBrowser::DeleteItem(String^ schema, long long itemUid)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "deleteitem";
        try
        {
            msclr::lock guard(m_lock);   // the transaction must stay on this one connection
            DataTable^ found = Run("SELECT c.TABLE_NAME, c.COLUMN_NAME FROM information_schema.COLUMNS c JOIN information_schema.TABLES t "
                                   "ON t.TABLE_SCHEMA = c.TABLE_SCHEMA AND t.TABLE_NAME = c.TABLE_NAME "
                                   "WHERE c.TABLE_SCHEMA = " + SqlLiteral(schema) + " AND t.TABLE_TYPE = 'BASE TABLE' "
                                   "AND c.COLUMN_NAME IN ('ItemUID', 'EquipItemUID')", 0);

            List<String^>^ statements = gcnew List<String^>();
            String^ itemTable = nullptr;
            for each (DataRow^ row in found->Rows)
            {
                String^ table = Convert::ToString(row[0]);
                String^ sql = "DELETE FROM " + Quote(schema) + "." + Quote(table) + " WHERE " + Quote(Convert::ToString(row[1])) + " = " + itemUid.ToString();
                if (String::Equals(table, "item_tb", StringComparison::OrdinalIgnoreCase)) itemTable = sql;   // last: others may reference it
                else statements->Add(sql);
            }
            if (itemTable != nullptr) statements->Add(itemTable);

            RunExec("START TRANSACTION");
            long long total = 0;
            int touched = 0;
            try
            {
                for each (String^ sql in statements)
                {
                    long long n = RunExec(sql);
                    total += n;
                    if (n > 0) ++touched;
                }
                RunExec("COMMIT");
            }
            catch (Exception^)
            {
                try { RunExec("ROLLBACK"); } catch (Exception^) {}
                throw;
            }
            result->Affected = total;
            result->Text = String::Format("{0} row(s) in {1} table(s)", total, touched);
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        return result;
    }

    String^ DbBrowser::Quote(String^ identifier)
    {
        return "`" + identifier->Replace("`", "``") + "`";
    }

    DataTable^ DbBrowser::Run(String^ sql, int maxRows)
    {
        msclr::lock guard(m_lock);   // one statement at a time on this connection
        if (!m_db->Connected)
        {
            String^ message;
            if (!m_db->Connect(m_host, m_port, m_user, m_pass, String::Empty, message))
            {
                throw gcnew InvalidOperationException("Cannot connect: " + message);
            }
        }
        bool truncated = false;
        long long affected = 0;
        double ms = 0.0;
        return m_db->Query(sql, maxRows, truncated, affected, ms);
    }

    BrowserResult^ DbBrowser::Catalog()
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "catalog";
        System::Diagnostics::Stopwatch^ watch = System::Diagnostics::Stopwatch::StartNew();
        try
        {
            SortedDictionary<String^, BrowseNode^>^ schemas = gcnew SortedDictionary<String^, BrowseNode^>(StringComparer::OrdinalIgnoreCase);

            for each (DataRow^ row in Run("SHOW DATABASES", 0)->Rows)
            {
                if (IsHiddenSchema(Convert::ToString(row[0]))) continue;   // tables of hidden schemas are skipped below
                BrowseNode^ s = gcnew BrowseNode();
                s->Kind = "schema";
                s->Schema = Convert::ToString(row[0]);
                s->Name = s->Schema;
                s->Children = gcnew List<BrowseNode^>();
                schemas[s->Schema] = s;
            }

            DataTable^ tables = Run("SELECT TABLE_SCHEMA, TABLE_NAME, TABLE_TYPE, IFNULL(ENGINE,''), IFNULL(TABLE_ROWS,0) "
                                    "FROM information_schema.TABLES ORDER BY TABLE_SCHEMA, TABLE_NAME", 0);
            for each (DataRow^ row in tables->Rows)
            {
                BrowseNode^ owner;
                if (!schemas->TryGetValue(Convert::ToString(row[0]), owner)) continue;
                BrowseNode^ n = gcnew BrowseNode();
                n->Schema = owner->Schema;
                n->Name = Convert::ToString(row[1]);
                bool isView = Convert::ToString(row[2])->IndexOf("VIEW", StringComparison::OrdinalIgnoreCase) >= 0;
                n->Kind = isView ? gcnew String("view") : gcnew String("table");
                n->Info = isView ? gcnew String("view")
                                 : String::Format("{0}, ~{1:N0} rows", Convert::ToString(row[3]), Convert::ToInt64(row[4]));
                owner->Children->Add(n);
            }

            DataTable^ routines = Run("SELECT ROUTINE_SCHEMA, ROUTINE_NAME, ROUTINE_TYPE FROM information_schema.ROUTINES "
                                      "ORDER BY ROUTINE_SCHEMA, ROUTINE_NAME", 0);
            for each (DataRow^ row in routines->Rows)
            {
                BrowseNode^ owner;
                if (!schemas->TryGetValue(Convert::ToString(row[0]), owner)) continue;
                BrowseNode^ n = gcnew BrowseNode();
                n->Schema = owner->Schema;
                n->Name = Convert::ToString(row[1]);
                bool isFunction = String::Equals(Convert::ToString(row[2]), "FUNCTION", StringComparison::OrdinalIgnoreCase);
                n->Kind = isFunction ? gcnew String("function") : gcnew String("procedure");
                n->Info = n->Kind;
                owner->Children->Add(n);
            }

            result->Schemas = gcnew List<BrowseNode^>(schemas->Values);
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        result->Ms = watch->Elapsed.TotalMilliseconds;
        return result;
    }

    BrowserResult^ DbBrowser::Data(String^ schema, String^ table, String^ condition, int offset, int limit)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "data";
        result->Offset = offset;
        System::Diagnostics::Stopwatch^ watch = System::Diagnostics::Stopwatch::StartNew();
        try
        {
            String^ sql = "SELECT * FROM " + Quote(schema) + "." + Quote(table);
            if (!String::IsNullOrWhiteSpace(condition))
            {
                sql = sql + " WHERE " + condition->Trim();
            }
            // Ask for one row more than a page to know whether a next page exists.
            sql = sql + String::Format(" LIMIT {0}, {1}", offset, limit + 1);
            DataTable^ t = Run(sql, 0);
            result->HasMore = t->Rows->Count > limit;
            if (result->HasMore)
            {
                t->Rows->RemoveAt(t->Rows->Count - 1);
            }
            result->Table = t;
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        result->Ms = watch->Elapsed.TotalMilliseconds;
        return result;
    }

    BrowserResult^ DbBrowser::Columns(String^ schema, String^ table)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "columns";
        try
        {
            String^ sql = "SELECT ORDINAL_POSITION AS `Pos`, COLUMN_NAME AS `Column`, COLUMN_TYPE AS `Type`, IS_NULLABLE AS `Nullable`, "
                          "COLUMN_KEY AS `Key`, COLUMN_DEFAULT AS `Default`, EXTRA AS `Extra`, COLUMN_COMMENT AS `Comment` "
                          "FROM information_schema.COLUMNS WHERE TABLE_SCHEMA = '" + schema->Replace("'", "''") +
                          "' AND TABLE_NAME = '" + table->Replace("'", "''") + "' ORDER BY ORDINAL_POSITION";
            result->Table = Run(sql, 0);
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        return result;
    }

    BrowserResult^ DbBrowser::Indexes(String^ schema, String^ table)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "indexes";
        try
        {
            result->Table = Run("SHOW INDEX FROM " + Quote(schema) + "." + Quote(table), 0);
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        return result;
    }

    BrowserResult^ DbBrowser::Query(String^ sql, int maxRows)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "query";
        System::Diagnostics::Stopwatch^ watch = System::Diagnostics::Stopwatch::StartNew();
        try
        {
            result->Table = Run(sql, maxRows);
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        result->Ms = watch->Elapsed.TotalMilliseconds;
        return result;
    }

    BrowserResult^ DbBrowser::Exec(String^ sql)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "exec";
        try
        {
            msclr::lock guard(m_lock);
            if (!m_db->Connected)
            {
                String^ message;
                if (!m_db->Connect(m_host, m_port, m_user, m_pass, String::Empty, message))
                {
                    throw gcnew InvalidOperationException("Cannot connect: " + message);
                }
            }
            bool truncated = false;
            long long affected = 0;
            double ms = 0.0;
            m_db->Query(sql, 0, truncated, affected, ms);
            result->Affected = affected;
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        return result;
    }

    BrowserResult^ DbBrowser::Ddl(String^ schema, String^ name, String^ kind)
    {
        BrowserResult^ result = gcnew BrowserResult();
        result->Action = "ddl";
        try
        {
            String^ what = "TABLE";
            int column = 1;   // SHOW CREATE TABLE/VIEW: name, create text
            if (String::Equals(kind, "view")) { what = "VIEW"; }
            else if (String::Equals(kind, "procedure")) { what = "PROCEDURE"; column = 2; }   // name, sql_mode, create text
            else if (String::Equals(kind, "function")) { what = "FUNCTION"; column = 2; }

            DataTable^ t = Run("SHOW CREATE " + what + " " + Quote(schema) + "." + Quote(name), 0);
            if (t->Rows->Count > 0 && t->Columns->Count > column && t->Rows[0][column] != DBNull::Value)
            {
                result->Text = Convert::ToString(t->Rows[0][column])->Replace("\r\n", "\n")->Replace("\n", "\r\n");
            }
            else
            {
                result->Text = "-- No definition available (missing privilege?).";
            }
            result->Ok = true;
        }
        catch (Exception^ ex)
        {
            result->Ok = false;
            result->Error = ex->Message;
        }
        return result;
    }

    // ---- BrowserJob ---------------------------------------------------------------

    BrowserJob::BrowserJob(DbBrowser^ browser, System::Windows::Threading::Dispatcher^ target, System::Action<BrowserResult^>^ done)
    {
        m_browser = browser;
        m_target  = target;
        m_done    = done;
    }

    void BrowserJob::Start()
    {
        System::Threading::Thread^ worker = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &BrowserJob::Execute));
        worker->IsBackground = true;
        worker->Start();
    }

    void BrowserJob::Execute()
    {
        BrowserResult^ result;
        try
        {
            if (String::Equals(Action, "catalog"))      result = m_browser->Catalog();
            else if (String::Equals(Action, "data"))    result = m_browser->Data(Schema, Name, Where, Offset, Limit);
            else if (String::Equals(Action, "columns")) result = m_browser->Columns(Schema, Name);
            else if (String::Equals(Action, "indexes")) result = m_browser->Indexes(Schema, Name);
            else if (String::Equals(Action, "exec"))    result = m_browser->Exec(Sql);
            else if (String::Equals(Action, "query"))   result = m_browser->Query(Sql, MaxRows);
            else if (String::Equals(Action, "deleteitem")) result = m_browser->DeleteItem(Schema, ItemUid);
            else                                        result = m_browser->Ddl(Schema, Name, Kind);
        }
        catch (Exception^ ex)
        {
            result = gcnew BrowserResult();
            result->Ok = false;
            result->Error = ex->Message;
        }
        result->Action = Action;
        result->Seq = Seq;
        result->State = State;
        if (PostProcess != nullptr && result->Ok)
        {
            try { PostProcess->Invoke(result); }
            catch (Exception^) { /* keep the raw result */ }
        }

        try
        {
            m_target->BeginInvoke(System::Windows::Threading::DispatcherPriority::Normal, m_done, result);
        }
        catch (Exception^)
        {
            // window is closing
        }
    }
}
