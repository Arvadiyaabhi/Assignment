// #include<stdio.h>
// void main()
// {
//     int i;
//     i=1;
//     while(1)
//     {
//         if (i==5)
//         {
//             break;
//         }
//         printf("Hello%d\n",i);
//         i++;
//     }
// }

// #include<stdio.h>
// void main()
// {
//     int i;
//     i=1;
//     while(i<=10)
//     {

//         i++;
//         if (i==5)
//         {
//             continue;
//         }
//         printf("Hello%d\n",i);
//     }
// }

#include <stdio.h>
void main()
{
    int i;
    i = 1;
label:
    if (i <= 5)
    {
        printf("Hello%d\n", i);
        i++;

        goto label;
    }
}
