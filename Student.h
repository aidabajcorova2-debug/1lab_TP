#ifndef STUDENT_H
#define STUDENT_H

#include "Base.h"

class Student : public Base {
private:
    std::string fullName;
    std::string group;
    std::string specialty;
    int course;
    double averageScore;

public:
    Student();
    Student(const std::string& name, const std::string& grp, const std::string& spec, int crs, double score);
    Student(const Student& other);
    ~Student() override;

    // Геттеры
    std::string getFullName() const;
    std::string getGroup() const;
    std::string getSpecialty() const;
    int getCourse() const;
    double getAverageScore() const;

    // Сеттеры
    void setFullName(const std::string& name);
    void setGroup(const std::string& grp);
    void setSpecialty(const std::string& spec);
    void setCourse(int crs);
    void setAverageScore(double score);

    // Переопределение виртуальных методов
    void inputFromConsole() override;
    void printToConsole() const override;
    void saveToFile(std::ofstream& fout) const override;
    void loadFromFile(std::ifstream& fin) override;
};

#endif