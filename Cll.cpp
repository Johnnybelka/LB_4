#include <iostream>
#include "Child.h"
#include "Tiles.h"
#include "Complex.h"
#include "Vector.h"
#include <math.h>

using namespace std;


Child::Child(const Child &obj)
{
    name = obj.name;
    surname = obj.surname;
    age = obj.age;
}

void Child::output()
{
    setlocale(LC_ALL, "Russian");
    cout << "Имя: " << name << endl;
    cout << "Фамилия: " << surname << endl;
    cout << "Возраст: " << age << endl;
}

Child::~Child()
{
    cout << "Деструктор" << endl;
}


void Tiles::getData()
{
    setlocale(LC_ALL, "Russian");
    cout << "Фирма: " << brand << endl;
    cout << "Высота: " << size_h << endl;
    cout << "Ширина:" << size_w << endl;
    cout << "Цена:" << price << endl;
}


Tiles::~Tiles()
{
    cout << "Деструктор" << endl;
}



Complex::Complex()
{
    re = 0;
    im = 0;
}

Complex::Complex(const Complex &obj)
{
    re = obj.re;
    im = obj.im;
}

void Complex::abs()
{
    float a = sqrt(re * re + im * im);
    cout << "Модуль: " << a;
}

void Complex::output()
{
    cout << "Число: (" << re << " + (" << im << ")i)" << endl;
    cout << "Целая часть: " << re << endl;
    cout << "Мнимая: " << im << endl;
}

Complex::~Complex()
{
    cout << "Деструктор" << endl;
}


Vector::Vector()
{
    x = 0;
    y = 0;
}


Vector::Vector(const Vector &obj)
{
    x = obj.x;
    y = obj.y;
}

void Vector::abs()
{
    float a = sqrt(x * x + y * y);
    cout << "Модуль вектора: " << a << endl;
}

void Vector::sum(Vector v1, Vector v2)
{
    x = v1.x + v2.x;
    y = v1.y + v2.y;
    cout << "Сумма векторов:" << endl;
    output();
}

void Vector::dif(Vector v1, Vector v2)
{
    x = v1.x - v2.x;
    y = v1.y - v2.y;
    cout << "Разность: " << endl;
    output();
}

Vector::~Vector()
{
    cout << "Деструктор" << endl;
}

void Vector::output()
{
    cout << "Координата x = " << x << endl;
    cout << "Координата y = " << y << endl;
}