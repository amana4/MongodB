cmake_minimum_required(VERSION 3.26)
project(mongodb)

set(CMAKE_CXX_STANDARD 17)

add_executable(mongodb
        Test.cpp)

include_directories(/usr/local/include/mongocxx/v_noabi)
include_directories(/usr/local/include/bsoncxx/v_noabi)

target_link_libraries(${PROJECT_NAME} 
  PRIVATE "/usr/local/lib/libmongocxx.dylib"
  PRIVATE "/usr/local/lib/libbsoncxx.dylib"
)