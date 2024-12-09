#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>

// Användarklass
class User {
public:
    int userID;
    std::string code; // Kod för aktivering/deaktivering
    std::string tagID; // RFID-sensor-ID
    std::string verificationPhrase; // Avstängningsfras

    User(int id, const std::string& userCode, const std::string& rfidTag, const std::string& phrase);
};

// Kundklass
class Customer {
private:
    int customerID;
    std::string name;
    std::string address;
    std::vector<User> users; // Lista över användare
    static int nextCustomerID; // Unik ID-generator

public:
    Customer(const std::string& customerName, const std::string& customerAddress);

    void addUser(const std::string& userCode, const std::string& rfidTag, const std::string& phrase);
    void displayCustomerInfo() const;
    int getCustomerID() const;
};

#endif // CUSTOMER_H
