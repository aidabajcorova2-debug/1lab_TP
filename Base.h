#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <fstream>
#include <string>

// Абстрактный базовый класс для сущностей ВУЗа
class Base {
public:
    Base();
    Base(const Base& other);
    virtual ~Base();

    // Чисто виртуальные методы для переопределения в наследниках
    virtual void inputFromConsole() = 0;
    virtual void printToConsole() const = 0;
    virtual void saveToFile(std::ofstream& fout) const = 0;
    virtual void loadFromFile(std::ifstream& fin) = 0;

    // Перегрузка операторов ввода и вывода
    friend std::ostream& operator<<(std::ostream& out, const Base& obj);
    friend std::istream& operator>>(std::istream& in, Base& obj);
};

#endif