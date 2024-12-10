#include <catch2/catch_test_macros.hpp>

#define DEBUG

#include "CouldNotCreateDatabase.h"
#include "CouldNotInsert.h"
#include "SQLDatabase/SQLDatabase.h"

TEST_CASE("Testing Database exceptions", "[Exceptions],[Database]") 
{
    SQLDatabase database{"test_database.sql"};
    database.clearTables();

    AlarmSystem system; 
    system.customerName = "Boys";
    system.address = "Backstreet";
    
    LarmComponent component;
    component.address = "Backstreet";
    component.name = "Boys";
    component.componentType = "Person";

    Customer customer;
    customer.address = "Backstreet";
    customer.name = "Boys";
    customer.pinCode = "1234";
    customer.tagId = "dhy562187213afYgajHipKjhh1";
    customer.verificationPhrase = "Backstreets back";

    REQUIRE(database.insertAlarmSystem(system) == SQLITE_OK);
    REQUIRE(database.insertAlarmComponent(component) == SQLITE_OK);
    REQUIRE(database.insertCustomer(customer) == SQLITE_OK);

    REQUIRE_THROWS_AS(database.insertAlarmSystem(system), CouldNotInsert);
    REQUIRE_THROWS_AS(database.insertCustomer(customer), CouldNotInsert);
    REQUIRE_NOTHROW(database.insertAlarmComponent(component));
}