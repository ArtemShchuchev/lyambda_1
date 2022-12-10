#include <iostream> // консоль - cout
#include <vector>
#include <algorithm>    // std::for_each

void print(const std::vector<int>& v, const std::string& str)
{
    std::cout << str << " данные: ";
    for (const auto& val : v) std::cout << val << " ";
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    system("chcp 1251");            // настраиваем кодировку консоли
    std::system("cls");

    std::cout   << "Задача 1. Лямбда-функция\n"
                << "------------------------\n" << std::endl;

    std::vector<int> vect{4, 7, 9, 14, 12};

    print(vect, "Входные");

    // без чтения подсказки, а потом вопросов к Гугл, решить это не возможно
    // т.к. только из подсказки и узнал о существовании функции std::for_each,
    // а как с ней работать из поиска в сети ((
    std::for_each( std::begin(vect), std::end(vect),
        [](int & value) { if (value % 2) value *= 3; } );

    print(vect, "Выходные");

    return 0;
}