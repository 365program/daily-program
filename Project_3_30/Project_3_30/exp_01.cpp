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
//��������Ϸ


void menu()
{
	printf("*************************\n");
	printf("**    1.play  0.exit   **\n");
	printf("*************************\n");
		
}
void game()
{
	//1.���һ�������
	//2.����һ����
	//3�жϴ�С
	int input = 0;

	int ret = rand();
	scanf("%d", input);
	while (1)
	{

		if (input > ret)
			printf("�´���");
		else if (input < ret)
			printf("��С��");
		else
		{
			printf("�¶���");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�˳���Ϸ\n");


		}
		
	} while (input == 1);


		return 0;


}