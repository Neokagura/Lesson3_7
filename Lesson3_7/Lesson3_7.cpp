﻿
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int weekDay;

    std::cout << "Какой сегодня день недели? ";
    std::cin >> weekDay;
    std::cout << "===============Меню дня!===============\n";
    if (weekDay == 1)
    {
        std::cout << "Понедельник.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо понедельникам!";
    }
    else if (weekDay == 2)
    {
        std::cout << "Вторник.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо вторникам!";
    }
    else if (weekDay == 3)
    {
        std::cout << "Среда.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо средам!";
    }
    else if (weekDay == 4)
    {
        std::cout << "Четверг.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо четвергам!";
    }
    else if (weekDay == 5)
    {
        std::cout << "Пятница.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо пятницам!";
    }
    else if (weekDay == 6)
    {
        std::cout << "Суббота.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо субботам!";
    }
    else
    {
        std::cout << "Воскресение.\n";
        std::cout << "=======================================\n";
        std::cout << "Выведем здесь список блюд, подаваемых \nпо воскресениям!";
    }
    std::cout << "\nА здесь выведем постоянную часть меню \n(напитки на выбор или еще чего нибудь.\n";

    std::cout << "=======================================\n";
}

