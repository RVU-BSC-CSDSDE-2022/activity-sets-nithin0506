#include<stdio.h>
int main(void)
{
  int a,b,sum;
  printf("Enter the first number\n");
  scanf("%d", &a);
  printf("Enter the second number");
  scanf("%d", &b);
  sum=sum_func(&a,&b);
  printf("The sum of the 2numberss is %d",sum);
  return(0);
}
sum_func(int *a,int *b)
{
  int sum=*a
}