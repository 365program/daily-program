#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>

//int main()
//{
//	/*double d = 1E10;
//	printf("%lf", d);*/
//	int n = 9;
//	float* pFloat = (float*)&n;
//		* pFloat = 9.0;
//	// 1001.0
//	//(-1)^0*1.001*2^3
//	//(-1)^s*  M  * 2^E  
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d", sizeof(p));
//	printf("%d", sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	/*char arr1[] = "abcde";
//	char* p1 = arr1;
//	printf("%s", arr1);
//
//	return 0;*/
//
//	/*const char* p = "abcdef";
//	printf("%c", *p);*/
//	char arr[10] = "abcde";
//	char (*p)[10] = &arr;
//	printf("%c", p[0]);
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//用指针遍历元组1
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", (*p)[i]);
//	}*/
//	//用指针遍历元组2
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(*p + i));
//
//	}*/
//	return 0;
//}


//void my_print (int (*arr)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


//void my_print (int(*p)[5], int x, int  y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//
//}

//void my_print(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	my_print(arr, 3, 5);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	return 0;
//}

//int main()
//{
//	const char* p = "abcde";
//	printf("%s", p);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int (*pa)(int, int) = Add;
//	printf("%d\n", ( * pa)(3, 2));
//	printf("%p\n", pa);
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//
//	return x + y;
//}
//int Sub(int x, int y)
//{
//
//	return x - y;
//}
//int Mul(int x, int y)
//{
//
//	return x * y;
//}
//int Div(int x, int y)
//{
//
//	return x / y;
//}
//



//int main()
//{
//	int i = 0;
//	int (*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d",parr[i](3, 2));
//	}
//
//
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return  ret;
//}
//
//int main()
//{
//	int i = 0;
//	
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1, arr2));
//	printf("%p\n", my_strcpy);
//	printf("%p\n",&my_strcpy);
//	char* (* pf)(char*, const char*) = my_strcpy;
//	printf("%p\n", pf);
//	printf("%s\n", pf(arr1,  arr2));
//	char* (*pfarr[4])(char*, const char*) = { my_strcpy , my_strcpy , my_strcpy , my_strcpy };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p\n", pfarr[i]);
//	}
//	printf("%d\n", sizeof(&my_strcpy));
//	return 0;
//}

// int Add(int x, int  y)
//{
//	return x + y;
//}
//
//int main()
//{
//
//	printf("%d", sizeof(&Add));
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("************************************\n");
//	printf("********  1.add    2.sub    ********\n");
//	printf("********  1.mul    3.div    ********\n");
//	printf("********      0.exit        ********\n");
//	printf("************************************\n");
//}

//int main()
//{
//	do
//	{
//		menu();
//		int a = 0;
//		int b = 0;
//		int input = 0;
//		printf("请选择:>");
//		scanf("%d", &input);
//		printf("请输入两个操作数");
//		scanf("%d%d", &a, &b);
//		int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//
//		
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", parr[0](a, b));
//			break;
//		case 2:
//			printf("%d\n", parr[1](a, b));
//			break;
//		case 3:
//			printf("%d\n", parr[2](a, b));
//			break;
//		case 4:
//			printf("%d\n", parr[3](a, b));
//			break;
//		case 0:
//			printf("退出计算器");
//			break;
//		default:
//			printf("输入参数非法，请重新输入");
//
//
//
//		}
//	} while (1);
//
//
//	return 0;
//}

//int main()
//{
//	do
//	{
//		menu();
//		int input = 0;
//		int a = 0;
//		int b = 0;
//		printf("\n");
//		printf("请选择:>\n");
//		scanf("%d", &input);
//		printf("请输入你的两个参数\n");
//		scanf("%d%d", &a, &b);
//		int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//		int i = 0;
//		if (input >= 1 && input <= 4)
//		{
//			printf("%d\n", parr[input-1](a, b));
//			
//		}
//		else if (input == 0)
//		{
//			printf("退出计算机");
//			break;
//		}
//		else
//			printf("输入非法,请重新输入");
//
//
//
//
//
//	} while(1);
//
//
//	return 0;
//}
//void Calc(int(*pf)(int , int))
//{	
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出成功");
//			break;
//		default:
//			printf("输入错误请重新输入");
//		}
//
//
//
//	} while (1);
//
//
//}

//int main()
//{
//	char arr[10] = "nihao";
//	char(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", arr);
//	printf("%d\n", *p);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = {0};
//	int(*p)[10] = &arr;
//	int (*pf)(int, int) = Add;
//	int(*pfArr[4])(int, int) = { 0 };
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//
//
//
//
//	return 0;
//}

int main()
{
	float a = 0;
	


	return 0;
}