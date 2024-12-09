#ifndef LARMKOMPONENT_H
#define LARMKOMPONENT_H

#include <string>

class LarmKomponent {
public:
    int id;
    std::string componentType;
    std::string name;
    bool isActive;

    // Konstruktor
    LarmKomponent(int id, const std::string& componentType, const std::string& name, bool isActive);

    // Getter för namn
    std::string getName() const;
};

#endif // LARMKOMPONENT_H
