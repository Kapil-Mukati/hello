#include<stdio.h>

 void main()
 {
     int a[10][10],b[10][10],i,j,r,c;
    printf("Enter the num of Rows: ");
    scanf("%d",&r);

    printf("Enter the num of Columns: ");
    scanf("%d",&c);

  for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {

          printf("Enter the value of a[%d][%d]: ",i,j);
         scanf("%d",&a[i][j]);
         }
     }

for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
//  if(i>=j)
  {
         printf("%d\t",a[i][j]);
      //printf("*\t");
     
  }
  /*else
  {
      break;
  }*/
   printf("\n\n%d\n",i);
      printf("%d\n",j);
  printf("\n");
}
 }
