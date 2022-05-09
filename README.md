# student-management-system
Student Management System written in C programming language. Problem Solving lab Project . 
## The code should have the following functions:
1. Function searchStudentById( )
Take student id then return a pointer to the desired student, or NULL if not found (using linear search).
2. Function addStudent( )
Takes all the student information and add him to the array, the function should add the student in the first free slot (which equal to NULL). if there is no free slot, the function print "not enough space".
3. Function deleteStudent( )
Takes the registration number then delete the student, you should search for the index using function searchStudentById( ) Then set the element to NULL to delete.
4. Function calculateStatistics( )
That loop on the student’s array and calculate the min, max, average, number of males and females of all students. And return a structure that contain the five elements.
5. Function printStudent( )
Takes the student index and print the student in the following format:
"regnum: 16108655 Name: Youssef Khaled gpa: 3.54 gender: Male address: (Egypt, Assiut) birthdate: 5/1/1998"
6. Function printAllStudents( )
Loop on students and print all of them using the previous function printStudent( )
7. Function printStudentsInRange( )
Takes a specific range of gpa (min and max) then print the student using printStudent( ) that satisfy the condition, bigger than min and smaller than max.
8. Function sortStudents( )
Implements bubble sort to sort the student in ascending order using the gpa.
