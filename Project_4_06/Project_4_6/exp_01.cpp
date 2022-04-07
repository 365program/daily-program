#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//int Sqrt(int n, int k)
//{
//	if (k == 1)
//	{
//		return n;
//	}
//	else
//		return Sqrt(n, k - 1) * n;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int sqrt = Sqrt(n, k);;
//	printf("%d", sqrt);
//
//	return 0;
//}

//Digitsum() 求各位数字的和

//int Digitsum(int x)
//{
//	if (x < 10)
//	{
//		return x;
//	}
//	else
//	{
//		int t = x % 10;
//
//		return t + Digitsum(x / 10);
//	}
//		
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int dig1 = Digitsum(input);
//	printf("%d", dig1);
//
//	return 0;
//}

//reverse_string 将参数字符串字符反向排列
//"abcde";
//
//

//void reverse_string(char arr[], int sz)
//{
//	if (sz <= 2)
//		printf("%s", arr);
//	else
//		 
//	
//}
//
//
//int main()
//{
//	char arr[] = "abcde";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//
//
//	return 0;
//}
 
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		/**p = i;
//		p++;*/
//		*p++ = i;
//	}
//	printf("%d", arr[5]);
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//
//
//	return 0;
//}

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//
//	}
//
//	return 0;
//}

//void reverse(int arr1[], int arr2[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//
//
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 5,6,7,8,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	reverse(arr1, arr2, sz);
//
//	for (int i = 0 ; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr2[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);
//
//
//	return 0;
//}
int i;

//int main()
//{
//	i--;
//	if (i > sizeof(i))
//		// 当一个int 和 一个 unsigned int 相互比较时 会把 int 转换成 unsigned 比较
//		//并且计算时使用的是储存在内存里的补码
//		//-1  10000000000000000000000001 （原码）
//		//    11111111111111111111111110  （反码）
//		//    11111111111111111111111111   （补码）
//	{
//		printf(">");
//	}
//	else
//		printf("<");
//
//	return 0;
//}

//int count_bit_one(int a)
//{
//	a = (unsigned int)a;
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//
//
//}


//int count_bit_one(int a)
//{
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & 1) == 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	return count;
//}


//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//
//	}
//	return count;
//}
//
//int main()
//{
//	 int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d", count);
//
//
//	return 0;
//}

//
//int count_bit_one(int t)
//{
//	int count = 0;
//	while (t)
//	{
//
//		
//		t = t & (t - 1);
//		count++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d",&m, &n);
//	int t = m & n;
//	int count = count_bit_one(t);
//	printf("%d", count);
//
//
//	return 0;
//}

//void print(int a)
//{
//	for (int i = 0; i < 16; i++)
//	{
//		int t = a & 1;
//		a = a >> 2;
//		printf("%d  ", t);
//	}
//
//
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",*p);
//		p++;
//	}
//
//	return 0;
//}

//int Fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//		return 2 * Fun(n + 1);
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int t = Fun(2);
//	printf("%d", t);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int t = strlen(arr);
//	printf("%d", t);
//
//	return 0;
//}

//void reverse_str(char* p, int sz)
//{
//	for (i = 0; i < sz-2 / 2; i++)
//	{
//
//		int left = 0;
//		int right = sz - 2;
//		char tmp = '0';
//		tmp = *(p + left);
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		p++;
//		sz--;
//	}
//	
//	
//
//}



//void reverse_str(char arr[], int sz)
//{
//
//
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_str(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//
//
//
//	return 0;
//}
//int my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//		count++;
//
//	}
//	return count;
//
//}
//
//
//
//void reverse_str(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	int tmp = 0;
//	tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reverse_str(arr+1);
//	}
//	arr[right] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_str(arr);
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	
//
//
//	return 0;
//}