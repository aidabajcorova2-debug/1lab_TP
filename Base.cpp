#include "Base.h"

// Конструктор по умолчанию с трассировкой
Base::Base() {
    std::cout << "Вызван конструктор по умолчанию Base\n";
}

// Конструктор копирования
Base::Base(const Base& other) {
    std::cout << "Вызван конструктор копирования Base\n";
}

// Виртуальный деструктор
Base::~Base() {
    std::cout << "Вызван деструктор Base\n";
}

// Перегрузка оператора вывода в поток
std::ostream& operator<<(std::ostream& out, const Base& obj) {
    obj.printToConsole();
    return out;
}

// Перегрузка оператора ввода из потока
std::istream& operator>>(std::istream& in, Base& obj) {
    obj.inputFromConsole();
    return in;
}