#include "LarmComponent.h"


int getId(LarmComponent* component) {
        return component->id;
}

std::string getComponentType( LarmComponent* component) {
    return component->componentType;
}
std::string getComponentName( LarmComponent* component){
    return component->name;
}

bool getStatus(LarmComponent* component) {
    return component->isActive;
}

std::string getAddress(LarmComponent* component) {
    return component->address;
}

// void printAllComponentInfo(LarmComponent* component) {
//     std::cout << "Id: " << getId(component) << "\nType: " << get_componentType(component) << "\nComponent name: " << getComponentName(component) << "\nComponent status: " << getStatus(component) << "\nAddress: " << getAddress(component) << "\n";
// }

void set_status(LarmComponent* component){

    if(component->isActive == false) {
        component->isActive == true;
    }
        component->isActive == false;
}
