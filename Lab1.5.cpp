#include <iostream>
#include <list>

// Функция для вставки числа 1.5 после каждого элемента с отрицательным значением
void insert1_5(std::list<double>& lst) {
    auto it = lst.begin();
    while (it != lst.end()) {
        if (*it < 0) {
            ++it;  // Переходим к следующему элементу
            lst.insert(it, 1.5);  // Вставляем 1.5 после текущего элемента
        }
        else {
            ++it;  // Переходим к следующему элементу
        }
    }
}

// Функция для вывода содержимого списка
void printList(const std::list<double>& lst) {
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::list<double> myList = { 1.2, -3.4, 5.6, -7.8, 9.0 };

    // Вставляем число 1.5 после каждого элемента с отрицательным значением
    insert1_5(myList);

    // Выводим содержимое списка
    std::cout << "Список после вставки числа 1.5:" << std::endl;
    printList(myList);

    return 0;
}