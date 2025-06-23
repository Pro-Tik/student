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

## Project Overview

The Student Management System is a command-line application developed in C. It aims to help manage student information for educational purposes. The system allows the user to:

- Add new student records
- View all student records
- Search for a student by ID
- Update student information
- Delete student records
- Calculate the total number of students in the system

The system uses basic file handling to store student data persistently.

---

## Features

- **Add Student**: Add new students' details like ID, name, and CGPA.
- **View All Students**: Display all students' records in a tabular format.
- **Search Student by ID**: Search for a student by their ID and view the corresponding record.
- **Update Student Information**: Modify student details such as name or CGPA.
- **Delete Student**: Remove a student’s record from the system.
- **Exit the Program**: Exit the program gracefully.

---

## Technologies Used

- **C Programming Language**: For developing the core logic.
- **File Handling**: To store and manage student data persistently.
- **Data Structures**: Using arrays or linked lists for data organization.
- **Standard Libraries**: `stdio.h`, `stdlib.h`, `string.h`

---

## Installation Instructions

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/student-management-system.git
   ```

2. **Navigate to the project directory**:
   ```bash
   cd student-management-system
   ```

3. **Compile the project**:
   - If you're using GCC, run:
     ```bash
     gcc main.c -o student_system
     ```

4. **Run the project**:
   - After compiling, run the executable:
     ```bash
     ./student_system
     ```

---

## Usage

Once you run the program, the following options will be presented:

1. **Add Student**: Enter the student's ID, name, and CGPA.
2. **View All Students**: See all the student records stored in the system.
3. **Search for Student**: Search for a specific student by their ID.
4. **Update Student**: Update the student’s details such as name or CGPA.
5. **Delete Student**: Remove a student’s record from the system.
6. **Exit**: Exit the program.

---

## Code Structure

```plaintext
student-management-system/
│
├── main.c                # Main file where execution starts
├── student.h             # Header file with structure definition and function declarations
├── student.c             # Implementation file with functions like add, update, delete, etc.
├── Makefile              # Makefile for easy compilation (if applicable)
└── README.md             # This file
```

### Explanation of Core Files:
- **main.c**: Contains the main logic for interacting with the user and executing the chosen options.
- **student.h**: Header file that contains the `Student` structure and function prototypes.
- **student.c**: Contains the implementation of functions like adding, updating, and deleting students.

---

## Contributing

We welcome contributions to improve the Student Management System. You can contribute in the following ways:

1. **Report Bugs**: If you find any bugs or issues, please open an issue on GitHub.
2. **Submit Pull Requests**: If you'd like to contribute code, fork the repository, make your changes, and submit a pull request.
3. **Improvement Ideas**: Suggest features, improvements, or new modules that could be added to the project.

---

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Acknowledgements

- Thanks to Pratik for contributing to this project.
- Thanks to the open-source community for resources and inspiration.
