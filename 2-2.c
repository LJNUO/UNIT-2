#include<stdio.h>
int main(void)
{
int a,b;
int c,d;
puts("请输入两个整数。");
printf("整数x:");scanf("%d",&a);
printf("整数y:");scanf("%d",&b);
c=a+b;
d=a*b;
printf("x和y的和是%d，积是%d",c,d);
return 0;
}
