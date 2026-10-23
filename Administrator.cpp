#include "Administrator.h"

Administrator::Administrator() : Base() {
    std::cout << "Вызван конструктор по умолчанию Administrator\n";
}

Administrator::Administrator(const std::string& name, const std::string& pos, const std::string& ph, const std::string& area)
    : Base(), fullName(name), position(pos), phone(ph), responsibilityArea(area) {
    std::cout << "Вызван конструктор с параметрами Administrator\n";
}

Administrator::Administrator(const Administrator& other)
    : Base(other), fullName(other.fullName), position(other.position), phone(other.phone), responsibilityArea(other.responsibilityArea) {
    std::cout << "Вызван конструктор копирования Administrator\n";
}

Administrator::~Administrator() {
    std::cout << "Вызван деструктор Administrator\n";
}

std::string Administrator::getFullName() const { return fullName; }
std::string Administrator::getPosition() const { return position; }
std::string Administrator::getPhone() const { return phone; }
std::string Administrator::getResponsibilityArea() const { return responsibilityArea; }

void Administrator::setFullName(const std::string& name) { fullName = name; }
void Administrator::setPosition(const std::string& pos) { position = pos; }
void Administrator::setPhone(const std::string& ph) { phone = ph; }
void Administrator::setResponsibilityArea(const std::string& area) { responsibilityArea = area; }

void Administrator::inputFromConsole() {
    std::cout << "Введите ФИО административного сотрудника: ";
    std::cin.ignore();
    std::getline(std::cin, fullName);
    std::cout << "Введите должность: ";
    std::getline(std::cin, position);
    std::cout << "Введите телефон: ";
    std::getline(std::cin, phone);
    std::cout << "Введите область ответственности: ";
    std::getline(std::cin, responsibilityArea);
}

void Administrator::printToConsole() const {
    std::cout << "[Администратор] ФИО: " << fullName 
              << ", Должность: " << position 
              << ", Телефон: " << phone 
              << ", Область ответственности: " << responsibilityArea << "\n";
}

void Administrator::saveToFile(std::ofstream& fout) const {
    fout << "Administrator\n"
         << fullName << "\n"
         << position << "\n"
         << phone << "\n"
         << responsibilityArea << "\n";
}

void Administrator::loadFromFile(std::ifstream& fin) {
    fin.ignore();
    std::getline(fin, fullName);
    std::getline(fin, position);
    std::getline(fin, phone);
    std::getline(fin, responsibilityArea);
}