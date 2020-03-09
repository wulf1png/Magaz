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
private:
    double number;
    double weight;
    double price;
public:
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
        if ( number >= 0)
            this->number = number;
    }
    void set_weight(double weight)
    {
        if (weight >= 0)
            this->weight = weight;
    }
    void set_price(double price)
    {
        if (price >= 0)
            this->price = price;
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
    bool Add(double number, double weight, double price)
    {
        if (count <= 1000)
        {
            P[count].set_number(number);
            P[count].set_weight(weight);
            P[count].set_price(price);
            count++;
            return true;
        }
        return false;
    }
    bool Del()
    {
        if (count > 0)
        {
            count--;
            return true;
        }
        return false;
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
            if (market->Del() == true)
            {
                cout << "Товар удалён" << endl;
            }
            else
            {
                cout << "Ошибка, нечего удалять" << endl;
            }
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