#define MYLIB_EXPORTS
#include "mylib.h"
#include <iostream>
#include <string.h>

char* encrypt(char* rawText, int key) {
    int len = strlen(rawText);
    char* encrypted = new char[len + 1];
    key = key % 26;
    for (int i = 0; i < len; i++) {
        if ('A' > rawText[i] || (rawText[i] > 'Z' && 'a' > rawText[i]) || rawText[i] > 'z') {
            encrypted[i] = rawText[i];
            continue;
        }
        if (rawText[i] > 97) {
            encrypted[i] = (char)(97 + (97 - rawText[i] + key) % 26);
        } else if (rawText[i] > 65) {
            encrypted[i] = (char)(65 + (65 - rawText[i] + key) % 26);
        }
    }
    std::cout << encrypted << std::endl;
    return encrypted;
}

char* decrypt(char* rawText, int key) {
    std::cout << "Hello from MyDll!\n";
    return rawText;
}
