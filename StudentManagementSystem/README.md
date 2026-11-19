# Student Management System (C++)

A beginner-friendly, menu-driven C++ project for managing student records.

## Features
- Add a student (roll number, name, marks)
- Display all students
- Search by roll number
- Update a student's name and marks
- Delete a student
- Prevent duplicate roll numbers

## Requirements
- A C++ compiler (such as g++)
- Any code editor (VS Code, Code::Blocks, etc.)

## How to run

### Windows (with MinGW g++)
Open a terminal in this folder and run:

```bash
g++ main.cpp -o student_management
student_management.exe
```

### Linux / macOS
```bash
g++ main.cpp -o student_management
./student_management
```

## How to explain the project
1. `Student` is a structure that stores a roll number, name, and marks.
2. `vector<Student>` stores student records while the program is running.
3. Each menu option calls a separate function.
4. Search, update, and delete use the roll number to find a record.
5. A `do-while` loop keeps showing the menu until the user chooses Exit.

**Note:** Records are stored in memory only. They are cleared when the program closes.
