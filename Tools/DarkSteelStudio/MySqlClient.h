#pragma once

// =============================================================================
// DarkSteelStudio - MySqlClient  (native, plain C++ over the bundled libmysql)
//
// One lazily reconnecting connection to the game database, using the same MySQL
// C connector the servers use (Code\external\mysql-connector-c, libmysql.lib /
// libmysql.dll). This header does not include <mysql.h> (it drags in
// <windows.h>/<winsock2.h>, which must stay out of the managed headers); only
// MySqlClient.cpp does. All text is UTF-8. Every method is blocking and
// thread-safe (one query at a time): call them from a worker thread.
// =============================================================================

#include <string>
#include <vector>

struct DbCell
{
    bool        isNull = false;
    std::string text;
};

struct DbResult
{
    std::vector<std::string>        columns;      // empty for statements that return no rows
    std::vector<std::vector<DbCell>> rows;
    unsigned long long              affectedRows = 0;   // INSERT/UPDATE/DELETE
    bool                            truncated = false;  // more rows existed than maxRows
};

class MySqlClient
{
public:
    MySqlClient();
    ~MySqlClient();

    // Connects (replacing any open connection). `schema` may be empty.
    bool Connect(const std::string& host, unsigned int port, const std::string& user,
                 const std::string& password, const std::string& schema, std::string& error);
    bool IsConnected();
    void Disconnect();
    std::string ServerVersion();

    // Switches the default schema (mysql_select_db) and remembers it for the automatic reconnect.
    bool SelectSchema(const std::string& schema, std::string& error);   // e.g. "5.7.40-log"; empty when not connected

    // Runs one SQL statement; reconnects once with the last settings if the server dropped the link.
    bool Query(const std::string& sql, size_t maxRows, DbResult& out, std::string& error);

private:
    struct Impl;
    Impl* m_impl;
};
