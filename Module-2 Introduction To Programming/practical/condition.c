#include <stdio.h>
void main()
{
    int age, salary;
    // printf("Enter Your age::");
    // scanf("%d",&age);
    // if
    // if(age>=18)
    // {
    //      printf("You are eligible for vote");
    // }
    // if else
    // if(age>=18)
    // {
    //      printf("You are eligible for vote");
    // }
    // else
    // {
    //      printf("You are not eligible for vote");

    // }

    // Nested if

    printf("Enter Your age::");
    scanf("%d", &age);
    printf("Enter Your salary::");
    scanf("%d", &salary);
    if (age >= 18)
    {
        if (salary >= 25000)
        {
            printf("You are pay income tax");
        }
        else
        {
            printf("Your salary is not good ");
        }
    }
    else
    {
        printf("Your are not 18+");
    }

    // if...else if...else
    // int a=2;
    // if (a==0)
    // {
    //     printf("a==0");
    // }
    // else if(a==1)
    // {
    //     printf("a==1");

    // }
    // else if(a==2)
    // {
    //      printf("a==2");
    // }
    // else{
    //     printf("Not in 0 to 2");
    // }

    // int i=1;
    // switch(i)
    // {
    //     case 'a':
    //     printf("1");
    //     break;
    //     case 2:
    //     printf("2");
    //     break;
    //     case 3:
    //     printf("3");
    //     break;
    //     case 4:
    //     printf("4");
    //     break;
    //     default:
    //     printf("error");
    //     break;
    // }
    // int i=0;
    // switch(i%2)
    // {
    //     case 0:
    //     printf("Even");
    //     break;
    //     case 1:
    //     printf("Odd");
    //     break;
    //     default:
    //     printf("error");
    //     break;
    // }
    // Nested switch

    // int i = 1;
    // char c='a';
    // switch (i)
    // {
    // case 1:
    //     switch (c)
    //     {
    //     case 'a':
    //         printf("1");
    //         break;

    //     default:
    //         printf("error");
    //         break;
    //     }
    //     break;
    // case 2:
    //     printf("2");
    //     break;
    // case 3:
    //     printf("3");
    //     break;
    // case 4:
    //     printf("4");
    //     break;
    // default:
    //     printf("error");
    //     break;
    // }
}