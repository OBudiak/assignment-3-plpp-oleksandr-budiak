#pragma once

// Якщо збираємо бібліотеку, визначено MYLIB_EXPORTS → експорт
#ifdef MYLIB_EXPORTS
#  define MYLIB_API __declspec(dllexport)
#else
#  define MYLIB_API __declspec(dllimport)
#endif

// Щоб виключити манглінг імен у C++
extern "C" {
    // Приклад функції, яка буде у DLL
    MYLIB_API char* encrypt(char* rawText, int key);
    MYLIB_API char* decrypt(char* rawText, int key);
}
