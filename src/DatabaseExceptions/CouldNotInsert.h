#ifndef __COULD_NOT_INSERT__
#define __COULD_NOT_INSERT__

#include <exception>
#include <string>

class CouldNotInsert : public std::exception 
{
public:
    virtual const char* what() const noexcept override;

    CouldNotInsert(const std::string &reason);

private:
    std::string m_reason;
};

#endif