file ( GLOB_RECURSE main_files *.cpp )
list ( FILTER main_files EXCLUDE REGEX ".*test\.cpp$" )

add_definitions(-DCMAKE)

find_package(SQLite3 REQUIRED)

include_directories( . ${SQLite3_DIRS} )
add_executable( main ${main_files} )
target_link_libraries( main PRIVATE ${SQLite3_LIBRARIES} )

find_package(Catch2 REQUIRED)

file ( GLOB_RECURSE test_files *.cpp )
list ( FILTER test_files EXCLUDE REGEX ".*main\.cpp" )

include_directories( ${Catch2_DIRS} )
add_executable( test ${test_files} )
target_link_libraries( test PRIVATE Catch2::Catch2WithMain )
target_link_libraries( test PRIVATE ${SQLite3_LIBRARIES} )

include( Catch )
include( CTest )
catch_discover_tests( test )
