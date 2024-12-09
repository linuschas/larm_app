#include "LarmComponent.h"

LarmComponent::LarmComponent(int id, std::string type, std::string name, bool isActive, std::string address) : m_id{id}, m_component_type{type}, m_name{name}, m_isActive{isActive}, m_address{address}
{}

LarmComponent::~LarmComponent()
{
}

void LarmComponent::register_component(){
}
int LarmComponent::get_id() const{
        return m_id;
    }

std::string LarmComponent::get_component_type() const{
    return m_component_type;
}
std::string LarmComponent::get_component_name() const{
    return m_name;
}

bool LarmComponent::get_status() const{
    return m_isActive;
}

std::string LarmComponent::get_address() const {
    return m_address;
}
