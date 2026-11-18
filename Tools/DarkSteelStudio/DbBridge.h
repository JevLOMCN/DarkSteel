#pragma once

// =============================================================================
// DarkSteelStudio - DbBridge  (managed facade over the native MySqlClient)
//
// Connect / Query for the game database. Blocking calls: run them on a worker
// thread. Query results come back as a System::Data::DataTable; columns whose
// values are all plain integers are typed Int64 (so ids sort numerically), the
// rest stay strings, SQL NULL becomes DBNull.
// =============================================================================

class MySqlClient;   // native, defined in MySqlClient.h

namespace DarkSteelStudio {

    using namespace System;

    public ref class DbBridge {
    public:
        DbBridge();
        ~DbBridge();
        !DbBridge();

        // True on success; `message` is the server version on success, else the error text.
        bool Connect(String^ host, int port, String^ user, String^ password, String^ schema, [System::Runtime::InteropServices::Out] String^% message);
        // Makes schema the default database for the following queries (and reconnects).
        bool SelectSchema(String^ schema, [System::Runtime::InteropServices::Out] String^% message);
        void Disconnect();
        property bool Connected { bool get(); }

        // Runs one statement. Rows are capped at maxRows (0 = no cap); `truncated` says more existed.
        // For statements without a result set the table is empty and `affected` holds the row count.
        // Throws InvalidOperationException with the server's error text on failure.
        System::Data::DataTable^ Query(String^ sql, int maxRows,
                                       [System::Runtime::InteropServices::Out] bool% truncated,
                                       [System::Runtime::InteropServices::Out] long long% affected,
                                       [System::Runtime::InteropServices::Out] double% elapsedMs);

    private:
        MySqlClient* m_client;
    };
}
