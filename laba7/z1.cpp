#include <iostream>
#include <vector>
#include <list>

int main() {
    setlocale(LC_ALL, "RU");
    // Создать вектор и список с одним миллионом элементов
    std::vector<int> vec(1000000);
    std::list<int> lst(1000000);

    // Распечатать размер вектора и списка в байтах
    std::cout << "Размер вектора: " << sizeof(std::vector<int>) + (sizeof(int) * vec.capacity()) << " байт" << std::endl;
    std::cout << "Размер списка: " << sizeof(std::list<int>) + (sizeof(int) + 2 * sizeof(void*)) * lst.size() << " байт" << std::endl;

    return 0;
}
