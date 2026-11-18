#include "DbBridge.h"
#include "MySqlClient.h"

#include <cstring>

namespace DarkSteelStudio {

    using namespace System::Data;
    using namespace System::Text;

    namespace {

        std::string ToUtf8(String^ value)
        {
            if (String::IsNullOrEmpty(value)) return std::string();
            array<Byte>^ bytes = Encoding::UTF8->GetBytes(value);
            if (bytes->Length == 0) return std::string();
            pin_ptr<Byte> pinned = &bytes[0];
            return std::string(reinterpret_cast<const char*>(pinned), static_cast<size_t>(bytes->Length));
        }

        String^ FromUtf8(const std::string& value)
        {
            if (value.empty()) return String::Empty;
            array<Byte>^ bytes = gcnew array<Byte>(static_cast<int>(value.size()));
            pin_ptr<Byte> pinned = &bytes[0];
            std::memcpy(pinned, value.data(), value.size());
            return Encoding::UTF8->GetString(bytes);
        }

        // ^-?(0|[1-9][0-9]{0,17})$  (fits Int64, no leading zeros)
        bool IsPlainInteger(const std::string& s)
        {
            size_t i = 0;
            if (i < s.size() && s[i] == '-') ++i;
            size_t digits = s.size() - i;
            if (digits == 0 || digits > 18) return false;
            if (s[i] == '0') return digits == 1 && i == 0;   // "0" yes; "-0" and "01" no
            for (; i < s.size(); ++i)
            {
                if (s[i] < '0' || s[i] > '9') return false;
            }
            return true;
        }
    }

    DbBridge::DbBridge() : m_client(new MySqlClient()) {}

    DbBridge::~DbBridge() { this->!DbBridge(); }

    DbBridge::!DbBridge()
    {
        delete m_client;
        m_client = nullptr;
    }

    bool DbBridge::Connect(String^ host, int port, String^ user, String^ password, String^ schema, String^% message)
    {
        std::string error;
        if (!m_client->Connect(ToUtf8(host), static_cast<unsigned int>(port), ToUtf8(user), ToUtf8(password), ToUtf8(schema), error))
        {
            message = FromUtf8(error);
            return false;
        }
        message = FromUtf8(m_client->ServerVersion());
        return true;
    }

    bool DbBridge::SelectSchema(String^ schema, String^% message)
    {
        std::string error;
        if (!m_client->SelectSchema(ToUtf8(schema), error))
        {
            message = FromUtf8(error);
            return false;
        }
        message = String::Empty;
        return true;
    }

    void DbBridge::Disconnect() { m_client->Disconnect(); }

    bool DbBridge::Connected::get() { return m_client->IsConnected(); }

    DataTable^ DbBridge::Query(String^ sql, int maxRows, bool% truncated, long long% affected, double% elapsedMs)
    {
        truncated = false;
        affected = 0;

        System::Diagnostics::Stopwatch^ watch = System::Diagnostics::Stopwatch::StartNew();
        DbResult result;
        std::string error;
        if (!m_client->Query(ToUtf8(sql), maxRows > 0 ? static_cast<size_t>(maxRows) : 0, result, error))
        {
            throw gcnew InvalidOperationException(FromUtf8(error));
        }
        truncated = result.truncated;
        affected = static_cast<long long>(result.affectedRows);

        DataTable^ table = gcnew DataTable("Result");
        table->Locale = System::Globalization::CultureInfo::InvariantCulture;
        const size_t columnCount = result.columns.size();

        // Type a column Int64 when every non-null value is a plain integer.
        std::vector<bool> asInt(columnCount, true);
        for (size_t c = 0; c < columnCount; ++c)
        {
            bool any = false;
            for (size_t r = 0; r < result.rows.size() && asInt[c]; ++r)
            {
                const DbCell& cell = result.rows[r][c];
                if (cell.isNull) continue;
                any = true;
                if (!IsPlainInteger(cell.text)) asInt[c] = false;
            }
            if (!any) asInt[c] = false;
        }

        for (size_t c = 0; c < columnCount; ++c)
        {
            // Column names may repeat (joins) or be empty; DataTable needs unique non-empty names.
            String^ name = FromUtf8(result.columns[c]);
            if (String::IsNullOrEmpty(name)) name = String::Format("column{0}", c + 1);
            String^ unique = name;
            int n = 1;
            while (table->Columns->Contains(unique)) { ++n; unique = name + "_" + n.ToString(); }
            table->Columns->Add(gcnew DataColumn(unique, asInt[c] ? Int64::typeid : String::typeid));
        }

        table->BeginLoadData();
        try
        {
            for (size_t r = 0; r < result.rows.size(); ++r)
            {
                array<Object^>^ values = gcnew array<Object^>(static_cast<int>(columnCount));
                for (size_t c = 0; c < columnCount; ++c)
                {
                    const DbCell& cell = result.rows[r][c];
                    if (cell.isNull) values[static_cast<int>(c)] = DBNull::Value;
                    else if (asInt[c]) values[static_cast<int>(c)] = Int64::Parse(FromUtf8(cell.text), System::Globalization::CultureInfo::InvariantCulture);
                    else values[static_cast<int>(c)] = FromUtf8(cell.text);
                }
                table->Rows->Add(values);
            }
        }
        finally
        {
            table->EndLoadData();
        }

        watch->Stop();
        elapsedMs = watch->Elapsed.TotalMilliseconds;
        return table;
    }
}
