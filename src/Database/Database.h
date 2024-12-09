#ifndef __DATABASE_H__
#define __DATABASE_H__

#include <string>

struct AlarmSystem
{
    std::string address;
    std::string customerName;
};

struct AlarmComponent
{
    int id;
    std::string componentType;
    std::string owner;
    bool isActive;
    std::string address;
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
    virtual int insertAlarmComponent(AlarmComponent &alarm) = 0;
    virtual int insertCustomer(Customer &alarm) = 0;

    virtual int getAlarmSystem(AlarmSystem alarm) = 0;
    virtual int getAlarmComponent(AlarmComponent alarm) = 0;
    virtual int getCustomer(Customer alarm) = 0;

    // Database(std::string path);

public:
    std::string m_path;
};

#endif