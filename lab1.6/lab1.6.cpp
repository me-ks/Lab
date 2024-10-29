/**
 * Done by: Maksym Zablotskyi
 * Student Group: 121
 * Lab 1.6
 * Variant: 14
 */
#include <iostream>

int main()
{
    // TASK 1
    {
        char ca;
        ca = 'U';
        char cb = '*';
        const char CC = '6';

        int ia;
        ia = 0x7b;
        int ib = 0x4c;
        const int IC = 0x18;

        std::cout << "char values: " << ca << ", " << cb << ", " << CC << std::endl;
        std::cout << "int values: " << ia << ", " << ib << ", " << IC << std::endl;
        std::cout << std::endl;
    }
    // TASK 2
    {
        int a;
        float f;
        unsigned short us;

        a = 5876;
        f = 21.09;
        us = 333;

        std::cout << "initial values: " << a << f << us << std::endl;

        double exd;
        int exi;
        char exc;

        // explicit casting
        exd = (double)a;
        exi = (int)f;
        exc = (char)us;

        std::cout << "values after explicit casting" << std::endl;
        std::cout << "double: " << exd << std::endl;
        std::cout << "int: " << exi << std::endl;
        std::cout << "char: " << exc << std::endl << std::endl;

        // implicit casting
        double unexd = a;
        int unexi = f;
        char unexc = us;

        std::cout << "values after implicit casting" << std::endl;
        std::cout << "double: " << unexd << std::endl;
        std::cout << "int: " << unexi << std::endl;
        std::cout << "char: " << unexc << std::endl << std::endl;

        // bypassing strict typing
        void* pVoid;

        double* pointD;
        pVoid = &a;
        pointD = (double*)pVoid;
        exd = *pointD;

        int* pointI;
        pVoid = &f;
        pointI = (int*)pVoid;
        a = *pointI;

        char* pointC;
        pVoid = &us;
        pointC = (char*)pVoid;
        us = *pointC;

        std::cout << "bypassing strict typing:" << std::endl;
        std::cout << "double: " << exd << std::endl;
        std::cout << "int: " << a << std::endl;
        std::cout << "char: " << us << std::endl;
    }
}
