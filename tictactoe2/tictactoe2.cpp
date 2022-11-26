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
    bool xoder = false;
    short tern = 0;
    char symbol;

    int mode = 0;
    cout << "1 - игра на двоих\n2 - игра с ботом\n";
    cout << "Введите режим работы игры: ";
    cin >> mode;
    cout << endl;

    if (mode == 1) {

        // подготовка поля перед игрой
        system("cls||clear");
        cout << "ИГРА В КРЕСТИКИ НОЛИКИ" << endl;
        cout << "У Вас выбран режим: два игрока" << endl;
        cout << "Приятной игры:)" << endl;
        cout << "================================" << endl << endl;



        // вывод поля
        cout << "  " << "A" << " " << "B" << " " << "C" << endl;
        cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
        cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
        cout << "3 " << a3 << " " << b3 << " " << c3 << endl;





        while (true) {
            // получение хода X

            string xodx;
            if (tern % 2 == 0) {
                symbol = 'X';
            }
            else {
                symbol = 'O';
            }
            cout << "Введите выбор " << symbol << " в формате * b2 * : ";
            cin >> xodx;
            cout << endl;
            cout << xodx;


            // поставить ход X

            if (xodx == "a1") {
                if (a1 == '.') {
                    a1 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "b1") {
                if (b1 == '.') {
                    b1 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "c1") {
                if (c1 == '.') {
                    c1 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "a2") {
                if (a2 == '.') {
                    a2 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "b2") {
                if (b2 == '.') {
                    b2 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "c2") {
                if (c2 == '.') {
                    c2 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "a3") {
                if (a3 == '.') {
                    a3 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "b3") {
                if (b3 == '.') {
                    b3 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else if (xodx == "c3") {
                if (c3 == '.') {
                    c3 = symbol;
                    tern++;
                }
                else {
                    cout << "Ход не поставлен, так как место занято" << endl;
                }
            }
            else {
                cout << "Ход не поставлен, так как такого координата не сущевствует" << endl;
            }
            system("cls||clear");
            cout << "ИГРА В КРЕСТИКИ НОЛИКИ" << endl;
            cout << "У Вас выбран режим: два игрока" << endl;
            cout << "Приятной игры:)" << endl;
            cout << "================================" << endl << endl;
            cout << "  " << "A" << " " << "B" << " " << "C" << endl;
            cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
            cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
            cout << "3 " << a3 << " " << b3 << " " << c3 << endl;


            if ((a1 == b2 && b2 == c3) && (a1 != '.' && b2 != '.' && c3 != '.')) {
                if (a1 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((c1 == b2 && b2 == a3) && (a3 != '.' && b2 != '.' && c1 != '.')) {
                if (c1 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((a1 == a2 && a2 == a3) && (a3 != '.' && a2 != '.' && a3 != '.')) {
                if (a1 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((b1 == b2 && b2 == b3) && (b3 != '.' && b2 != '.' && b1 != '.')) {
                if (b1 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((c1 == c2 && c2 == c3) && (c3 != '.' && c2 != '.' && c1 != '.')) {
                if (c1 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((a1 == b1 && b1 == c1) && (a1 != '.' && b1 != '.' && c1 != '.')) {
                if (c1 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((a2 == b2 && b2 == c2) && (a2 != '.' && b2 != '.' && c2 != '.')) {
                if (c2 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if ((a3 == b3 && b3 == c3) && (a3 != '.' && b3 != '.' && c3 != '.')) {
                if (c3 == 'X') {
                    cout << "X выиграл" << endl;
                }
                else {
                    cout << "O выиграл" << endl;
                }
                break;
            }
            else if (tern == 9) {
                cout << "Никто не выиграл. Ничья" << endl;
                break;
            }
            /*
            if (a1 == 'X' && b2 == 'X' && c3 == 'X') {
                rex = true;
            }
            else if (c1 == 'X' && b2 == 'X' && a3 == 'X') {
                rex = true;
            }
            else if (a1 == 'X' && b1 == 'X' && c1 == 'X') {
                rex = true;
            }
            else if (a2 == 'X' && b2 == 'X' && c2 == 'X') {
                rex = true;
            }
            else if (a3 == 'X' && b3 == 'X' && c3 == 'X') {
                rex = true;
            }

            else if (a1 == 'X' && a2 == 'X' && a3 == 'X') {
                rex = true;
            }
            else if (b1 == 'X' && b2 == 'X' && b3 == 'X') {
                rex = true;
            }
            else if (c1 == 'X' && c2 == 'X' && c3 == 'X') {
                rex = true;
            }



            if (a1 == 'O' and b2 == 'O' and c3 == 'O') {
                rex = true;
            }
            else if (c1 == 'O' and b2 == 'O' and a3 == 'O') {
                rex = true;
            }
            else if (a1 == 'O' and b1 == 'O' and c1 == 'O') {
                rex = true;
            }
            else if (a2 == 'O' and b2 == 'O' and c2 == 'O') {
                rex = true;
            }
            else if (a3 == 'O' and b3 == 'O' and c3 == 'O') {
                rex = true;
            }

            else if (a1 == 'O' and a2 == 'O' and a3 == 'O') {
                rex = true;
            }
            else if (b1 == 'O' and b2 == 'O' and b3 == 'O') {
                rex = true;
            }
            else if (c1 == 'O' and c2 == 'O' and c3 == 'O') {
                rex = true;
            }
            */

        }
    }
 else if (mode == 2) {
     // подготовка поля перед игрой
     system("cls||clear");
     cout << "ИГРА В КРЕСТИКИ НОЛИКИ" << endl;
     cout << "У Вас выбран режим: игра с ботом" << endl;
     cout << "Вы - Х, бот - О" << endl;
     cout << "Приятной игры:)" << endl;
     cout << "================================" << endl << endl;



     // вывод поля
     cout << "  " << "A" << " " << "B" << " " << "C" << endl;
     cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
     cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
     cout << "3 " << a3 << " " << b3 << " " << c3 << endl;





     while (true) {
         // получение хода X

         string xodx;
         if (tern % 2 == 0) {
             symbol = 'X';
             cout << "Введите выбор " << symbol << " в формате * b2 * : ";
             cin >> xodx;
             cout << endl;
             cout << xodx;

             // поставить ход X

             if (xodx == "a1") {
                 if (a1 == '.') {
                     a1 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "b1") {
                 if (b1 == '.') {
                     b1 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "c1") {
                 if (c1 == '.') {
                     c1 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "a2") {
                 if (a2 == '.') {
                     a2 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "b2") {
                 if (b2 == '.') {
                     b2 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "c2") {
                 if (c2 == '.') {
                     c2 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "a3") {
                 if (a3 == '.') {
                     a3 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "b3") {
                 if (b3 == '.') {
                     b3 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else if (xodx == "c3") {
                 if (c3 == '.') {
                     c3 = symbol;
                     tern++;
                 }
                 else {
                     cout << "Ход не поставлен, так как место занято" << endl;
                 }
             }
             else {
                 cout << "Ход не поставлен, так как такого координата не сущевствует" << endl;
             }
         }
         else {
             symbol = 'O';
             int xodo;
             bool reb = false;
             while (reb == false) {
                 xodo = 1 + rand() % (9 - 1 + 1);
                 if (xodo == 1) {
                     if (a1 != 'O' && a1 != 'X') {
                         a1 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 2) {
                     if (a2 != 'O' && a2 != 'X') {
                         a2 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 3) {
                     if (a3 != 'O' && a3 != 'X') {
                         a3 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 4) {
                     if (b1 != 'O' && b1 != 'X') {
                         b1 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 5) {
                     if (b2 != 'O' && b2 != 'X') {
                         b2 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 6) {
                     if (b3 != 'O' && b3 != 'X') {
                         b3 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 7) {
                     if (c1 != 'O' && c1 != 'X') {
                         c1 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 8) {
                     if (c2 != 'O' && c2 != 'X') {
                         c2 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 if (xodo == 9) {
                     if (c3 != 'O' && c3 != 'X') {
                         c3 = symbol;
                         reb = true;
                         tern++;
                     }
                 }
                 
             }
         }
        
        


       
         system("cls||clear");
         cout << "ИГРА В КРЕСТИКИ НОЛИКИ" << endl;
         cout << "У Вас выбран режим: игра с ботом" << endl;
         cout << "Вы - Х, бот - О" << endl;
         cout << "Приятной игры:)" << endl;
         cout << "================================" << endl << endl;
         cout << "  " << "A" << " " << "B" << " " << "C" << endl;
         cout << "1 " << a1 << " " << b1 << " " << c1 << endl;
         cout << "2 " << a2 << " " << b2 << " " << c2 << endl;
         cout << "3 " << a3 << " " << b3 << " " << c3 << endl;


         if ((a1 == b2 && b2 == c3) && (a1 != '.' && b2 != '.' && c3 != '.')) {
             if (a1 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((c1 == b2 && b2 == a3) && (a3 != '.' && b2 != '.' && c1 != '.')) {
             if (c1 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((a1 == a2 && a2 == a3) && (a3 != '.' && a2 != '.' && a3 != '.')) {
             if (a1 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((b1 == b2 && b2 == b3) && (b3 != '.' && b2 != '.' && b1 != '.')) {
             if (b1 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((c1 == c2 && c2 == c3) && (c3 != '.' && c2 != '.' && c1 != '.')) {
             if (c1 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((a1 == b1 && b1 == c1) && (a1 != '.' && b1 != '.' && c1 != '.')) {
             if (c1 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((a2 == b2 && b2 == c2) && (a2 != '.' && b2 != '.' && c2 != '.')) {
             if (c2 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if ((a3 == b3 && b3 == c3) && (a3 != '.' && b3 != '.' && c3 != '.')) {
             if (c3 == 'X') {
                 cout << "X выиграл" << endl;
                 system("pause");
             }
             else {
                 cout << "O выиграл" << endl;
                 system("pause");
             }
             break;
         }
         else if (tern == 9) {
             cout << "Никто не выиграл. Ничья" << endl;
             system("pause");
             break;
         }
     }
    }
 else {
     cout << "Вы ввели неправильный режим работы программы. программа завершила свою работу" << endl;
     system("pause");
    }
}

