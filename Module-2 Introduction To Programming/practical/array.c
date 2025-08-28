#include <stdio.h>
void main()
{
   // int a[5],i;

   // a[0]=10;
   // a[1]=20;
   // a[2]=30;

   // printf("%d",a[0]);
   // printf("%d",a[1]);
   // printf("%d",a[2]);
   // printf("%d",a[3]);
   // printf("%d",a[4]);

   // for(i=0;i<=4;i++)
   // {
   //     printf("\n enter Your value::");
   //     scanf("%d",&a[i]);
   // }
   // for(i=0;i<=4;i++)
   // {
   //    printf("\nvalue%d",a[i]);
   // }

   int a[2][2];

   a[0][0] = 10;
   a[0][1] = 20;
   a[1][0] = 30;
   a[1][1] = 40;
   printf("%d", a[0][0]);
   printf("%d", a[0][1]);
   printf("%d", a[1][0]);
   printf("%d", a[1][1]);
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         printf("\nenter your value::");
         scanf("%d", &a[i][j]);
      }
   }
   //   for(int i=0;i<2;i++)
   //   {
   //      for(int j=0;j<2;j++)
   //      {
   //      printf("\n your value:::%d",a[i][j]);
   //      }
   //   }
}
