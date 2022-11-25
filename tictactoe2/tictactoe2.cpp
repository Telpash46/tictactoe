// tictactoe2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    //создание поля

    char a1, a2, a3, b1, b2, b3, c1, c2, c3;
    a1 = '.';
    a2 = '.';
    a3 = '.';
    b1 = '.';
    b2 = '.';
    b3 = '.';
    c1 = '.';
    c2 = '.';
    c3 = '.';



    // вывод поля
    cout << "  " << "A" << " " << "B" << " " <<  "C" << endl;
    cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
    cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
    cout << "3 " << a3 << " " << b3 << " " << c3 << endl;



    // выбор хода X

    string xodx;
    cout << "Введите выбор X в формате *b2*: ";
    cin >> xodx;
    cout << endl;
    cout << xodx;


    
}

