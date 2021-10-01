#include <array>
#include <iostream>
#include "ThridLesson.h"

int main()
{
    /*
    // ДЗ 3 п.1:
    std::cout << first_func();

    //ДЗ 3 п.2:
    int x {};
    std::cin >> x;
    std::cout << twenty_one(x); 
    */

    
    //ДЗ 3 п.3:
    std::array<std::array<std::array<int, 3>, 3>, 3> my_array {};
    // Инициализация массива
    for (auto& index_1: my_array)
        for (auto& index_2: index_1)
            for (auto& index_3: index_2)
                index_3 = 1;
    // Вывод ячейки массива
    std::cout << my_array[1][1][1];
    
    return 0;
}
