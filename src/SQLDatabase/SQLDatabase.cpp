#include "SQLDatabase.h"
#include <filesystem>
#include <iostream>

#include "DatabaseExceptions/CouldNotCreateDatabase.h"

SQLDatabase::SQLDatabase(std::string path)
{
    int res = sqlite3_open(path.c_str(), &db);

    if (res != SQLITE_OK)
    {
        throw CouldNotCreateDatabaseException();
    }

    sqlite3_exec(db, 
        "CREATE TABLE IF NOT EXISTS alarm (address TEXT, customerName TEXT, PRIMARY KEY (address, customerName));",
        nullptr, nullptr, nullptr
    );

    sqlite3_exec(db, 
        "CREATE TABLE IF NOT EXISTS alarmComponent (id INTEGER PRIMARY KEY AUTOINCREMENT, \
            componentType TEXT, name TEXT, isActive BOOLEAN, address TEXT, \
            FOREIGN KEY (address) REFERENCES alarm (address) ON DELETE CASCADE));",
        nullptr, nullptr, nullptr
    );

    sqlite3_exec(db, 
        "CREATE TABLE IF NOT EXISTS customers (id INTEGER PRIMARY_KEY AUTOINCREMENT, \
            name TEXT, pinCode TEXT(4), tagId TEXT UNIQUE KEY, verificationPhrase TEXT UNIQUE KEY, address TEXT, \
            FOREIGN KEY (address) REFERENCES alarm(address) ON DELETE CASCADE);",
        nullptr, nullptr, nullptr
    );  
};

inline int SQLDatabase::insertAlarmSystem(AlarmSystem alarm)
{
    return 0;
}

inline int SQLDatabase::insertAlarmComponent(AlarmComponent alarm)
{
    return 0;
}

inline int SQLDatabase::insertCustomer(Customer alarm)
{
    return 0;
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

