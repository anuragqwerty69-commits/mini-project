#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNumber;

    // Check if this roll number already exists
    for (const Student& student : students) {
        if (student.rollNumber == s.rollNumber) {
            cout << "A student with this roll number already exists.\n";
            return;
        }
    }

    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter marks: ";
    cin >> s.marks;

    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students found.\n";
        return;
    }

    cout << "\n--- Student List ---\n";
    for (const Student& s : students) {
        cout << "Roll Number: " << s.rollNumber
             << "\nName: " << s.name
             << "\nMarks: " << s.marks << "\n\n";
    }
}

void searchStudent() {
    int roll;
    cout << "Enter roll number to search: ";
    cin >> roll;

    for (const Student& s : students) {
        if (s.rollNumber == roll) {
            cout << "\nStudent found!\n";
            cout << "Roll Number: " << s.rollNumber
                 << "\nName: " << s.name
                 << "\nMarks: " << s.marks << "\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

void updateStudent() {
    int roll;
    cout << "Enter roll number to update: ";
    cin >> roll;

    for (Student& s : students) {
        if (s.rollNumber == roll) {
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, s.name);

            cout << "Enter new marks: ";
            cin >> s.marks;

            cout << "Student updated successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter roll number to delete: ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].rollNumber == roll) {
            students.erase(students.begin() + i);
            cout << "Student deleted successfully!\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}
