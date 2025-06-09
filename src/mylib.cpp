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
        if (rawText[i] >= 'a') {
            encrypted[i] = static_cast<char>((rawText[i] - 'a' + key) % 26 + 'a');
            // std::cout << '-' << encrypted[i] << std::endl;
        } else {
            encrypted[i] = static_cast<char>((rawText[i] - 'A' + key) % 26 + 'A');
            // std::cout << '-' << encrypted[i] << std::endl;
        }
    }
    encrypted[len] = '\0';
    std::cout << encrypted << std::endl;
    return encrypted;
}

char* decrypt(char* rawText, int key) {
    int len = strlen(rawText);
    char* decrypted = new char[len + 1];
    key = key % 26;
    if (key < 0) key -= 26;
    std::cout << key << std::endl;
    for (int i = 0; i < len; i++) {
        if ('A' > rawText[i] || (rawText[i] > 'Z' && 'a' > rawText[i]) || rawText[i] > 'z') {
            decrypted[i] = rawText[i];
            continue;
        }
        if (rawText[i] >= 'a') {
            decrypted[i] = static_cast<char>((rawText[i] - 'a' - key + 26) % 26 + 'a');
            // std::cout << '-' << encrypted[i] << std::endl;
        } else {
            decrypted[i] = static_cast<char>((rawText[i] - 'A' - key + 26) % 26 + 'A');
            // std::cout << '-' << encrypted[i] << std::endl;
        }
    }
    decrypted[len] = '\0';
    std::cout << decrypted << std::endl;
    return decrypted;
}
