#include <iostream>
#include "SQLDatabase/SQLDatabase.h"

int main() {
    SQLDatabase database{"database.sql"};
    AlarmSystem system; 
    system.customerName = "Boys";
    system.address = "Backstreet";
    database.insertAlarmSystem(system);
    
    AlarmComponent component;
    component.address = "Backstreet";
    component.owner = "Boys";
    component.componentType = "Person";
    database.insertAlarmComponent(component);

    Customer customer;
    customer.address = "Backstreet";
    customer.name = "Boys";
    customer.pinCode = "1234";
    customer.tagId = "dhy562187213afYgajHipKjhh1";
    customer.verificationPhrase = "Backstreets back";
    database.insertCustomer(customer);
    return 0;
}