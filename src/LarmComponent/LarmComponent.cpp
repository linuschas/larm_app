#include "LarmComponent.h"


int get_id(LarmComponent* component) {
        return component->m_id;
}

std::string get_component_type( LarmComponent* component) {
    return component->m_component_type;
}
std::string get_component_name( LarmComponent* component){
    return component->m_name;
}

bool get_status(LarmComponent* component) {
    return component->m_isActive;
}

std::string get_address(LarmComponent* component) {
    return component->m_address;
}

// void print_all_component_info(LarmComponent* component) {
//     std::cout << "Id: " << get_id(component) << "\nType: " << get_component_type(component) << "\nComponent name: " << get_component_name(component) << "\nComponent status: " << get_status(component) << "\nAddress: " << get_address(component) << "\n";
// }

void set_status(LarmComponent* component){
    component->m_isActive != component->m_isActive;
}
