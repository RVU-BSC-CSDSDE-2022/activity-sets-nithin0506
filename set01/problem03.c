#include<stdio.h>
sum_calc(int x,int y, int *sum);

int main(void) {
  int x,y,sum;
  printf("enter the first number\n");
  scanf("%d", &x);
  printf("enter second number\n");
  scanf("%d" , &y);
  sum_calc(x,y, &sum);
  printf("sum is %d", sum);
}

sum_calc(int x, int y, int *sum)
{
  *sum=x+y;
}
