#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d  ", x % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}


//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d  ", x % 10);
//
//}
//
//
//int main()
//{
//	unsigned int  num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+strlen(str + 1);
//		
//	}
//	else
//		return 0;
//}
//
//
//int main()
//{
//
//	char arr1[] = "guo hang li qi da";
//	int len =my_strlen(arr1);
//	printf("%d", len);
//
//
//	return 0;
//}

//int strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//	
//			count++;
//			str++;
//		
//
//	}
//	return count;
//}
//
//int main()
//{
//	int len = 0;
//	char arr1[] = "guoahangliqida";
//	len = strlen(arr1);
//	printf("%d", len);
//	return 0;
//}
//int Factorial(int x)
//{
//    if (x <= 1)
//        return 1;
//    else
//        return Factorial(x - 1) * x;
//    
//
//
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int factor =Factorial(n);
//    printf("%d", factor);
//
//}

//int Febo1(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Febo1(x - 1) + Febo1(x - 2);
//
//
//}

//1 1 2 3 5 8

//int Febo2(int x)
//{
//	int a = 1;
//	int b = 1;
//	int temp = 0;
//	while (x>2)
//	{
//		temp = b;
//		b= a + b;
//		a = temp;
//		x--;
//
//	}
//	return b;
//	




//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入你要的斐波那契数:>");
//	scanf("%d", &n);
//	int febo =Febo2(n);
//	printf("%d", febo);
//
//
//
//	return 0;
//}
//int Tiaofa(int n)
//{
//	if (n>)
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", n);
//
//
//
//}

//int main()
//{
//	printf("%d", sizeof(char));
//	return  0;
//}

//int main()
//{
//	/*char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));*/
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4};
//	printf("%d", sizeof(arr1));
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	while (i < sz)
//	{
//		printf("%p\n", &arr1[i]);
//		i++;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < 3; i++)
//	{
//		
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] %p \n",i,j, &arr[i][j]);
//		}
//	
//	}
//
//
//
//	return 0;
//}
//青蛙跳台阶
//跳第三级台阶
//从第二级和第一级
//到第一级台阶 和 到第二级台阶次数
//第二级就只可以跳一格
//第一级也只可以跳两格
//所以Jummp(n) =Jummp(n-1)+Jummp(n-2)
//1   1
//2   1+1
//3   3
//4   1+3+1=5
//5   

//
//汉诺塔问题
//总共需要移动几次
// 三层时
//1    2    3
//3    0    0   
//2    0    1-      1-3
//1+    1    1-     1-2
//1+    1 1- 0      3-2
//0    1 1-  1+     1-3  
 //1-    1    1+    2-1
//1-    0    1+ 1   2-3  
//0    0     1+ 1 1- 1-3
// 一层时    1
//两层时     3
//三层时     7


//int my_Han(int x)
//{
//	if (x >= 2)
//	{
//		return (my_Han(x - 1) * 2 + 1);
//	}
//	else
//		return 1;
//}
//int my_Han(int x)
//{
//	int i = 1;
//	
//	while (x > 1)
//	{
//		i = i * 2 + 1;
//		x--;
//
//	}
//	return i;
//
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入初始汉诺塔的层数:>");
//	scanf("%d", &n);
//	int times = my_Han(n);
//	printf("%d", times);
//
//
//
//	return 0;
//}









