#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define ROW  9
////进行冒泡排序bubble_sort
//void bubble_sort(int arr[], int sz)
//{
//	
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j ] = arr[j+1];
//				arr[j + 1] = tmp;
//				flag = 0;
//				
//
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//
//		}
//
//	}
//
//
//}
//int main()
//{
//	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	bubble_sort(arr1, sz);
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//
//
//		printf("%d", arr1[i]);
//	}
//
//	
//
//
//
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	printf("%d\n", *arr1);
//	printf("%d\n", *(arr1 + 1));
//	printf("%p\n", arr1);
//	printf("%p\n", &arr1[0]);
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int times = 0;
//	int arr[] = { 1,2,3,4,5,1,2,3,4, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for(i = 0; i < sz; i++)
//	{
//		times = 0;
//		for (j = 0; j < sz; j++)
//		{
//			 
//			 if (arr[i] == arr[j])
//			 {
//				 times++;
//			 }
//			
//		}
//		if (times == 1)
//		{
//			printf("%d,arr[%d]=%d\n", i, i, arr[i]);
//			break;
//		}
//
//
//	}
//
//
//	return 0;
//}

//异或
//011 3
//101 5
//110 6
//011 3
//101

//int main()
//{
//	/*char input[20] = { 0 };
//	printf("%s", "您的电脑将在一分钟之后关机，请输入我是猪取消：>");
//	scanf("%s", input);
//	system("shutdown -s -t 600");
//	while (1)
//	{
//		if (strcmp(input, "我是猪") == 0)
//		{
//			printf("你说对了");*/
//			/*system("shutdown -a");*/
//			/*break;
//
//		}
//		else
//		{
//			printf("你说错了,请输入正确答案");
//		}
//
//	}*/
//	
////
////	return 0;
////}
//	

//int main()
//{
//	int a = 11;
//	int b =a >> 1;
//	printf("%d", b);
//
//
//
//	return 0;
//}



//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		if (num % 2 == 1)
//		{
//
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d", count);
//
//
//
//	return 0;
//}
//		

//int main()
//{
//	int i = 0;
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++)
//	{
//		if (num & 1 == 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	printf("%d", count);
//
//	return 0;
//}
//001011
//000100
//001111
//111101
//000010
//001101
//
//
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & ~(1 << 1);
//	printf("%d", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	(a > 5 ? b = 3 : b = 5);
//	/*int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = 5;*/
//
//	printf("%d", b);
//	return 0;
//}
//创建了一个叫 struct Stu的结构类型
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//
//int main()
//{
//	int a = 10;
//	//创建了一个struct Stu 类型的 学生对象s1
//	struct Stu s1 = { "张三",20,"210110780666" };
//	printf("%s", s1.name);
//	struct Stu* ps = &s1;
//	printf("%s", (*ps).name);
//	//或者
//	printf("%s", ps->name);
//
//	return 0;
//}

//int mian()
//{
//	char c = 1;
//	printf("%n", sizeof(c));
//
//	return 0;
//}
//
//
//
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//
//void DisplayBoard(int arr[ROW][ROW], int row)
//{
//	int i = 0;
//	int j = 0;
//	int c = ROW;
//	for (i = 0; i < row; i++)
//	{
//		for (c = 0; c < 2*(ROW-i); c++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
// }
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	int arr[ROW][ROW] = { 0 };
//	for (i = 0; i < ROW; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//	DisplayBoard(arr, ROW);
//	    //1
//		//1 1
//		//1 2 1
//		//1 3 3 1
//		//1 4 6 4 1
//	for (i = 2; i < ROW; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	DisplayBoard(arr, ROW);
//	
//
//
//	return 0;
//}
