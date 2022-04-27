#include <stdio.h>
int fbi(int x)
{
int a=1;
int b=1;
int c=0;
while(x>2)
{
	a=b;
c=a+b;
b=c;
x--;
}
if(c>1)
{
	return c;
}
else if(x==0)
{
	return 0;
}
else 
return 1;
}
int main()
{
int n=0;
int sum=0;
printf("输入不为0的数字以开始服务\n");
scanf("%d",&n);
while(n==0)
{
	printf("输入错误，请输入一个不为0的数字\n");
scanf("%d",&n);

}
while(1)
{
	printf("请输入一个不为0的数可以计算\n");
	scanf("%d",&n);
sum=fbi(n);
if(sum>0)
{
	printf("计算结果=%d\n",sum);
}
else 
printf("输入错误请重新输入\n");
}
return 0;
}
