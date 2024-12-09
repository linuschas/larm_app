#include "SQLDatabase.h"
#include <filesystem>
#include <iostream>

#include "DatabaseExceptions/CouldNotCreateDatabase.h"

SQLDatabase::SQLDatabase(std::string path)
{
    int res = sqlite3_open(path.c_str(), &m_db);

    if (res != SQLITE_OK)
    {
        throw CouldNotCreateDatabaseException();
    }

    sqlite3_exec(m_db, 
        "CREATE TABLE IF NOT EXISTS alarm (address TEXT NOT NULL, customerName TEXT NOT NULL, PRIMARY KEY (address, customerName));",
        nullptr, nullptr, nullptr
    );

    sqlite3_exec(m_db, 
        "CREATE TABLE IF NOT EXISTS customer (id INTEGER PRIMARY KEY AUTOINCREMENT, \
            name TEXT NOT NULL, pinCode TEXT(4) NOT NULL, tagId TEXT UNIQUE NOT NULL, verificationPhrase TEXT UNIQUE NOT NULL, `address` TEXT NOT NULL, \
            FOREIGN KEY (`address`) REFERENCES alarm(`address`) ON DELETE CASCADE);",
        nullptr, nullptr, nullptr
    );

    sqlite3_exec(m_db, 
        "CREATE TABLE IF NOT EXISTS alarmComponent (                                    \
            id INTEGER PRIMARY KEY AUTOINCREMENT,                                       \
            componentType TEXT NOT NULL,                                                \
            owner TEXT NOT NULL,                                                         \
            isActive BOOLEAN DEFAULT FALSE NOT NULL,                                    \
            address TEXT NOT NULL,                                                      \
        FOREIGN KEY (address) REFERENCES alarm (address) 	ON DELETE CASCADE,          \
        FOREIGN KEY (owner) REFERENCES customer (name) 	    ON DELETE CASCADE);",
        nullptr, nullptr, nullptr
    );  
};

inline int SQLDatabase::insertAlarmSystem(AlarmSystem &alarm)
{
    sqlite3_stmt *stmt;
    std::string sql = "INSERT INTO alarm (address, customerName) VALUES (?, ?)";
    sqlite3_prepare(m_db, sql.c_str(), sql.size(), &stmt, nullptr);

    sqlite3_bind_text(stmt, 1, alarm.address.c_str(), alarm.address.size(), nullptr);
    sqlite3_bind_text(stmt, 2, alarm.customerName.c_str(), alarm.customerName.size(), nullptr);

    sqlite3_step(stmt);
    return sqlite3_finalize(stmt);
}

inline int SQLDatabase::insertAlarmComponent(AlarmComponent &alarm)
{
    sqlite3_stmt *stmt;
    std::string sql = "INSERT INTO alarmComponent (address, componentType, owner) VALUES (?, ?, ?)";
    const char* errorMsg;
    sqlite3_prepare(m_db, sql.c_str(), sql.size(), &stmt, &errorMsg);

    sqlite3_bind_text(stmt, 1, alarm.address.c_str(), alarm.address.size(), nullptr);
    sqlite3_bind_text(stmt, 2, alarm.componentType.c_str(), alarm.componentType.size(), nullptr);
    sqlite3_bind_text(stmt, 3, alarm.owner.c_str(), alarm.owner.size(), nullptr);

    sqlite3_step(stmt);
    return sqlite3_finalize(stmt);
}

inline int SQLDatabase::insertCustomer(Customer &alarm)
{
    sqlite3_stmt *stmt;
    std::string sql = "INSERT INTO customer (address, pinCode, tagId, verificationPhrase, name) VALUES (?, ?, ?, ?, ?)";
    sqlite3_prepare(m_db, sql.c_str(), sql.size(), &stmt, nullptr);

    sqlite3_bind_text(stmt, 1, alarm.address.c_str(), alarm.address.size(), nullptr);
    sqlite3_bind_text(stmt, 2, alarm.pinCode.c_str(), alarm.pinCode.size(), nullptr);
    sqlite3_bind_text(stmt, 3, alarm.tagId.c_str(), alarm.tagId.size(), nullptr);
    sqlite3_bind_text(stmt, 4, alarm.verificationPhrase.c_str(), alarm.verificationPhrase.size(), nullptr);
    sqlite3_bind_text(stmt, 5, alarm.name.c_str(), alarm.name.size(), nullptr);

    sqlite3_step(stmt);
    return sqlite3_finalize(stmt);
}

inline int SQLDatabase::getAlarmSystem(AlarmSystem alarm)
{
    return 0;
}

inline int SQLDatabase::getAlarmComponent(AlarmComponent alarm)
{
    return 0;
}

inline int SQLDatabase::getCustomer(Customer alarm)
{
    return 0;
}

inline sqlite3 *SQLDatabase::getDB()
{
    return this->m_db;
}

