// #include<stdio.h>
// void Add_numbers()
// {
//     int result;
//     int number1,number2;

//       printf("\n enter two numbers : ");
//       scanf("%d%d",&number1,&number2);

//       printf("\nnumber1:%d",number1);
//       printf("\nnumber2:%d",number2);

//       result=number1+number2;

//       printf("\n addition result:%d :",result);
// }
// int main()
// {

//     Add_numbers();
//     Add_numbers();

// }
// #include<stdio.h>
// void add_numbers(int,int);
// void main()
// {
//     int number1,number2;

//     printf("\nenter two numbers:");
//     scanf("%d%d",&number1,&number2);

//     printf("\nnumber1:%d",number1);
//     printf("\nnumber2:%d",number2);

//     add_numbers(number1,number2);
//     add_numbers(30,70);

// }
// void add_numbers(int x,int y)
// {
//     int result;
//     result=x+y;
//     printf("\naddition result:%d",result);
// }

// #include<stdio.h>
// int add_numbers();
// void main()
// {
//     int res;
//     res=add_numbers();

//     printf("\n addition result:%d",res);
// }
// int add_numbers()
// {
//     int res;
//     int number1,number2;
//     printf("\n enter two number:");
//     scanf("%d%d",&number1,&number2);

//     printf("\n number 1%d",number1);
//     printf("\n number 2%d",number2);

//     res=number1+number2;
//     printf("\n addition number%d",res);
//     return res;

// }

#include <stdio.h>
int add_numbers(int, int);
void main()
{
    int number1, number2, res;
    printf("\n enter two numbers");
    scanf("%d%d", &number1, &number2);

    printf("\n number1%d", number1);
    printf("\n number2%d", number2);

    res = number1, number2;
    printf("\n addition number%d", res);
}
int add_numbers(int x, int y)
{
    int res;
    res = x + y;
    return res;
}