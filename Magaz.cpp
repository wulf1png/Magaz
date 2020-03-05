
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <string>
#include <String.h>
#include <iomanip>
#include <iostream>


using namespace std;

class Product
{
public:
    double number;
    double weight;
    double price;

    void print()
    {
        cout << number << " - ID товара" << endl << weight << " - Вес товара" << endl << price << "р.- Цена\n" << endl;
    }
    double get_number()
    {
        return number;
    }
    double get_weight()
    {
        return weight;
    }
    double get_price()
    {
        return price;
    }
    void set_number(double number)
    {
        this->number;
        if (number > 0)
            return;
    }
    void set_weight(double weight)
    {
        this->weight;
        if (weight > 0)
            return;
    }
    void set_price(double price)
    {
        this->price;
        if (price > 0)
            return;
    }
    Product()
    {
        number = 1;
        weight = 1.1;
        price = 1;
    }
    Product(double n, double w, double p)
    {
        this->number = n;
        this->weight = w;
        this->price = p;
    }
};

class Market
{
public:
    int count;
    Product P[1000];
    Market()
    {
        count = 0;
    }
    bool Add(int number, double weight, double price)
    {
        if (count >= 1000)
            return false;
        P[count].number = number;
        P[count].weight = weight;
        P[count].price = price;
        count++;
    }
    bool Del()
    {
        if (count < 0)
            return false;
        count--;
        return true;
    }
    void print()
    {
        int i = 0;
        for (i = 0; i < count; i++)
        {
            P[i].print();
        }
    }
};

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus");
    Market *market = new Market();
    char SW;
    int number;
    double weight;
    double price;
    bool MENU = true;
        cout << "\t***Меню***" << endl;
        cout << "1 - Добавить товар" << endl;
        cout << "2 - Удалить товар" << endl;
        cout << "3 - Просмотр товара" << endl;
        cout << "4 - Выход из приложения" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "\t***Инструкция***" << endl;
        cout << "Клавиша 1 - Добавить товар" << endl;
        cout << "Клавиша 2 - Удалить товар" << endl;
        cout << "Клавиша 3 - Просмотр товара" << endl;
        cout << "Клавиша 4 - Выход из приложения" << endl;
    while (MENU)
    {
        switch ((SW = _getch()))
        {
        case '1':
            system("cls");
            cout << "Добавить товар:" << endl;
            cout << "ID товара" << endl;
            cin >> number;
            cout << "Вес товара" << endl;
            cin >> weight;
            cout << "Цена товара" << endl;
            cin >> price;
            market->Add(number, weight, price);
            break;
        case '2':
            system("cls");
            market->Del();
            cout << "Товар удалён" << endl;
            break;
        case '3':
            system("cls");
            cout << "товары:" << endl;
            market->print();
            break;
        case '4':
            MENU = false;
            exit(0);
            break;
        default:
            system("cls");
            cout << "\t***Меню***" << endl;
            cout << "1 - Добавить товар" << endl;
            cout << "2 - Удалить товар" << endl;
            cout << "3 - Просмотр товара" << endl;
            cout << "4 - Выход из приложения" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "\t***Инструкция***" << endl;
            cout << "Клавиша 1 - Добавить товар" << endl;
            cout << "Клавиша 2 - Удалить товар" << endl;
            cout << "Клавиша 3 - Просмотр товара" << endl;
            cout << "Клавиша 4 - Выход из приложения" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}

/* int A, A1;                       //Меню с помощью if
 int number;
 double weight;
 double price;
 cout << "Инструкция" << endl;
 cout << "1 - Добавить товар" << endl;
 cout << "2 - Удалить товар" << endl;
 cout << "3 - Просмотр товара" << endl;
 cout << "4 - Выход из приложения" << endl;
 cout << "" << endl;
 cout << "" << endl;
 cout << "" << endl;
 cout << "Меню" << endl;
 cout << "1. Добавить товар" << endl;
 cout << "2. Удалить товар" << endl;
 cout << "3. Просмотр товаров" << endl;
 cout << "4. Выход" << endl;
 cout << "" << endl;
 cout << "" << endl;
 cout << "" << endl;
 cin >> A;
 if (A == 1)
 {
     system("cls");
     cout << "" << endl;
     cout << "" << endl;
     cout << "Добавить товар:" << endl;
     cout << "ID товара" << endl;
     cin >> number;
     cout << "Вес товара" << endl;
     cin >> weight;
     cout << "Цена товара" << endl;
     cin >> price;
     cout << "Товар добавлен, нажмите 5" << endl;
     cin >> A1;
     if (A1 == 5)
     {
         system("cls");
         cout << "" << endl;
         cout << "" << endl;
         cout << "Меню" << endl;
         cout << "1. Добавить товар" << endl;
         cout << "2. Удалить товар" << endl;
         cout << "3. Просмотр товаров" << endl;
         cout << "4. Выход" << endl;
         cout << "" << endl;
         cout << "" << endl;
         cin >> A;
     }
 }
 if (A == 2)
 {
     system("cls");
     cout << "" << endl;
     cout << "" << endl;
     market.Del();
     cout << "Товар удалён" << endl;
     cout << "Нажмите 6" << endl;
     cin >> A1;
     if (A1 == 6)
     {
         system("cls");
         cout << "Меню" << endl;
         cout << "1. Добавить товар" << endl;
         cout << "2. Удалить товар" << endl;
         cout << "3. Просмотр товаров" << endl;
         cout << "4. Выход" << endl;
         cout << "" << endl;
         cout << "" << endl;
         cin >> A;

     }
 }
 if (A == 3)
 {
     system("cls");
     cout << "" << endl;
     cout << "" << endl;
     cout << "товары:" << endl;
     market.Add(number, weight, price);
     market.print();
     cout << "Нажмите 7" << endl;
     cin >> A1;
     if (A1 == 7)
     {
         system("cls");
         cout << "Меню" << endl;
         cout << "1. Добавить товар" << endl;
         cout << "2. Удалить товар" << endl;
         cout << "3. Просмотр товаров" << endl;
         cout << "4. Выход" << endl;
         cout << "" << endl;
         cout << "" << endl;
         cin >> A;

     }
 }
 if (A == 4)
 {
     exit(0);
 }*/
 /*cout << "Dobavit' na sklad" << endl;
 cout << "ID tovara" << endl;
 cin >> number;
 cout << "Ves tovara" << endl;
 cin >> weight;
 cout << "Cena tovara" << endl;
 cin >> price;
 cout << "Dobavilos' :" << endl;*/
 //cout << "Dobavilos' :" << endl << number << " - ID tovara" << endl << weight << " - Ves tovara" << endl << price << "r.- Cena" << endl;
 /*market.Add(number, weight, price);
 market.print();*/
 /*cout << "Konstruktor po defolty" << endl;
 Product product = Product();                                                // Конструкторы
 product.print();
 cout << "Konstruktor s parametrami" << endl;
 Product product1 = Product(567834, 350.35, 7000);
 product1.print();
 Market market;
 market.Add(564366, 340, 6800);
 market.Add(564367, 400, 8000);
 market.Add(564368, 300, 6500);
 market.print();*/