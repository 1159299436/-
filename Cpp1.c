#include <stdio.h>
int fbi(int x)
{
int a=1;
int b=1;
int c=0;
while(x>2)
{a=b;
c=a+b;
b=c;
x--;}
if(c>1)
{return c;}
else if(x==0)
{return 0;}
else 
return 1;


}











int main()
{
int n=0;
int sum=0;
printf("���벻Ϊ0�������Կ�ʼ����\n");
scanf("%d",&n);
while(n==0)
{
	printf("�������������һ����Ϊ0������\n");
scanf("%d",&n);

}
while(1)
{printf("������һ����Ϊ0�������Լ���\n");
	scanf("%d",&n);
sum=fbi(n);
if(sum>0)
{printf("������=%d\n",sum);
}
else 
printf("�����������������\n");



}





return 0;
}