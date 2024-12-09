add_executable( main main.cpp ${files} )
target_include_directories( main PRIVATE ${includes} )

enable_testing()

find_package(Catch2 REQUIRED)

add_executable( test ${files} ${includes} )
target_link_libraries( test PRIVATE Catch2::Catch2WithMain )

include( Catch )
include( CTest )
catch_discover_tests( test )