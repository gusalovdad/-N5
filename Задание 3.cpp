#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    double grade;
public:
    // Конструктор по умолчанию
    Student() {
        name = "Неизвестно";
        id = 0;
        grade = 0.0;
        std::cout << "Создан студент: " << name
            << ", ID: " << id
            << ", балл: " << grade << std::endl;
    }
    void displayInfo() const {
        std::cout << "Имя: " << name
            << ", ID: " << id
            << ", Средний балл: " << grade
            << std::endl;
    }
};
int main() {
    Student student1; // первый объект
    Student student2; // второй объект
    student1.displayInfo();
    student2.displayInfo();
    return 0;
}
