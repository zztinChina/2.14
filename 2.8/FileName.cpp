#include<stdio.h>
int cheng(int x, int y)
{
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}
int jia(int x, int y)
{
	return x + y;
}
int jian(int x, int y)
{
	return x - y;
}
void menu()
{
	printf("*************1.��   2.��*************\n");
	printf("*************3.��   4.��*************\n");
	printf("**********      0.�˳�    *********\n");


}
int main()
{
	int n = 0;
	int(*p[])(int x, int y) = { 0,cheng,chu,jia,jian };
	do
	{
		menu();
		scanf_s("%d", &n);
		if (n == 0)
		{
			printf("�˳���Ϸ\n");
		}
		
		else if(1<=n<=4)
		{printf("��������������\n");
		int x = 0;
		int y = 0;
		scanf_s("%d%d", &x, &y);
		int res = p[n](x,y);
		printf("%d", res);
		
		}
		else
		{
			printf("�������\n");
		}

	} while (n);
	return 0;
}