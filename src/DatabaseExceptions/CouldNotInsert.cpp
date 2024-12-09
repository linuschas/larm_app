#include "CouldNotInsert.h"
#include <iostream>

inline const char* CouldNotInsert::what() const noexcept 
{
    std::cout << "\033[1;31m" << m_reason << "\033[0m" << std::endl;
    return "Could not insert values into database.";
}

CouldNotInsert::CouldNotInsert(const std::string &reason)
    : m_reason(reason)
{

}