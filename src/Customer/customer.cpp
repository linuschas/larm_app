#include "Customer.h"
#include <iostream>

// Initialisera statisk variabel
int Customer::nextCustomerID = 1;

// Konstruktor för User
User::User(int id, const std::string& userCode, const std::string& rfidTag, const std::string& phrase)
    : userID(id), code(userCode), tagID(rfidTag), verificationPhrase(phrase) {}

// Konstruktor för Customer
Customer::Customer(const std::string& customerName, const std::string& customerAddress)
    : customerID(nextCustomerID++), name(customerName), address(customerAddress) {}

// Lägg till användare
void Customer::addUser(const std::string& userCode, const std::string& rfidTag, const std::string& phrase) {
    int newUserID = users.size() + 1;
    users.emplace_back(newUserID, userCode, rfidTag, phrase);
    std::cout << "Användare med ID " << newUserID << " har lagts till." << std::endl;
}

// Visa kundinformation
void Customer::displayCustomerInfo() const {
    std::cout << "Kund-ID: " << customerID << "\nNamn: " << name << "\nAdress: " << address << std::endl;
    std::cout << "Användare:" << std::endl;
    for (const auto& user : users) {
        std::cout << "- UserID: " << user.userID
                  << ", TagID: " << user.tagID
                  << ", VerificationPhrase: " << user.verificationPhrase << std::endl;
    }
}

// Returnera kund-ID
int Customer::getCustomerID() const {
    return customerID;
}
