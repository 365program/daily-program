#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

////2x - sinx = x +x**3/6
////power为两方法公用函数
//double power(double x, int y)//计算x的y次方
//{
//	double fact = 1;
//	int i = 0;
//	for (i = 0; i < y; i++)
//	{
//		fact = fact * x;
//	}
//	return fact;
//}
//
//
////二分查找循环法
////int main()
////{
////	double left = -0.5; // 从f（-0.5）和f（1）开始进行二分查找
////	double right = 1.0;
////	double mid = 0;
////	int input = 0;
////	int count = 0;
////	printf("请输入二分的次数:>");
////	
////	scanf("%d", &input);
////	int i = 0;
////	for (i = 0; i < input; i++)
////	{
////		mid = (left + right) / 2;
////		if (power(mid, 3) / 6 + mid > 0)
////		{
////			right = mid;
////		}
////		else if (power(mid, 3) / 6 + mid < 0)
////		{
////			left = mid;
////		}
////		else if (power(mid, 3) / 6 + mid == 0)
////		{
////			printf("找到根了,x = %lf,经过了%d次二分", mid,count);
////			break;
////		}
////		count++;
////
////	}
////	if (i == input)
////	{
////		printf("经过%d次二分查找", count);
////		printf("2x - sinx = 0 的根是");
////		printf("x = %lf\n", mid);
////		
////	}
////		
////
////
////
////	return 0;
////}
//
//
//
////不动点递归法
//double use_fixpoint(int input)
//{
//	double t = 0;
//	if (input == 1)
//	{
//		double x = 1.0;
//		x = x / 2.0 - power(x, 3) / 6.0;
//		return x;
//	}
//	else if (input > 1)
//	{
//		double x = use_fixpoint(input - 1);
//		x = x / 2 - ((power(x, 3)) / 6.0);
//		t = x;
//	}
//	return t;
//
//}
//
//
//// y = six/2 = x/2 - x**3/6 将第一次计算的y赋给下一个x
////进行 input 次循环 得到x 
////取x = 1为起始点
//int main()
//{
//	int input = 0;
//	printf("请输入你要使用不动点的次数:>");
//	scanf("%d", &input);
//	printf("%lf", use_fixpoint(input));
//
//	return 0;
//}

//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);
//	int count = 0;
//	while (input)
//	{
//		if (input % 2 == 1)
//		{
//			count++;
//		}
//		input = input / 2;
//	}
//	printf("%d", count);
//
//
//
//
//	return 0;
//}

//day_10操作符 01
//void count_one_bits(int x)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (x & 1 == 1)
//		{
//			count++;
//		}
//		x = x >> 1;
//	}
//	printf("%d", count);
//
//}
//void count_one_bits(int x)
//{
//	int t = x - 1;
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	printf("%d", count);
//}
//
//
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	count_one_bits(input);
//	return 0;
//}

//void print(int x)
//{
//	printf("奇数位");
//	int t = x;
//	for (int i = 0; i < 32; i= i +2)
//	{
//	   
//		printf("%d", t & 1);
//		t = t >> 2;
//	}
//	printf("偶数位");
//	for (int i = 0; i < 32; i = i + 2)
//	{
//	    t = x >> 1;
//		printf("%d", t & 1);
//		t = t >> 2;
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print(input);
//
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = m ^ n;
//	count_one_bits(t);
//	
//
//	return 0;
//}

//判断谁是冠军
//创造一个 2*5 的数组
//[a][b][c][d][e]
//[1][2][3][4][5]

//int mian()

//int Repeat(int arr[])
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 1; j < 5; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				return 0;
//				
//			}
//
//		}
//		
//
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int arr[5] = {0};
//	for(arr[0] = 1; arr[0] <= 5; arr[0]++)
//		for (arr[1] = 1; arr[1] <= 5; arr[1]++)
//			for (arr[2] = 1; arr[2] <= 5; arr[2]++)
//				for (arr[3] = 1; arr[3] <= 5; arr[3]++)
//					for (arr[4] = 1; arr[4] <= 5; arr[4]++)
//					{
//						if ((arr[1] == 2) + (arr[0] == 3) == 1 &&
//							(arr[1] == 2) + (arr[4] == 4) == 1 &&
//							(arr[2] == 1) + (arr[3] == 2) == 1 &&
//							(arr[2] == 5) + (arr[3] == 3) == 1 &&
//							(arr[4] == 4) + (arr[2] == 1) == 1 && Repeat(arr) == 1)
//						{
//							for (int i = 0; i < 5; i++)
//							{
//								printf("%d ", arr[i]);
//							}
//							printf("\n");
//
//						}
//
//
//
//
//
//					}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 8; i++)
//	{
//		if (((i >> 3) == 0) + (((i >> 1) & 1) == 1) + ((i & 1) == 1) + ((i & 1) == 0) == 1)
//			printf("%d", i);
//	}
//	
//
//
//
//	return 0;
//
//}

//unsigned int reverse_bit(unsigned int value)
//{
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",reverse_bit(a));
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[16] = { 5,4,3,2,1,2,3,4,5,6,7,8,8,8,8,1 };
//	for (int i = 0; i < 16; i++)
//	{
//
//	}
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pAdd)(int, int) = &Add;
//	printf("%d", (*pAdd)(2, 3));
//	int (*ppArr[4])(int, int);
//	int (*(*pppArr)[4])(int, int);
//
//
//	return 0;
//}
//冒泡排序



//void bubble_big(int arr[10], int sz)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int count = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			else
//				count++;
//		}
//		if (count == sz - 1 - i)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_big(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		
//	}
//		
//
//	return 0;
//}
//int my_int_cmp( void* e1,  void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//
//	}
//}
//
//
//
//void my_bubble_sort(void* arr,int sz,int width, int(*cmp)(  void*e1,  void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if   ( my_int_cmp ((char*)arr + j * width , (char*)arr + (j + 1) * width) > 0)
//			{
//				Swap((char*)arr + j * width, (char*)arr + (j + 1)*width,width);//交换两个数
//			}
//				
//			
//		}
//		
//		
//	}
//
//}
////
////
////
////
//void text1()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_bubble_sort(arr, sz, sizeof(arr[0]), my_int_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//
//}

//
//void text2()
//{
//	
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),my_int_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//
//		printf("%d", arr[i]);
//	}
//	
//
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};

//int my_struct_name_cmp(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)-> name, ((struct Stu*)e2) -> name );
//
//}



//void text3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), my_struct_name_cmp);
	


//}
//int my_struct_age_cmp(const void* e1, const void* e2)
//{
//	if ((*(struct Stu*)e1).age - (*(struct Stu*)e2).age > 0)
//	{
//		return 1;
//	}
//	else if ((*(struct Stu*)e1).age - (*(struct Stu*)e2).age < 0)
//	{
//		return 0;
//	}
//	else if ((*(struct Stu*)e1).age - (*(struct Stu*)e2).age == 0)
//	{
//		return 0;
//	}
//
//}
//
//
//void text4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), my_struct_age_cmp);
//
//}

//int my_float_cmp(const void* e1, const void* e2)
//{
//	/*if ((*((float*)e1) > *((float*)e2)))
//		return 1;
//	
//	else if ((*((float*)e1) == *((float*)e2)))
//		return 0;
//	else 
//		return -1;*/
//	return (int)(*(float*)e1 - *(float*)e2);
//}



//void text5()
//{
//	float f[5] = { 5.0 , 4.0 , 3.0 ,2.0, 1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), my_float_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f  ", f[i]);
//	}
//	
//
//}


//int main()
//{
//	/*text1();*/
//	/*text2();*/
//	/*text3();*/
//	/*text4();*/
//	/*text5();*/
//	
//	return 0;
// }



//int main()
//{
//
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//		
//
//
//	return 0;
//}

int main()
{
	/*int  a[3][2] = { (0, 1),(2, 3),(4, 5) };
	int* p;
	p = a[0];
	printf("%d", p[0]);*/



}