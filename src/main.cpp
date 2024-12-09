#include <iostream>
#include "InstalleratLarm.h"
#include "LarmKomponent.h"

int main() {
    // Skapa ett InstalleratLarm-objekt
    InstalleratLarm alarm("123 Street Name", "John Doe");

    // Skapa några komponenter
    LarmKomponent component1(1, "Sensor", "Front Door Sensor", true);
    LarmKomponent component2(2, "Camera", "Living Room Camera", false);

    // Lägg till komponenterna i larmet
    alarm.addComponent(&component1);
    alarm.addComponent(&component2);

    // Testa systemet
    alarm.testSystem();

    // Kontrollera systemets status
    if (alarm.isSystemActive()) {
        std::cout << "The alarm system is fully active.\n";
    } else {
        std::cout << "The alarm system has inactive components.\n";
    }

    return 0;
}
