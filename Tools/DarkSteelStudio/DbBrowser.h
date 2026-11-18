#pragma once

// =============================================================================
// DarkSteelStudio - DbBrowser  (Workbench-style schema browser data layer)
//
// Own connection (separate from the Run Script page's) used by the Database page:
//   Catalog()  every schema with its tables / views / procedures / functions
//              (information_schema; one round trip each, ~thousands of rows)
//   Data()     SELECT * FROM `schema`.`table` [WHERE ...] LIMIT offset,limit
//   Columns()  information_schema.COLUMNS for a table
//   Indexes()  SHOW INDEX
//   Ddl()      SHOW CREATE TABLE / VIEW / PROCEDURE / FUNCTION
// All methods are blocking and never throw: failures come back in
// BrowserResult::Error. BrowserJob runs one of them on a worker thread and posts
// the result to the UI dispatcher.
// =============================================================================

#include "DbBridge.h"

namespace DarkSteelStudio {

    using namespace System;
    using namespace System::Collections::Generic;

    // One tree entry. Kind: "schema" | "table" | "view" | "procedure" | "function".
    // A schema node carries all of its objects in Children (flat; the UI groups them by Kind).
    public ref class BrowseNode {
    public:
        property String^ Kind;
        property String^ Schema;
        property String^ Name;
        property String^ Info;                    // e.g. "InnoDB, ~12,345 rows"
        property List<BrowseNode^>^ Children;
    };

    public ref class BrowserResult {
    public:
        property String^ Action;                  // "catalog" | "data" | "columns" | "indexes" | "ddl"
        property int     Seq;                     // request number, so the UI can drop stale answers
        property bool    Ok;
        property String^ Error;
        property System::Data::DataTable^ Table;  // data / columns / indexes
        property String^ Text;                    // ddl
        property List<BrowseNode^>^ Schemas;      // catalog
        property int     Offset;                  // data: the offset that was read
        property bool    HasMore;                 // data: a further page probably exists
        property long long Affected;              // exec: rows changed
        property Object^ State;                   // whatever the caller attached to the job (echoed back)
        property double  Ms;
    };

    public ref class DbBrowser {
    public:
        DbBrowser();

        // Connection settings. Changing them drops the open connection.
        void Configure(String^ host, int port, String^ user, String^ password);

        BrowserResult^ Catalog();
        BrowserResult^ Data(String^ schema, String^ table, String^ condition, int offset, int limit);
        BrowserResult^ Columns(String^ schema, String^ table);
        BrowserResult^ Indexes(String^ schema, String^ table);
        BrowserResult^ Ddl(String^ schema, String^ name, String^ kind);
        BrowserResult^ Exec(String^ sql);          // one statement that changes data (inline cell edits)
        BrowserResult^ Query(String^ sql, int maxRows);   // any SELECT: Table holds the rows (maxRows 0 = all)

        // The server's own schemas (information_schema, mysql, performance_schema) are not shown anywhere.
        static bool IsHiddenSchema(String^ name);

        static String^ Quote(String^ identifier);   // `name` with embedded backticks doubled
        static String^ SqlLiteral(Object^ value);   // NULL / integer digits / 'escaped string'
        static void    Audit(String^ line);         // appends a timestamped line to %LOCALAPPDATA%\DarkSteelStudio\audit.log

        // Removes one item from EVERY base table of `schema` that has an ItemUID or EquipItemUID
        // column (children first, item_tb last) in one transaction. Affected = rows removed,
        // Text = a summary like "12 row(s) in 5 table(s)". Rolls back on any error.
        BrowserResult^ DeleteItem(String^ schema, long long itemUid);

    private:
        DbBridge^ m_db;
        String^   m_host;  int m_port;  String^ m_user;  String^ m_pass;
        Object^   m_lock;

        System::Data::DataTable^ Run(String^ sql, int maxRows);   // connects on demand; throws on failure
        long long RunExec(String^ sql);                            // connects on demand; returns rows affected
    };

    // A pending inline edit: remembered so a failed UPDATE can put the old value back.
    public ref class BrowserEdit {
    public:
        property System::Data::DataRowView^ Row;
        property String^ Column;
        property Object^ OldValue;
        property String^ Sql;
    };

    // One request on a worker thread: Start() runs Execute() and posts `Done(result)` to `Target`.
    public ref class BrowserJob {
    public:
        BrowserJob(DbBrowser^ browser, System::Windows::Threading::Dispatcher^ target, System::Action<BrowserResult^>^ done);

        property String^ Action;
        property int     Seq;
        property String^ Schema;
        property String^ Name;
        property String^ Kind;
        property String^ Where;
        property String^ Sql;                       // exec / query
        property int     MaxRows;                   // query
        property long long ItemUid;                 // deleteitem
        property Object^ State;                     // echoed back in BrowserResult::State
        property System::Action<BrowserResult^>^ PostProcess;   // runs on the worker thread after a successful query (e.g. add name columns)
        property int     Offset;
        property int     Limit;

        void Start();

    private:
        DbBrowser^ m_browser;
        System::Windows::Threading::Dispatcher^ m_target;
        System::Action<BrowserResult^>^ m_done;
        void Execute();
    };
}
