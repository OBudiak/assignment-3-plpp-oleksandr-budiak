cmake_minimum_required(VERSION 3.15)
project(CezarCrypting)

set(CMAKE_CXX_STANDARD 20)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(MyDll SHARED
        src/mylib.cpp
)

add_executable(${PROJECT_NAME}
        src/main.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE MyDll)

# Примусово ставимо, що це консольний EXE
set_target_properties(${PROJECT_NAME} PROPERTIES
        WIN32_EXECUTABLE FALSE
)
