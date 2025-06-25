#include<stdio.h>
#include<string.h>


struct student {
    char name[100];
    int rollno;
    char dept[100];
    float cgpa;
};

void menu() {
    printf("Please input the number of what you want to do:\n");
    printf("1. Add student \n");
    printf("2. Edit Student \n");
    printf("3. Delete Student \n");
    printf("4. Search Student \n");
    printf("5. See the full student list \n");
    printf("6. Exit \n");
}

struct student s[100];
int studentcount = 0;
int rolltosearch;
void addtofile(struct student s) {
    FILE *file = fopen("student.txt", "a+");
    if (file == NULL) {
        printf("Error Opening File\n");
        return;
    }

    // Write the student details to the file
    fprintf(file, "%s,%s,%d,%.2f\n", s.name, s.dept, s.rollno, s.cgpa);
    fclose(file);
    printf("Successfully added student to file!\n");
}

int add() {
    int numst;
    
    printf("Please input the number of students: \n");
    scanf("%d", &numst);
    getchar(); // To clear the newline character from input buffer

    // Input student details and add them to array
    for (int i = 0; i < numst; i++) {
        printf("\nEnter the details of student %d:\n", studentcount + 1);

        printf("Name: ");
        fgets(s[studentcount].name, 100, stdin);
        s[studentcount].name[strcspn(s[studentcount].name, "\n")] = 0; // Remove newline character

        printf("Department: ");
        fgets(s[studentcount].dept, 100, stdin);
        s[studentcount].dept[strcspn(s[studentcount].dept, "\n")] = 0; // Remove newline character

        printf("Roll number: ");
        scanf("%d", &s[studentcount].rollno);
        getchar(); // Clear the newline character

        printf("CGPA: ");
        scanf("%f", &s[studentcount].cgpa);
        getchar(); // Clear the newline character
        
        // Save student data to file
        addtofile(s[studentcount]);
        studentcount++; // Increment the student count
    }
    
    // Display all added students
    for (int i = 0; i < studentcount; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].dept);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("CGPA: %.2f\n", s[i].cgpa);
    }
    return 0;
}

int search() {
    printf("Please input the roll number of the student to search: \n");
    scanf("%d", &rolltosearch);
    int found = 0;

    // Search for the student by roll number
    for (int i = 0; i < studentcount; i++) {
        if (s[i].rollno == rolltosearch) {
            found = 1;
            printf("\nStudent Found!\n");
            printf("Name: %s\n", s[i].name);
            printf("Department: %s\n", s[i].dept);
            printf("Roll Number: %d\n", s[i].rollno);
            printf("CGPA: %.2f\n", s[i].cgpa);
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
    return 0;
}

int full() {
    if (studentcount == 0) {
        printf("No students available.\n");
        return 0;
    }

    printf("\n--- Full Student List ---\n");
    // Display all students
    for (int i = 0; i < studentcount; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].dept);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("CGPA: %.2f\n", s[i].cgpa);
    }
    return 0;
}



int main() {
    int choice;
    do {
        menu();
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("You selected to add student\n");
                add();
                break;
            case 2:
                printf("You selected to edit student info!\n");
                break;
            case 3:
                printf("You selected to delete student!\n");
                break;
            case 4:
                printf("You selected search student\n");
                search();
                break;
            case 5:
                printf("You selected to see the full student list\n");
                full();
                break;
            case 6:
                printf("Exiting....\n");
                break;
            default:
                printf("Sorry, option not found!\n");
        }
    } while (choice != 6);

    return 0;
}
