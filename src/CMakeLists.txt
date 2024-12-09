file ( GLOB_RECURSE main_files *.cpp )

find_package(SQLite3 REQUIRED)

include_directories( . ${SQLite3_DIRS} )
add_executable( main ${main_files} )
target_link_libraries( main PRIVATE ${SQLite3_LIBRARIES} )
