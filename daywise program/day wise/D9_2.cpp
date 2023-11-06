#include <iostream>
#include <string>

class Student {
private:
    int rollNumber;
    std::string name;
    double marks[3];
    double total;
    double percentage;
    char grade;

public:
    void readData() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;

        std::cout << "Enter Name: ";
        std::cin.ignore(); // Clear the input buffer
        std::getline(std::cin, name);

        std::cout << "Enter Marks for 3 Subjects:\n";
        for (int i = 0; i < 3; i++) {
            std::cout << "Subject " << (i + 1) << ": ";
            std::cin >> marks[i];
        }
    }

    void findTotal() {
        total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        percentage = (total / 300) * 100;
    }

    void calculateGrade() {
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else if (percentage >= 40) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

    void printData() {
        std::cout << "\nStudent Details:\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << "\n";
        std::cout << "Total Marks: " << total << "\n";
        std::cout << "Percentage: " << percentage << "%\n";
        std::cout << "Grade: " << grade << "\n";
    }
};

int main() {
    Student student; // Create a single object of the Student class

    student.readData(); // Input student data
    student.findTotal(); // Calculate total marks and percentage
    student.calculateGrade(); // Calculate the grade
    student.printData(); // Display student details

    return 0;
}
