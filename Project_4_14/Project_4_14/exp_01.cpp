#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <math.h>

//void GetMemory(char** p, int size)
//{
//	*p = (char*)malloc(size);
//}
//
//void Text(void )
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//
//}
//int main()
//{
//	Text();
//}

//struct S
//{
//	int a;
//	int arr[0];
//};
//
//int main()
//{
//	/*struct S s1;
//	printf("%d\n", (unsigned int)sizeof(s1));*/
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->a = 100;
//	struct S* ptr  = (struct S*)realloc(ps, 44);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	
//
//	return 0;
//}

//struct S
//{
//	int a;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = (int *)malloc(sizeof(int) * 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	int * ptr = (int*)realloc(ps->arr, sizeof(int) * 10);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//		for (int i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d", ps->arr[i]);
//		}
//		free(ps->arr);
//		ps->arr = NULL;
//		free(ps);
//		ps = NULL;
//	}
//
//
//}

//struct S
//{
//	int a;
//	int arr[];
//};
//
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(S) + sizeof(int) * 5);
//	if (ps != NULL)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (int i = 0; i < 5; i++)
//		{
//			printf("%d", ps->arr[i]);
//		}
//	}
//	free(ps);
//	return 0;
//}

//int main()
//{
//
//
//	return;
//}