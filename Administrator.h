#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "Base.h"

class Administrator : public Base {
private:
    std::string fullName;
    std::string position;
    std::string phone;
    std::string responsibilityArea;

public:
    Administrator();
    Administrator(const std::string& name, const std::string& pos, const std::string& ph, const std::string& area);
    Administrator(const Administrator& other);
    ~Administrator() override;

    // Геттеры и сеттеры
    std::string getFullName() const;
    std::string getPosition() const;
    std::string getPhone() const;
    std::string getResponsibilityArea() const;

    void setFullName(const std::string& name);
    void setPosition(const std::string& pos);
    void setPhone(const std::string& ph);
    void setResponsibilityArea(const std::string& area);

    // Переопределение виртуальных методов
    void inputFromConsole() override;
    void printToConsole() const override;
    void saveToFile(std::ofstream& fout) const override;
    void loadFromFile(std::ifstream& fin) override;
};

#endif