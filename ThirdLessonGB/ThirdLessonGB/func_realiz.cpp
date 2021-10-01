#include <iostream>

//ДЗ 3 п.1:
float first_func()
{
    int a {};
    int b {};
    int c {};
    int d {};
    std::cin >> a >> b >> c >> d;
    return static_cast<float>(a * (b + (c /d)));
}

//ДЗ 3 п.2:
int twenty_one(int x)
{
    return (x <= 21) ? 21 - x: ((x - 21) * 2);
}

