#include <cstdio>

#include "mylib.h"

int main() {
    char* text = encrypt("My name is Zak", -44);
    char* result = decrypt(text, -44);
    // for (int i = 0; i <= 255; i++) printf("%d - %c\n", i, i);
}