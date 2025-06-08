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
    MYLIB_API int   add(int a, int b);
    MYLIB_API void  hello();
}
