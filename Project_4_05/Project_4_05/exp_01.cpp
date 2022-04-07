#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	
//	
//	printf("%p\n", pa -1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;  //数组名字就代表第一个元素的地址
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	
//
//
//
//
//	return 0;
//}

//day_01 1
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int t = sqrt(i);
//		for (j = 2; j <= t; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > t)
//			printf("%d\n", i);
//		
//			
//	}
//
//
//	return 0;
//}
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6  3*3=9
//4*1 
//
// 
//day_01 2

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//day_01 3
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1000; i < 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//			printf("%d\n", i);
//	}
//
//
//
//	return 0;
//}

//day_02 1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d%d", a, b);
//	return 0;
// }

//day_02 2(附加题)
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d%d", a, b);
//
//
//
//	return 0;
//}
//

//day_02 3
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8 ,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		printf("%d\n", max);
//         
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//void Sort_B(int arr[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	int count = 0;
//	int t = 0;
//	while (t < sz)
//	{
//		count = 0;
//		for (i = 0; i < sz; i++)
//		{
//			
//			if (arr[i] < arr[i + 1])
//			{
//				
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				count++;
//			}			
//		}
//		if (count == sz)
//		{
//			break;
//		}
//		t++;
//		
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	int arr[7] = { 1,2,3,7,8,324,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Sort_B(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//
//	return 0;
//}
//
//day_02 5


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &a, &b);
//	if (b > a)
//	{
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;	
//	}
//	do
//	{
//		if (a % b == 0)
//		{
//			printf("%d", b);
//			break;
//		}
//		else
//		{
//			int c = a % b;
//			a = b;
//			b = c;
//		}
//
//	} while (1);
//
//
//	return 0;
//}

//day_03 1


//void Cp (int arr1[], int arr2[],int sz)
//{
//	
//	int i = 1;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = arr2[i];
//	}
//		
//
//	
//
//}
//
//void Swap(int arr1[], int arr2[],int sz)
//{
//	
//	int arr[] = { 0 };
//	Cp(arr, arr1,sz);
//	Cp(arr1, arr2, sz);
//	Cp(arr2, arr, sz);
//
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	int i = 1;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	
//
//	return 0;
//}

//day_03 2
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int ret = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		sum = sum + (1.0* ret) / i;
//		ret = -1 * ret;
//		
//
//	}
//	printf("%f", sum);
//
//
//
//	return 0;
//}
//day_03_3
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//
//	}
//	printf("%d", count);
//
//
//	return 0;
//}
//
//day_04 1
//int main()
//{
//	int row = 0;
//	int i = 0;
//	printf("请输入想打印的层数");
//
//	scanf("%d", &row);
//	for (i = 1; i < 2 * row ; i++)
//	{
//		if (i <= row)
//		{
//			for (int j = 0; j < row-i; j++)
//			{
//				printf(" ");
//			}
//		
//			for ( int j = 0; j < 2 * i - 1; j++)
//			{
//				printf("*");
//			}
//		}
//		if (i > row)
//		{
//			for (int j = 0; j < i - row; j++)
//			{
//				printf(" ");
//			}
//			for (int j = 0; j < 2 * (row - (i - row)) - 1; j++)
//			{
//				printf("*");
//			}
//		}
//		printf("\n");
//
//
//	}
//
//	return 0;
//}
//day_04 2
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int a = i / 100;
//		int c = i % 10;
//		int b = (i % 100) / 10;
//		if (i == a*a*a + b*b*b + c*c*c)
//		printf("%d\n", i);
//
//	}
//
//	return 0;
//}
//2   a1
//22  a2
//222 a3

//int An(int n)
//{
//	if (n == 1)
//	{
//		return 2;
//	}
//	if (n >= 2)
//	{
//		int a1 = 2;
//		int an=  An(n - 1) * 10 + a1;
//		return an;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int an=An(n);
//	printf("%d", an);
//
//	return 0;

//}

//void menu()
//{
//	printf("***************************\n");
//	printf("***   1.play  2.exit    ***\n");
//	printf("***************************\n");
//
//}
//
//void game()
//{
//	int input = 0;
//	int guss = rand() % 100;
//	printf("请猜一猜\n");
//	do
//	{
//	
//		scanf("%d", &input);
//		if (guss < input)
//		{
//			printf("猜大了\n");
//		}
//		else if (guss > input)
//		{
//			printf("猜小了\n");
//		}
//		else if (guss == input)
//		{
//			printf("猜中了\n");
//			break;
//		}
//		
//
//
//
//
//	} while(1);
//
//}
//
//void text()
//{
//	menu();
//	do
//	{
//		int input = 0;
//		printf("请选择是否开始游戏:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("退出游戏，游戏结束");
//			break;
//		default:
//			printf("输入错误笨蛋，请重新输入");
//			break;
//
//		}
//		if (input == 2)
//			break;
//	} while (1);
//}
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	text();
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 ,6 ,8, 9, 10,20 };
//	int left = 0;
//	int right = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int input = 0;
//	scanf("%d", &input);
//
//	while (left <= right)
//	{
//		 left = 0;
//		 right = sz - 1;
//		 int mid = (left + right) / 2;
//		 if (arr[left] == input)
//		 {
//			 printf("%d", left);
//		 }
//		 else if (arr[right] == input)
//		 {
//			 printf("%d", right);
//		 }
//		 else
//		 {
//			 if (arr[mid] < input)
//			 {
//				 left = mid + 1;
//			 }
//			 else if (arr[mid] > input)
//			 {
//				 right = mid - 1;
//			 }
//			 else if (arr[mid] == input)
//			 {
//				 printf("%d", mid);
//				 break;
//			 }
//
//		 }
//	}
//	if (left > right)
//	{
//		printf("你输入的数不在数组中");
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	printf("%d",(double)(1 / 2) + int(1 / 2.0));
//
//	return 0;
//}\

//int main()
//{
//	int arr[8] = {1,2 ,3 ,4 ,5,10,20,30 };
//	int input = 0;
//	scanf("%d", &input);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < input)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > input)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == input)
//		{
//			printf("%d", mid);
//			break;
//		}
//		
//
//
//	}
//	if (right < left)
//	printf("你输入的数不在数组内");
//
//
//
//	return 0;
//}


//int main()
//{
//	char input = '0';
//	scanf("%c", &input);
//	if (input > 64 && input < 91)
//	{
//		input = input + 32;
//		printf("%c", input);
//		input = input - 32;
//	}
//	else if (input > 96 && input < 123)
//	{
//		input = input - 32;
//		printf("%c", input);
//		input = input + 32;
//		
//	}
//	else
//		printf("输入字符无效");
//	return 0;
//}

//void init(int arr[], int sz,int set)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,23,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//初始化数组
//	init(arr, sz,5);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//
//
//
////	return 0;
//}
//day_07 1
//运用递归来写斐波那契数列

//int Febo(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Febo(x - 1) + Febo(x - 2);
// }
//运用循环
//1 1 2 3 5 8 13 21
//int Febo(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 0; i < x - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			
//			
//		}
//		return  c;
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int a = Febo(input);
//	printf("%d", a);
//
//	return 0;
//}


//int Factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//		return Factorial(n - 1) * n;
//
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int facn =Factorial(input);
//	printf("%d", facn);
//
//
//	return 0;
//}

int main()
{


	return 0;
}