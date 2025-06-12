#pragma once

#ifdef _WIN32
  #ifdef BUILD_DLL
    #define MYLIB_API __declspec(dllexport)
  #else
    #define MYLIB_API __declspec(dllimport)
  #endif
#else
  #define MYLIB_API
#endif

#include <string>

// Оголошуємо експортувані функції
extern "C" {
    MYLIB_API char* encrypt(char* rawText, int key);
    MYLIB_API char* decrypt(char* encryptedText, int key);
}
