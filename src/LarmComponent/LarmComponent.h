#ifndef LARMCOMPONENT_H
#define LARMCOMPONENT_H
#include <iostream>
#include <string>

class LarmComponent
{
private:
    int m_id;
    std::string m_component_type;
    std::string m_name;
    bool m_isActive;
    std::string m_address;

public:
    LarmComponent(int, std::string, std::string, bool, std::string);
    ~LarmComponent();
    void register_component();
    int get_id() const;
    std::string get_component_type() const;
    std::string get_component_name() const;
    bool get_status() const;
    std::string get_address() const;
    void print_all_component_info() const;
};


#endif
