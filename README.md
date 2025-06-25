# Student Management System in C

A simple yet powerful Student Management System built in C to manage student records. This project allows users to perform various operations such as adding, viewing, updating, and deleting student information, such as name, ID, CGPA, and more.

---

## Table of Contents
- [Project Overview](#project-overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation Instructions](#installation-instructions)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgements](#acknowledgements)

---

# Student Management System

This is a simple **Student Management System** developed in **C**. The program allows users to manage student records, including adding new students, searching for students by roll number, viewing a full list of students, and editing or deleting student information (to be implemented).

## Features Implemented:

1. **Menu-driven Interface**: 
   - The user can interact with the system through a simple menu that offers various options.
   
2. **Add Students**: 
   - The user can input student details (name, department, roll number, CGPA) and store them in both an array and a file (`student.txt`).
   
3. **Search Student**: 
   - The user can search for a student by their **roll number** and view the student's details.

4. **View Full Student List**: 
   - The user can view the complete list of all students currently stored in the system.

## Features to be Implemented:

1. **Edit Student**: 
   - A function to allow the user to edit existing student details such as name, department, roll number, or CGPA.
   
2. **Delete Student**: 
   - A function to delete a student's record by roll number and update the stored data.

## File Structure:

- **students.txt**: A file where the student data is stored. Each student is represented by a line containing their **name, department, roll number,** and **CGPA** (separated by commas).

## How to Run:

1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/Pro-Tik/student
    ```

2. Compile the C program:
    ```bash
    gcc student.c
    ```

3. Run the program:
    

## Future Enhancements:

- Implement **Edit Student** functionality.
- Implement **Delete Student** functionality.
- Implement file handling to load student data on startup (e.g., reading from `students.txt` when the program starts).

---

## Acknowledgements

- Thanks to Pratik for contributing to this project.
- Thanks to the open-source community for resources and inspiration.
