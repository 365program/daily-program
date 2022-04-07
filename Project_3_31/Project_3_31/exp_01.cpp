#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>


void menu()
{
	printf("*******************************\n");
	printf("*****欢迎来到猜数字游戏********\n");
	printf("*****1.开始游戏  0.退出游戏***>:\n");


}


void game()
{



}

int main()
{
	int input = 1;
	menu();
	
	while (1)
	{

		printf("请选择\n");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("游戏开始\n");
			game();

		}
		else
		{
			printf("游戏结束\n");
			break;

		}
	}


	return 0;
}