#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



//void menu()
//{
//	printf("*******************************\n");
//	printf("*****欢迎来到猜数字游戏********\n");
//	printf("*****1.开始游戏  0.退出游戏***>:\n");
//
//
//}
//
//
//void game()
//{
//	int guss = 0;
//	int ret = rand();
//	ret = ret % 100 + 1;//rand()生成随机数在0--32767之间
//	
//	//RAND_MAX == 32767   0xffff
//	while (1)
//	{
//		scanf("%d", &guss);
//		if (ret > guss)
//		{
//			printf("猜小了\n");
//			
//		}
//	
//		else if (ret < guss)
//		{
//			printf("猜大了\n");
//			
//		}
//		else if (ret == guss)
//		{
//			printf("猜对了\n");
//			break;
//		}
//
//
//	}
//
//
//
//}
//
//int main()
//{
//
//	srand((unsigned int)time(NULL));
//	int input = 1;
//	menu();
//
//	while (1)
//	{
//
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			printf("游戏开始\n");
//			game();
//
//		}
//		else
//		{
//			printf("游戏结束\n");
//			break;
//
//		}
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char input[20] = {0}; 
//	
//	system("shutdown -s -t 60");
//	
//	while (1)
//	{
//		printf("请输入:>我是猪\n");
//		scanf("%s", &input);
//
//		
//		if (strcmp(input, "我是猪") == 0)//若strcmp（）函数中间两个字符串相等 输出值为零
//		{
//			system("shutdown -a");
//			break;
//		}
//		
//
//	}
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int hang = 0;
//	scanf("%d", &hang);
//	for (i = 1; i <= hang; i++)
//	{
//		for (a = 1; a <= i; a++)
//		{
//			printf("%d", a);
//			printf("    ");
//
//
//		}
//		printf("\n");
//
//
//	}


//int  factorial(int i, int j)
//{
//	int a = 0;
//	int b = 0;
//	int factor1 = 1;
//	int factor2 = 1;
//	for (a = 1; a <= i; a++)
//	{
//		factor1 = factor1 * a;
//	}
//	{
//		if (j <= (i/2))
//		{
//			for (a = 1; a <= (i - j); a++)
//			{
//
//				factor2 = factor2 * a;
//			}
//		}
//		else if (j > (i/2))
//		{
//			for (a = 1; a <= j; a++)
//			{
//				factor2 = factor2 * a;
//			}
//		}
//	}
	//if (0 ==i || 0 == j )
	//{
	//	b = 1;
	//}
	//else if (j > i)
	//	printf("输入错误");
	//else 
	//{
	//	b = factor1 / factor2 ;
	//}
	//return b;
//
//}
//
//int main()
//{
//	/*printf("%d\n", factorial(2, 1));
//	printf("%d\n", factorial(0, 0));
//	printf("%d\n", factorial(1, 2));*/
//
//	 /*1             0.0
//    1  1          1,0  1,1
//  1	  2	 1       2,0 2,1 2,2
//1	3	3  1    3.0 3.1 3.2 3.3
//1  4  6   4  1*/
//	int row = 0;
//	int a = 0;
//	int b = 0;
//	int i = 0;
//
//	printf("%s", "请输入想打印的层数:>");
//	scanf("%d" , &row);
//	for (i = 0; i < row; i++)
//	{
//
//		for (a = 0; a <= i; a++)
//		{
//			printf("%4d", factorial(i, a));
//			printf("   ");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//int  factorial(int i, int j)
//{
//	int a = 0;
//	int b = 1;
//	int factor1 = 1;
//	int factor2 = 1;
//	for (a = i; b <=j; b++, a--)
//	{
//		factor1 = factor1 * a;
//	}
//	for (a = 1; a <= j; a++)
//	{
//		factor2 = factor2 * a;
//
//	}
//	if (0 == i || 0 == j)
//	{
//		b = 1;
//	}
//	else if (j > i)
//		printf("输入错误");
//	else
//	{
//		b = factor1 / factor2;
//	}
//	return b;
//
//}
//int main()
//{
//
//	/*printf("%d\n", factorial(2, 1));
//	printf("%d\n", factorial(0, 0));
//	printf("%d\n", factorial(1, 2));*/
//
//	/*1             0.0
//   1  1          1,0  1,1
// 1	  2	 1       2,0 2,1 2,2
//1	3	3  1    3.0 3.1 3.2 3.3
//1  4  6   4  1*/
//	int row = 0;
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int k = 0;
//
//	printf("%s", "请输入想打印的层数:>");
//	scanf("%d", &row);
//	for (i = 0; i < row; i++)
//	{
//		for ( k = 1; k <=2* (row-i); k++)
//		{
//			putchar('  ');
//		}
//
//		for (a = 0; a <= i; a++)
//		{	
//			printf("%4d", factorial(i, a));
//			
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "too big";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	arr2[3] = 'c';
//	printf("%s", arr2);
//	return 0;
//}
//int main()
//{
//	
//	char arr1[] = "hello world";
//	memset(arr1,'w', 5);
//	printf("%s", arr1);
//
//
//	return 0;
//}

//void Swap(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//
//}
//
//
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("%d\n%d", a, b);
//
//
//
//	return 0;
//}

//void Prime(int x)
//{
//	int i = 0;
//	for ( i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			printf("是素数\n");
//		    break;
//		}
//		
//		
//
//	}
//	 if (i >= sqrt(x))
//	printf("不是素数");
//	
//	printf("%d", i);
//
//}
//
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	Prime(a);
//
//	return 0;


//int is_leap(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	return 1;
//	else
//	return 0;
//
//}
//
//
//
// int main()
//{
//	int year = 0;
//	printf("请输入年份");
//	scanf("%d", &year);
//	int x=is_leap(year);
//	printf("%d", x);
//	return 0;
//}

//int  Two (int a,int arr[],int b)
//{
//	int left = 0;
//	int right = b;
//	
//	while (left <=right)
//	{
//		int ret = (left + right) / 2;
//		if (arr[ret] < a)
//		{
//			left = ret + 1;
//
//		}
//		else if (arr[ret] > a)
//		{
//			right = ret - 1;
//		}
//		else if (arr[ret] = a)
//		{
//			return ret;
//			
//		}
//	}
//	return -1;
//
//
//}
//
//
//
//int main()
//{
//	
//	int a = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = (sizeof(arr1) / sizeof(arr1[0])) - 1;
//	scanf("%d", &a);
//	int x =Two(a,arr1, sz);
//	printf("%d", x);
//	return 0;
//}




//int Tow(int k, int sz , int arr[])
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == k)
//		{
//			return mid;
//			break;
//
//		}
//
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int k = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	scanf("%d", &k);
//	int t=Tow(k,sz,arr1);
//	if (t > 0)
//		printf("找到了，下标为%d", t);
//	else
//		printf("找不到相关数字");
//
//
//
//	return 0;
//}
//void Add(int* pnum)
//{
//	*pnum = *pnum + 1;
//
//
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//
//
//
//	return 0;
//}
