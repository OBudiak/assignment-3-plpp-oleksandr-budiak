#include <cstdio>

#include "mylib.h"

int main() {
    char* text = encrypt("My name is Zak", 3);
    char* result = decrypt(text, 3);
    // for (int i = 0; i <= 255; i++) printf("%d - %c\n", i, i);
}