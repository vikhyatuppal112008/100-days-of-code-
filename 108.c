#include <stdio.h>
void product(int a[] , int n)
{
int i,j , product;
for (i=0 ; i<n ; i++)
   {product = 1;
   
 for(j=0 ; j <n ; j++)
  {
   if(i !=j)
   {
     product = product * a[j];
   }
  }
   printf("%d" ,product);
   }
}

int main()
{ int a[100] , n , i;

printf("enter size =");
scanf("%d" , &n);

printf("enter the elements =");
for(i = 0; i<n ; i++)
{
 scanf("%d", &a[i]);
}
product(a , n);
return 0;

}
