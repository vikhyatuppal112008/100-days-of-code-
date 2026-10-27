#include <stdio.h>
int main()
{
int a[10][10];
int row,col,i,j;
printf("enter rows and colums = ");
scanf("%d %d",&row ,&col);
printf("enter the elements of matrix =\n");
for(i=0;i<row;i++)
{
for( j=0 ;j<col;j++)
{scanf("%d", &a[i][j]);
}
}
printf("transpose =\n");
for(j=0;j<col;j++)
{
for(i=0;i<row;i++){

printf("%d", a[i][j]);

}
}
return 0;
}