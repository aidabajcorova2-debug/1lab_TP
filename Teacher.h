#ifndef TEACHER_H
#define TEACHER_H

#include "Base.h"

class Teacher : public Base {
private:
    std::string fullName;
    std::string groupsList;   // Перечисленные группы, которые ведет
    std::string subjectsList; // Предметы, которые преподает

public:
    Teacher();
    Teacher(const std::string& name, const std::string& groups, const std::string& subjects);
    Teacher(const Teacher& other);
    ~Teacher() override;

    // Геттеры и сеттеры
    std::string getFullName() const;
    std::string getGroupsList() const;
    std::string getSubjectsList() const;

    void setFullName(const std::string& name);
    void setGroupsList(const std::string& groups);
    void setSubjectsList(const std::string& subjects);

    // Переопределение виртуальных методов
    void inputFromConsole() override;
    void printToConsole() const override;
    void saveToFile(std::ofstream& fout) const override;
    void loadFromFile(std::ifstream& fin) override;
};

#endif