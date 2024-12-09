#include "InstalleratLarm.h"
#include "LarmKomponent.h" // För att arbeta med komponenter
#include <iostream>
#include <string>

// Konstruktor
InstalleratLarm::InstalleratLarm(const std::string& address, const std::string& customerName)
    : address(address), customerName(customerName) {}

// Getter och setter för adress
std::string InstalleratLarm::getAddress() const {
    return address;
}

void InstalleratLarm::setAddress(const std::string& address) {
    this->address = address;
}

// Getter och setter för kundnamn
std::string InstalleratLarm::getCustomerName() const {
    return customerName;
}

void InstalleratLarm::setCustomerName(const std::string& customerName) {
    this->customerName = customerName;
}

// Lägg till komponent
void InstalleratLarm::addComponent(LarmKomponent* component) {
    components.push_back(component);
}

// Testa systemet
void InstalleratLarm::testSystem() const {
    std::cout << "Testing system at address: " << address << "\n";
    for (const auto& component : components) {
        if (component->isActive) {
            std::cout << "Component " << component->getName() << " is active.\n";
        } else {
            std::cout << "Component " << component->getName() << " is inactive!\n";
        }
    }
}

// Kontrollera om systemet är aktivt
bool InstalleratLarm::isSystemActive() const {
    for (const auto& component : components) {
        if (!component->isActive) {
            return false;
        }
    }
    return true;
}
