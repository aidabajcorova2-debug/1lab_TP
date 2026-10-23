#include "Teacher.h"

Teacher::Teacher() : Base() {
    std::cout << "Вызван конструктор по умолчанию Teacher\n";
}

Teacher::Teacher(const std::string& name, const std::string& groups, const std::string& subjects)
    : Base(), fullName(name), groupsList(groups), subjectsList(subjects) {
    std::cout << "Вызван конструктор с параметрами Teacher\n";
}

Teacher::Teacher(const Teacher& other)
    : Base(other), fullName(other.fullName), groupsList(other.groupsList), subjectsList(other.subjectsList) {
    std::cout << "Вызван конструктор копирования Teacher\n";
}

Teacher::~Teacher() {
    std::cout << "Вызван деструктор Teacher\n";
}

std::string Teacher::getFullName() const { return fullName; }
std::string Teacher::getGroupsList() const { return groupsList; }
std::string Teacher::getSubjectsList() const { return subjectsList; }

void Teacher::setFullName(const std::string& name) { fullName = name; }
void Teacher::setGroupsList(const std::string& groups) { groupsList = groups; }
void Teacher::setSubjectsList(const std::string& subjects) { subjectsList = subjects; }

void Teacher::inputFromConsole() {
    std::cout << "Введите ФИО преподавателя: ";
    std::cin.ignore();
    std::getline(std::cin, fullName);
    std::cout << "Введите группы, которые ведет: ";
    std::getline(std::cin, groupsList);
    std::cout << "Введите предметы, которые преподает: ";
    std::getline(std::cin, subjectsList);
}

void Teacher::printToConsole() const {
    std::cout << "[Преподаватель] ФИО: " << fullName 
              << ", Группы: " << groupsList 
              << ", Предметы: " << subjectsList << "\n";
}

void Teacher::saveToFile(std::ofstream& fout) const {
    fout << "Teacher\n"
         << fullName << "\n"
         << groupsList << "\n"
         << subjectsList << "\n";
}

void Teacher::loadFromFile(std::ifstream& fin) {
    fin.ignore();
    std::getline(fin, fullName);
    std::getline(fin, groupsList);
    std::getline(fin, subjectsList);
}