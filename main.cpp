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
    cout << endl;
    switch (v)
    {
        case 1:
            Child child_class[2];
            for (int i = 0; i < 2; i++)
            {
                cout << "Работа с " << i + 1 << " объектом класса Child" << endl;
                child_class[i].input();
                child_class[i].output();
            }
            break;
        case 2:
            Tiles tiles_class[2];
            for (int i = 0; i < 2; i++) {
                cout << "Работа с " << i + 1 << " объектом класса Tiles" << endl;
                cout << "Введите фирму кафеля: ";
                cin >> tiles_class[i].brand;
                cout << "Введите высоту кафеля: ";
                cin >> tiles_class[i].size_h;
                cout << "Введите ширину кафеля: ";
                cin >> tiles_class[i].size_w;
                cout << "Введите цену кафеля: ";
                cin >> tiles_class[i].price;
                tiles_class[i].getData();
            }
            break;
        case 3:
            Complex complex_class[2];
            cout << endl << endl;
            for (int i = 0; i < 2; i++) {
                cout << "Работа с " << i + 1 << " объектом класса Complex" << endl;
                complex_class[i].input();
                cout << endl;
                complex_class[i].output();
                cout << endl;
                complex_class[i].abs();
            }
            break;
        case 4:
            Vector vector_class_1;
            Vector vector_class_2;
            Vector vector_class_sum;
            Vector vector_class_dif;
            cout << endl << endl;
            cout << "Работа с первым объектом класса Vector" << endl;
            vector_class_1.input();
            vector_class_1.output();
            vector_class_1.abs();
            cout << endl << endl;
            cout << "Работа со вторым объектом класса Vector" << endl;
            vector_class_2.input();
            vector_class_2.output();
            vector_class_2.abs();
            cout << endl;
            cout << endl;
            vector_class_sum.sum(vector_class_1, vector_class_2);
            cout << endl;
            vector_class_dif.dif(vector_class_1, vector_class_2);
            break;
    }
    return 0;
}
