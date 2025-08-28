#include <stdio.h>
void main()
{
    // int test=43;
    // printf("%d\n",test);
    // printf("%p\n",&test);

    // int num=26;
    // int *ptr=&num;

    // printf("%d\n",num);

    // printf("%p\n",&num);

    // printf("%p\n",*ptr);

    // printf("%d\n",ptr);

    //  int num[4]={25,50,75,100};
    //  int i;

    //  for(i=0;i<4;i++)  {

    //  printf("%d\n",num[i]);
    //  }
    int num[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%p\n", &num[i]);
    }
}