/*
 * Day 3 Exercise 4: Pointers to Structs - Student Management
 *
 * Implement the student struct and update_grade function as described in tutorial Step 4.
 *
 * TODO:
 * 1. Define the Student struct with char name[20]; int grade;
 * 2. Implement update_grade(Student *s, int new_grade) to change the grade using ->
 * 3. In main:
 *    - Create a Student: name "Alice", grade 80
 *    - Print initial: "Name: Alice, Grade: 80"
 *    - Call update_grade(&student, 90)
 *    - Print updated: "Name: Alice, Grade: 90"
 *
 * Expected output:
 * Initial: Name: Alice, Grade: 80
 * Updated: Name: Alice, Grade: 90
 */

#include <stdio.h>
#include <string.h>
#include "student.h" 

void update_grade(Student *s, int new_grade) {
    // TODO: Implement to update the grade
  
    s->grade = new_grade; //use arrow to access and modify the grade member of the struct.
    // Placeholder
    printf("update_grade not implemented.\n");
}

int main() {
    printf("Exercise 4: Student Struct with Pointers\n");

    // TODO: Define Student struct here or in header
     Student student;
    // Student student;
  // Student *ptr = &student// pointer to student, Asign address of student to pointer 
   //ptr -> grade = 90; // you go to the address and write 

    strcpy(student.name, "Alice");
    student.grade = 80; // use . when you have actual struct value 
    printf("Initial: Name: %s, Grade: %d\n", student.name, student.grade);

    // TODO: Call update_grade(&student, 90);
    update_grade(&student, 90);
    printf("Updated: Name: %s, Grade: %d\n", student.name, student.grade);

    // Placeholder output
    printf("Implement the TODOs to see correct output.\n");

    return 0;
}

