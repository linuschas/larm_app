#include "LarmKomponent.h"

// Konstruktor
LarmKomponent::LarmKomponent(int id, const std::string& componentType, const std::string& name, bool isActive)
    : id(id), componentType(componentType), name(name), isActive(isActive) {}

// Getter för namn
std::string LarmKomponent::getName() const {
    return name;
}
