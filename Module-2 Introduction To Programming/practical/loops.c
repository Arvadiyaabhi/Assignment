#include <stdio.h>
void main()
{
    // int i,num,total;
    // printf("enter your table number");
    // scanf("%d",&num);
    // i=1;
    // while(i<=10)
    // {
    //     total=num*i;
    //     printf("%d*%d=%d\n",i,num,total);
    //     i++;
    // }

    // do while loop
    //  int i;
    //  i=0;
    //  do
    //  {
    //    //  /* code */h
    //    printf("abhi%d\n",i);
    //  } while(i<=10);

    // int i;
    // i=0;
    // do
    // {
    //     //   /* code */
    //     printf("abhi%d\n",i);
    //     i++;
    // } while (i>10);

    // int i,num,total;
    // printf("enter your table number ::");
    // scanf("%d",&num);
    // i=1;
    // do
    // {
    // total=num*i;
    //    printf("%d*%d=%d\n",num,i,total);
    //    i++;
    // } while (i<=10);

    // for(int i=0;i<=10;i++){
    // printf("abhi%d\n",i);
    // }

    // int i;
    // i=10;
    // do
    // {
    //   printf("abhi%d\n",i);
    //   i--;
    // } while (i>=0);

    // for(int i=10;i>=0;i--){
    //     printf("abhi%d\n",i);
    // }

    // nested loops
    //  int i;
    //  i = 1;
    //  while (i <= 5)
    //  {
    //      int j;
    //      j = 1;
    //      while (j <= 5)
    //      {

    //         printf("I :: %d J::%d\n", i, j);
    //         j++;
    //     }
    //     i++;
    // }
    // int row;
    // row = 1;
    // while (row <= 5)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= 5)
    //     {

    //         printf("Row:: %d col::%d", row, col);
    //         col++;
    //     }
    //     printf("\n");

    //     row++;
    // }

    // int row;
    // row = 1;
    // while (row <= 5)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= 5)
    //     {

    //         printf(" * ");
    //         col++;
    //     }
    //     printf("\n");

    //     row++;
    // }

    //  int row;
    // row = 1;
    // while (row <= 5)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= row)
    //     {

    //         printf(" * ");
    //         col++;
    //     }
    //     printf("\n");

    //     row++;
    // }

    // int row;
    // row = 1;
    // while (row <= 5)
    // {
    //     int col;
    //     col = 1;
    //     while (col <= row)
    //     {

    //         printf(" * ");
    //         col++;
    //     }
    //     printf("\n");

    //     row++;
    // }

    int row = 4;
    while (row >= 1)
    {
        int col;
        col = 1;
        while (col <= row)
        {

            printf(" * ");
            col++;
        }
        printf("\n");

        row--;
    }
}
