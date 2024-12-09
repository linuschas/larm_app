#ifndef __DATABASE_H__
#define __DATABASE_H__

class Database
{
public:
    virtual int insertAlarmSystem(AlarmSystem alarm) = 0;
    virtual int insertAlarmComponent(AlarmComponent alarm) = 0;
    virtual int insertCustomer(Customer alarm) = 0;

    virtual int getAlarmSystem(AlarmSystem alarm) = 0;
    virtual int getAlarmComponent(AlarmComponent alarm) = 0;
    virtual int getCustomer(Customer alarm) = 0;
};

#endif