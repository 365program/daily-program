#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <math.h>
#include <errno.h>


//int  MAX_FACTOR(int a, int b)
//{
//
//	a = 10 b = 5 a%(a-b) = 0 则b是a的最大公因数
//	 a = 24 b = 16
//	当a小于b的时候,交换a和b的数值
//	if (a < b)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if (a % (a - b) == 0)
//	{
//		return a - b;
//	}
//	else
//	{
//		MAX_FACTOR(b, a - b);
//	}
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入a的值:>");
//	scanf("%d", &a);
//	printf("请输入b的值:>");
//	scanf("%d", &b);
//	int max = MAX_FACTOR(a, b);
//	printf("%d", max);
//
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	fclose(pf);
	pf = NULL;

	return 0;
}