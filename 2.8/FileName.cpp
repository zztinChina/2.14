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
	printf("*************1.乘   2.除*************\n");
	printf("*************3.加   4.减*************\n");
	printf("**********      0.退出    *********\n");


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
			printf("退出游戏\n");
		}
		
		else if(1<=n<=4)
		{printf("请输入两个数字\n");
		int x = 0;
		int y = 0;
		scanf_s("%d%d", &x, &y);
		int res = p[n](x,y);
		printf("%d", res);
		
		}
		else
		{
			printf("输入错误\n");
		}

	} while (n);
	return 0;
}