#include <array>
#include <iostream>


extern const int a;
extern const int b;
extern const int c;
extern const int d;


int twenty_one(int x)
{
    return (x <= 21) ? 21 - x: ((x - 21) * 2);
}

int main()
{
    { // task 1 - 4
        std::cout << static_cast<double>(a) * (static_cast<double>(b) + static_cast<double>(c) /static_cast<double>(d));
    }

    
    {
        //task 2
        int x {};
        std::cin >> x;
        std::cout << twenty_one(x);
    }

    { // task 3
        std::array<std::array<std::array<int, 3>, 3>, 3> my_array {};
        // Инициализация массива
        for (auto& index_1: my_array)
            for (auto& index_2: index_1)
                for (auto& index_3: index_2)
                    index_3 = 1;
        // Вывод ячейки массива
        std::cout << my_array[1][1][1];
    }
    
    return 0;
}
