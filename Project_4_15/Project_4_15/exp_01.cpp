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
//	a = 10 b = 5 a%(a-b) = 0 ��b��a���������
//	 a = 24 b = 16
//	��aС��b��ʱ��,����a��b����ֵ
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
//	printf("������a��ֵ:>");
//	scanf("%d", &a);
//	printf("������b��ֵ:>");
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