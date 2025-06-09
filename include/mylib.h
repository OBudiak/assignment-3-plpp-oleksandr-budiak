#pragma once

#ifdef BUILD_DLL
#  define DLL_API __declspec(dllexport)
#else
#  define DLL_API __declspec(dllimport)
#endif

extern "C" {
    DLL_API char* encrypt(char* rawText, int key);
    DLL_API char* decrypt(char* rawText, int key);
}