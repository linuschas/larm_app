cmake_minimum_required( VERSION 3.31 )
project( larm_app VERSION 1.0.0 LANGUAGES CXX)

file( GLOB_RECURSE files src/**/*.cpp )
file( GLOB includes src/**/ )

find_package( SQLite3 REQUIRED )
include_directories( ${SQLite3_DIRS} )
link_libraries( ${SQLite3_LIBS} )

add_subdirectory(src)