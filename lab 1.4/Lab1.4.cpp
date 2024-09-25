/**
 * Зроблено:
 * ПІБ: Заблоцький Максим Сергійович
 * Група студента: 121
 * Lab 1.4
 */
#include <iostream>
#include <cmath>

int main() {
    unsigned short varA; // Оголошення змінної
    unsigned short* ptrB; // Оголошення вказівника
    ptrB = &varA; // Присвоєння адреси змінної вказівнику
    *ptrB = 43; // Присвоєння значення через вказівник

    int varC;
    int* ptrD;
    ptrD = &varC;
    *ptrD = 5124;

    float varE;
    float* ptrF;
    ptrF = &varE;
    *ptrF = -8976.04;

    double varG;
    double* ptrH;
    ptrH = &varG;
    *ptrH = 3.5e-4;

    void* genericPtr; // Оголошення нетипізованого вказівника
    int sizeVarA = sizeof(varA); // Оголошення змінних для розмірів
    int sizePtrB = sizeof(ptrB);
    int sizeVarC = sizeof(varC);
    int sizePtrD = sizeof(ptrD);
    int sizeVarE = sizeof(varE);
    int sizePtrF = sizeof(ptrF);
    int sizeVarG = sizeof(varG);
    int sizePtrH = sizeof(ptrH);

    genericPtr = &ptrB; // Присвоєння адреси типізованого вказівника нетипізованому
}
