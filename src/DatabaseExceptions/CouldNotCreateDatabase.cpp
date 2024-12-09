#include "CouldNotCreateDatabase.h"

inline const char* CouldNotCreateDatabaseException::what() const noexcept 
{
    return "Could not create database!";
}