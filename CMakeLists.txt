cmake_minimum_required(VERSION 3.15)
project(CezarCrypting)

# Вмикаємо побудову DLL (shared library)
add_library(CezarCrypting SHARED
        src/mylib.cpp
)

# Щоб клієнти могли підключати заголовки
target_include_directories(CezarCrypting PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)