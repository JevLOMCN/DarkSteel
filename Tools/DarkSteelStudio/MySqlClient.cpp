#include "MySqlClient.h"


// <mysql.h> brings in <windows.h> and <winsock2.h>; that is fine in this plain-C++ file.
#include <mysql.h>

#pragma comment(lib, "libmysql.lib")

namespace
{
    // Scoped lock over a Windows critical section (recursive by nature).
    struct Guard
    {
        CRITICAL_SECTION* cs;
        explicit Guard(CRITICAL_SECTION& c) : cs(&c) { EnterCriticalSection(cs); }
        ~Guard() { LeaveCriticalSection(cs); }
    };
}

struct MySqlClient::Impl
{
    CRITICAL_SECTION     mutex;
    MYSQL*               conn = nullptr;

    // last successful settings, for the one-shot reconnect
    std::string  host, user, password, schema;
    unsigned int port = 3306;

    void Close()
    {
        if (conn != nullptr)
        {
            mysql_close(conn);
            conn = nullptr;
        }
    }

    bool Open(const std::string& h, unsigned int p, const std::string& u, const std::string& pw,
              const std::string& s, std::string& error)
    {
        Close();
        MYSQL* c = mysql_init(nullptr);
        if (c == nullptr)
        {
            error = "mysql_init failed (out of memory)";
            return false;
        }

        unsigned int timeout = 8;
        mysql_options(c, MYSQL_OPT_CONNECT_TIMEOUT, &timeout);
        mysql_options(c, MYSQL_SET_CHARSET_NAME, "utf8mb4");

        if (mysql_real_connect(c, h.c_str(), u.c_str(), pw.c_str(), s.empty() ? nullptr : s.c_str(),
                               p, nullptr, 0) == nullptr)
        {
            error = std::string(mysql_error(c)) + " (error " + std::to_string(mysql_errno(c)) + ")";
            mysql_close(c);
            return false;
        }

        conn = c;
        host = h; port = p; user = u; password = pw; schema = s;
        return true;
    }
};

MySqlClient::MySqlClient() : m_impl(new Impl()) { InitializeCriticalSection(&m_impl->mutex); }

MySqlClient::~MySqlClient()
{
    {
        Guard lock(m_impl->mutex);
        m_impl->Close();
    }
    DeleteCriticalSection(&m_impl->mutex);
    delete m_impl;
}

bool MySqlClient::Connect(const std::string& host, unsigned int port, const std::string& user,
                          const std::string& password, const std::string& schema, std::string& error)
{
    Guard lock(m_impl->mutex);
    return m_impl->Open(host, port, user, password, schema, error);
}

bool MySqlClient::IsConnected()
{
    Guard lock(m_impl->mutex);
    return m_impl->conn != nullptr && mysql_ping(m_impl->conn) == 0;
}

void MySqlClient::Disconnect()
{
    Guard lock(m_impl->mutex);
    m_impl->Close();
}

std::string MySqlClient::ServerVersion()
{
    Guard lock(m_impl->mutex);
    if (m_impl->conn == nullptr) return std::string();
    const char* info = mysql_get_server_info(m_impl->conn);
    return info != nullptr ? std::string(info) : std::string();
}

bool MySqlClient::SelectSchema(const std::string& schema, std::string& error)
{
    Guard lock(m_impl->mutex);
    if (m_impl->conn == nullptr)
    {
        error = "Not connected.";
        return false;
    }
    if (m_impl->schema == schema)
    {
        return true;   // already selected
    }
    if (mysql_select_db(m_impl->conn, schema.c_str()) != 0)
    {
        error = std::string(mysql_error(m_impl->conn)) + " (error " + std::to_string(mysql_errno(m_impl->conn)) + ")";
        return false;
    }
    m_impl->schema = schema;
    return true;
}

bool MySqlClient::Query(const std::string& sql, size_t maxRows, DbResult& out, std::string& error)
{
    Guard lock(m_impl->mutex);
    out = DbResult();

    if (m_impl->conn == nullptr)
    {
        error = "Not connected.";
        return false;
    }

    // Server dropped the link (idle timeout): reconnect once with the last good settings.
    if (mysql_ping(m_impl->conn) != 0)
    {
        std::string reconnectError;
        std::string h = m_impl->host, u = m_impl->user, pw = m_impl->password, s = m_impl->schema;
        unsigned int p = m_impl->port;
        if (!m_impl->Open(h, p, u, pw, s, reconnectError))
        {
            error = "Connection lost and reconnect failed: " + reconnectError;
            return false;
        }
    }

    if (mysql_real_query(m_impl->conn, sql.c_str(), static_cast<unsigned long>(sql.size())) != 0)
    {
        error = std::string(mysql_error(m_impl->conn)) + " (error " + std::to_string(mysql_errno(m_impl->conn)) + ")";
        return false;
    }

    MYSQL_RES* result = mysql_store_result(m_impl->conn);
    if (result == nullptr)
    {
        if (mysql_field_count(m_impl->conn) == 0)
        {
            out.affectedRows = mysql_affected_rows(m_impl->conn);   // statement without a result set
            return true;
        }
        error = std::string(mysql_error(m_impl->conn)) + " (error " + std::to_string(mysql_errno(m_impl->conn)) + ")";
        return false;
    }

    const unsigned int fieldCount = mysql_num_fields(result);
    MYSQL_FIELD* fields = mysql_fetch_fields(result);
    for (unsigned int i = 0; i < fieldCount; ++i)
    {
        out.columns.push_back(fields[i].name != nullptr ? fields[i].name : "");
    }

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result)) != nullptr)
    {
        if (maxRows > 0 && out.rows.size() >= maxRows)
        {
            out.truncated = true;
            break;
        }
        unsigned long* lengths = mysql_fetch_lengths(result);
        std::vector<DbCell> cells(fieldCount);
        for (unsigned int i = 0; i < fieldCount; ++i)
        {
            if (row[i] == nullptr) cells[i].isNull = true;
            else cells[i].text.assign(row[i], lengths != nullptr ? lengths[i] : std::char_traits<char>::length(row[i]));
        }
        out.rows.push_back(std::move(cells));
    }
    mysql_free_result(result);

    // Drain extra result sets, if any, so the connection stays usable.
    while (mysql_next_result(m_impl->conn) == 0)
    {
        MYSQL_RES* extra = mysql_store_result(m_impl->conn);
        if (extra != nullptr) mysql_free_result(extra);
    }
    return true;
}
