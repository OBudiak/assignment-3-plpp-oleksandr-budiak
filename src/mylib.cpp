#define MYLIB_EXPORTS    // щоб під час збірки цієї бібліотеки MYLIB_API = dllexport
#include "mylib.h"
#include <iostream>

int add(int a, int b) {
    return a + b;
}

void hello() {
    std::cout << "Hello from MyDll!\n";
}
