#ifndef LARMCOMPONENT_H
#define LARMCOMPONENT_H
#include <iostream>
#include <string>

typedef struct{
    int id{0};
    std::string componentType{};
    std::string name{};
    bool isActive{false};
    std::string address{};
}LarmComponent;

int getId(LarmComponent* component);

std::string getComponentType(LarmComponent* component);

std::string getComponentName(LarmComponent* component);

bool getStatus(LarmComponent* component);

std::string getAddress(LarmComponent* component);

void printAllComponentInfo(LarmComponent* component);

void setStatus(LarmComponent* component);


#endif
