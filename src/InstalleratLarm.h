#ifndef INSTALLERATLARM_H
#define INSTALLERATLARM_H

#include <string>
#include <vector>
#include "LarmKomponent.h"

class InstalleratLarm {
private:
    std::string address;  // Adress där larmet är installerat
    std::string customerName;  // Kundens namn
    std::vector<LarmKomponent*> components; // Komponenter kopplade till larmet

public:
    // Konstruktor
    InstalleratLarm(const std::string& address, const std::string& customerName);

    // Getter och setter för adress
    std::string getAddress() const;
    void setAddress(const std::string& address);

    // Getter och setter för kundnamn
    std::string getCustomerName() const;
    void setCustomerName(const std::string& customerName);

    // Lägg till komponent
    void addComponent(LarmKomponent* component);

    // Testa systemet
    void testSystem() const;

    // Kontrollera om systemet är aktivt
    bool isSystemActive() const;
};

#endif // INSTALLERATLARM_H
