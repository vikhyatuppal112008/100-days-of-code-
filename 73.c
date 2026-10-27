#include <stdio.h>
int main()
{
int a[10][10];
int sum[10];
int row,col,i,j;
printf("enter rows and colums = ");
scanf("%d %d",&row ,&col);
printf("enter the elements of matrix =\n");
for(i=0;i<row;i++)
{
for( j=0 ;j<col;j++)
{scanf("%d",&a[i][j]);
}
}
for (i=0 ; i< row ; i++)
{
sum[i]=0;
for( j=0; j<col ; j++)
{sum[i]=sum[i]+ a[i][j];
}
}
printf("sum of each row  = \n");
for (i=0; i<row ;i++)
{
 printf("%d",sum[i]);
}
return 0;
}
