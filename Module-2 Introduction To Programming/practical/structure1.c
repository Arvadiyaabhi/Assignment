// #include <stdio.h>

// // Defining a structure
// struct A {
//     int x;
// };

// void main() {

//     // Creating a structure variable
//     struct A a;

//   	// Initializing member
//   	a.x = 11;

//     printf("%d", a.x);
// }

// #include <stdio.h>

// // Defining a structure to represent a student
// struct Student {
//     char name[50];
//     int age;
//     float grade;
// };

// void main() {

//     // Declaring and initializing a structure
//     // variable
//     struct Student s1 = {"Rahul",20, 18.5};
//     // Designated Initializing another stucture
//   	struct Student s2 = {.age = 18, .name =
//   	"Vikas", .grade = 22};

//     // Accessing structure members
//     printf("%s\t%d\t%f\n", s1.name, s1.age,
//     s1.grade);
//     printf("%s\t%d\t%.2f\n", s2.name, s2.age,
//     s2.grade);

// }
// Nested Structures

// #include <stdio.h>

// // // Child structure declaration
// struct child {
//     int x;
//     char c;
// };

// // Parent structure declaration
// struct parent {
//     int a;
//     struct child b;
// };

// int main() {
//     struct parent p = { 25, 195, 'A' };

// //     // Accessing and printing nested members
//     printf("p.a = %d\n", p.a);
//     printf("p.b.x = %d\n", p.b.x);
//     printf("p.b.c = %c", p.b.c);
//     return 0;
// }

// Array of Structure
#include <stdio.h>

// // Structure definition
struct A
{
    int var;
};

int main()
{

    // Declare an array of structures
    struct A arr[2];

    arr[0].var = 10;
    arr[1].var = 20;

    for (int i = 0; i < 2; i++)
        printf("%d\n", arr[i].var);

    return 0;
}