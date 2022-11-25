// tictactoe2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    // русский язык

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
    bool rex = false;


    // вывод поля
    cout << "  " << "A" << " " << "B" << " " <<  "C" << endl;
    cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
    cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
    cout << "3 " << a3 << " " << b3 << " " << c3 << endl;





    while (rex!=true) {
        // получение хода X

        string xodx;
        cout << "Введите выбор X в формате *b2*: ";
        cin >> xodx;
        cout << endl;
        cout << xodx;


        // поставить ход X

        if (xodx == "a1") {
            if (a1 == '.') {
                a1 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "b1") {
            if (b1 == '.') {
                b1 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "c1") {
            if (c1 == '.') {
                c1 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "a2") {
            if (a2 == '.') {
                a2 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "b2") {
            if (b2 == '.') {
                b2 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "c2") {
            if (c2 == '.') {
                c2 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "a3") {
            if (a3 == '.') {
                a3 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "b3") {
            if (b3 == '.') {
                b3 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else if (xodx == "c3") {
            if (c3 == '.') {
                c3 = 'X';
            }
            else {
                cout << "Ход не поставлен, так как место занято" << endl;
            }
        }
        else {
            cout << "Ход не поставлен, так как такого координата не сущевствует" << endl;
        }
        system("cls||clear");
        cout << "  " << "A" << " " << "B" << " " << "C" << endl;
        cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
        cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
        cout << "3 " << a3 << " " << b3 << " " << c3 << endl;
        if (a1 == 'X' and b2 == 'X' and c3 == 'X') {
            rex = true;
        }
        else if (c1 == 'X' and b2 == 'X' and a3 == 'X') {
            rex = true;
        }
    }
}

