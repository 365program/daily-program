#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("%d", max);
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (a = 1; a <= i; a++)
//		{
//			printf("%d*%d=%-2d  ", i, a, i * a);
//		}
//		printf("\n");
//		
//
//	}
//
//	return 0;
//}
//猜数字游戏


void menu()
{
	printf("*************************\n");
	printf("**    1.play  0.exit   **\n");
	printf("*************************\n");
		
}
void game()
{
	//1.输出一个随机数
	//2.输入一个数
	//3判断大小
	int input = 0;

	int ret = rand();
	scanf("%d", input);
	while (1)
	{

		if (input > ret)
			printf("猜大了");
		else if (input < ret)
			printf("猜小了");
		else
		{
			printf("猜对了");
			break;
		}
	}

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("退出游戏\n");


		}
		
	} while (input == 1);


		return 0;


}