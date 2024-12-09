#ifndef __DATABASE_H__
#define __DATABASE_H__

#include <sqlite3.h>

class Database
{
public:
    int insertAlarmSystem(AlarmSystem alarm);
    int insertAlarmComponent(AlarmComponent alarm);
    int insertCustomer(Customer alarm);

    int getAlarmSystem(AlarmSystem alarm);
    int getAlarmComponent(AlarmComponent alarm);
    int getCustomer(Customer alarm);

private:
    sqlite3 *db;
};

#endif