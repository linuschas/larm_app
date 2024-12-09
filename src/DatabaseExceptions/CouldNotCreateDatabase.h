#ifndef __COULD_NOT_CREATE_DATABASE_EXCEPTION__
#define __COULD_NOT_CREATE_DATABASE_EXCEPTION__

#include <exception>

class CouldNotCreateDatabaseException : public std::exception 
{
    virtual const char* what() const noexcept override;
};

#endif