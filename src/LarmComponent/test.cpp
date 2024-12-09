#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "LarmComponent.h"

    LarmComponent larm_component(21321, "sensor","0732.1", false, "324 556");
    std::string address = larm_component.get_address();
    std::string name = larm_component.get_component_name();
    std::string type = larm_component.get_component_type();
    int id = larm_component.get_id();
    bool status = larm_component.get_status();

TEST_CASE("Get component info", "[LarmComponent]") {
    REQUIRE(name == "0732.1");
    REQUIRE(type == "sensor");
    REQUIRE(id == 21321);
    REQUIRE(address =="324 556");
    REQUIRE(status == false);
}
