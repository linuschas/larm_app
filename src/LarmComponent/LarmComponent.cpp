#include "LarmComponent.h"

LarmComponent::LarmComponent(int id, std::string type, std::string name, bool isActive, std::string address) : m_id{id}, m_component_type{type}, m_name{name}, m_isActive{isActive}, m_address{address}
{}

LarmComponent::~LarmComponent()
{
}

void LarmComponent::register_component(){
}
int LarmComponent::get_id() const{
        return this->m_id;
    }

std::string LarmComponent::get_component_type() const{
    return this->m_component_type;
}
std::string LarmComponent::get_component_name() const{
    return this->m_name;
}

bool LarmComponent::get_status() const{
    return this->m_isActive;
}

std::string LarmComponent::get_address() const {
    return this->m_address;
}

void LarmComponent::print_all_component_info() const{
    std::cout << "Id: " << m_id << "\nType: " << m_component_type << "\nComponent name: " << m_name << "\nComponent status: " << m_isActive << "\nAddress: " << m_address << "\n";
}
