#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>


void menu()
{
	printf("*******************************\n");
	printf("*****��ӭ������������Ϸ********\n");
	printf("*****1.��ʼ��Ϸ  0.�˳���Ϸ***>:\n");


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

		printf("��ѡ��\n");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("��Ϸ��ʼ\n");
			game();

		}
		else
		{
			printf("��Ϸ����\n");
			break;

		}
	}


	return 0;
}