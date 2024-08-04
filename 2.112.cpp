// 2.112.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(0, "ru");
    bool A = true;
    bool B = false;
    bool C = false;
    std::cout << "Логическое значения переменных: А = истина; В, С = ложь " << std::endl;
    bool k = A || B;
    std::cout << "Логическое значение выражения А или В: " << k << std::endl;
    bool z = A && B;
    std::cout << "Логическое значение выражения А и В: " << z << std::endl;
    bool s = B || C;
    std::cout << "Логическое значение выражения В или С: " << s << std::endl;
    bool c = not A && B;
    std::cout << "Логическое значение выражения не А и В: " << c << std::endl;
    bool f = A || not B;
    std::cout << "Логическое значение выражения А или не В: " << f << std::endl;
    bool d = A || B && !C;
    std::cout << "Логическое значение выражения А или В и не С: " << d << std::endl;
    bool n = A && !B || C;
    std::cout << "Логическое значение выражения А или не В: " << n << std::endl;
}
