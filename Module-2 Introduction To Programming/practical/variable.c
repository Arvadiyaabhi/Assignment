// Three Scopes
// Three places where variables can be declared-
// • Local Variables : Declared inside a block
// • Global Variables : Declared outside all functions
// • Formal Parameter : Declared in function
// definition
// Global Scope
// Global variable x

// #include<stdio.h>
// int x = 5;

// void myFunction() {
//   // We can use x here
//   printf("%d", x);
// }

// int main() {
//   myFunction();

//   // We can also use x here
//   printf("%d", x);
//   return 0;
// }

// Local Scope

// #include<stdio.h>

// int myFunction() {
//   // Local variable that belongs to myFunction

// int x = 5;
//   // Print the variable x
//   printf("%d", x);
//   return 0;
// }

// int main() {
//   myFunction();
//   return 0;
// }

// Formal Parameters
#include <stdio.h>
void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("A: %d\n", a);
  printf("B: %d", b);
}
int main()
{
  swap(10, 20);
  return 0;
}
