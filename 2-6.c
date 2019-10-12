#include<stdio.h>
int main(void)
{
int a,b;
printf("请输入你的身高(cm)：");scanf("%d",&a);
b=(a-100)*0.9;
printf("你的标准体重是：%dKG",b);
return 0;
}
