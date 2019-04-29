#include <iostream>
#include "cmake-build-debug/Child.h"
#include "cmake-build-debug/Tiles.h"
#include "cmake-build-debug/Complex.h"
#include "cmake-build-debug/Vector.h"

using namespace std;



int main()
{
    cout << "Выберете, с какой структурой хотите работать. Нажмите:" << endl <<
         "1 - структура Child" << endl <<
         "2 - структура Tiles" << endl <<
         "3 - структура Complex" << endl <<
         "4 - структура Vector" << endl;
    int v;
    cin >> v;
    switch (v)
    {
        case 1:
        {
            char str1[] = "Scott";
            char str2[] = "Breadly";
            int age = 80;
            Child class_1(str1, str2, age);	//Создание объекта class_1, вызывается конструктор с 3-я параметрами
            Child class_2 = class_1;	//Создание и инициализация объекта class_2 вызывается конструктор копирования
            cout << endl << "Структура 1:";
            class_1.output();
            cout << endl << "Структура 2:";
            class_2.output();
            break;
        }
        case 2:
        {
            char str1[] = "Firm";
            int h = 10;
            int w = 25;
            int p = 100;
            Tiles class_1(str1, h, w, p);	//Создание объекта class_2, вызывается конструктор с 3-я параметрами
            Tiles class_2 = class_1;	//Создание и инициализация объекта class_2 вызывается конструктор копирования
            cout << endl << "Структура 1:";
            class_1.getData();
            cout << endl << "Структура 2:";
            class_2.getData();
            break;
        }
        case 3:
        {
            Complex c1(1, 2); //Использование стандартного конструктора
            Complex c2; //Использование конструктора инициализации
            cout << "Структура 1" << endl;
            c1.output();
            c1.abs();
            cout << endl;
            cout << "Структура 2" << endl;
            c2.output();
            c2.abs();
            cout << endl;
            Complex c3 = c1; //Использование конструктора копирования
            cout << "Структура 3" << endl;
            c3.output();
            c3.abs();
            cout << endl;
            break;
        }
        case 4:
        {
            Vector c1 (10, -45); //Использование стандартного конструктора
            Vector c2; //Использование конструктора инициализации
            cout << "Структура 1" << endl;
            c1.output();
            c1.abs();
            cout << "Структура 2" << endl;
            c2.output();
            c2.abs();
            Vector summ;
            Vector diff;
            diff.dif(c1,c2);
            summ.sum(c1,c2);
            break;
        }
    }
    system("pause");
}

