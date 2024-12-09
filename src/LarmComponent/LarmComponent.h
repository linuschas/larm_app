#ifndef LARMCOMPONENT_H
#define LARMCOMPONENT_H
#include <iostream>
#include <string>

typedef struct{
    int m_id{0};
    std::string m_component_type{};
    std::string m_name{};
    bool m_isActive{false};
    std::string m_address{};
}LarmComponent;

int get_id(LarmComponent* component);

std::string get_component_type(LarmComponent* component);

std::string get_component_name(LarmComponent* component);

bool get_status(LarmComponent* component);

std::string get_address(LarmComponent* component);

void print_all_component_info(LarmComponent* component);

void set_status(LarmComponent* component);


#endif
