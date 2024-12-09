#ifndef __DATABASE_H__
#define __DATABASE_H__

#include <string>
#include "LarmComponent/LarmComponent.h"

struct AlarmSystem
{
    std::string address;
    std::string customerName;
};

struct Customer
{
    int id;
    std::string name;
    std::string pinCode;
    std::string tagId;
    std::string verificationPhrase;
    std::string address;
};

class Database
{
public:
    virtual int insertAlarmSystem(AlarmSystem &alarm) = 0;
    virtual int insertAlarmComponent(LarmComponent &alarm) = 0;
    virtual int insertCustomer(Customer &alarm) = 0;

    virtual int getAlarmSystem(AlarmSystem alarm) = 0;
    virtual int getAlarmComponent(LarmComponent alarm) = 0;
    virtual int getCustomer(Customer alarm) = 0;

    // Database(std::string path);

public:
    std::string m_path;
};

#endif