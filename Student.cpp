#include "Student.h"

Student::Student() : Base(), course(1), averageScore(0.0) {
    std::cout << "Вызван конструктор по умолчанию Student\n";
}

Student::Student(const std::string& name, const std::string& grp, const std::string& spec, int crs, double score)
    : Base(), fullName(name), group(grp), specialty(spec), course(crs), averageScore(score) {
    std::cout << "Вызван конструктор с параметрами Student\n";
}

Student::Student(const Student& other)
    : Base(other), fullName(other.fullName), group(other.group), specialty(other.specialty), course(other.course), averageScore(other.averageScore) {
    std::cout << "Вызван конструктор копирования Student\n";
}

Student::~Student() {
    std::cout << "Вызван деструктор Student\n";
}

std::string Student::getFullName() const { return fullName; }
std::string Student::getGroup() const { return group; }
std::string Student::getSpecialty() const { return specialty; }
int Student::getCourse() const { return course; }
double Student::getAverageScore() const { return averageScore; }

void Student::setFullName(const std::string& name) { fullName = name; }
void Student::setGroup(const std::string& grp) { group = grp; }
void Student::setSpecialty(const std::string& spec) { specialty = spec; }
void Student::setCourse(int crs) { course = crs; }
void Student::setAverageScore(double score) { averageScore = score; }

void Student::inputFromConsole() {
    std::cout << "Введите ФИО студента: ";
    std::cin.ignore();
    std::getline(std::cin, fullName);
    std::cout << "Введите группу: ";
    std::getline(std::cin, group);
    std::cout << "Введите специальность: ";
    std::getline(std::cin, specialty);
    std::cout << "Введите курс: ";
    std::cin >> course;
    std::cout << "Введите средний балл: ";
    std::cin >> averageScore;
}

void Student::printToConsole() const {
    std::cout << "[Студент] ФИО: " << fullName 
              << ", Группа: " << group 
              << ", Специальность: " << specialty 
              << ", Курс: " << course 
              << ", Средний балл: " << averageScore << "\n";
}

void Student::saveToFile(std::ofstream& fout) const {
    fout << "Student\n"
         << fullName << "\n"
         << group << "\n"
         << specialty << "\n"
         << course << "\n"
         << averageScore << "\n";
}

void Student::loadFromFile(std::ifstream& fin) {
    fin.ignore();
    std::getline(fin, fullName);
    std::getline(fin, group);
    std::getline(fin, specialty);
    fin >> course;
    fin >> averageScore;
}