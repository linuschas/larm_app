#include <catch2/catch_test_macros.hpp>

#include "SQLDatabase.h"

TEST_CASE("SQL Database insert operations", "[SQL],[Database]")
{
    SQLDatabase database{"test_database.sql"};
    AlarmSystem system; 
    system.customerName = "Boys";
    system.address = "Backstreet";
    REQUIRE(database.insertAlarmSystem(system) == SQLITE_OK);
    
    AlarmComponent component;
    component.address = "Backstreet";
    component.owner = "Boys";
    component.componentType = "Person";
    REQUIRE(database.insertAlarmComponent(component) == SQLITE_OK);

    Customer customer;
    customer.address = "Backstreet";
    customer.name = "Boys";
    customer.pinCode = "1234";
    customer.tagId = "dhy562187213afYgajHipKjhh1";
    customer.verificationPhrase = "Backstreets back";
    REQUIRE(database.insertCustomer(customer) == SQLITE_OK);
}