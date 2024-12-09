#ifndef __SQL_DATABASE_H__
#define __SQL_DATABASE_H__

#include <sqlite3.h>
#include "Database/Database.h"

class SQLDatabase : Database
{
public:
    virtual int insertAlarmSystem(AlarmSystem &alarm) override;
    virtual int insertAlarmComponent(LarmComponent &alarm) override;
    virtual int insertCustomer(Customer &alarm) override;

    virtual int getAlarmSystem(AlarmSystem alarm) override;
    virtual int getAlarmComponent(LarmComponent alarm) override;
    virtual int getCustomer(Customer alarm) override;

    SQLDatabase(std::string path);

    sqlite3 *getDB();
private:
    sqlite3 *m_db;
};

#endif