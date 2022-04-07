//打印n！+（n-1）!....+1!
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0, a = 0, c = 0,ret = 1,sum = 0;
//	scanf("%d", &a);
//
//	
//	for (i = 1; i <= a; i++)
//	{
//		for (c = 1; c <= i; c++)
//		{
//			ret = ret * c;
//
//		}
//		sum = sum + ret;
//			ret = 1 ;
//
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//int main()
//{
//	int k = 3, i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了k的下标是%d\n", i);
//			break;
//		}
//
//		if (i == sz);
//		printf("找不到k");
//	}
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0, k = 17;
//	int arr[] = { 1,2,3,4,5,6,7,8, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，k的下标是%d\n", i);
//			break;
//		}
//		
//
//
//	}
//	if (i == sz)
//		printf("找不到");
//




//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数；
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//		
//
//
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("找到k，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到k");
//
//
//
//	return 0;
//}

//welcome to bite!！
//int main()
//{
//	char arr2[] = "welcome to bit!!!!";
//	char arr1[] = "##################";
//	int	left =  0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	int right = sz - 2;
//	while (left < right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		printf("%s\n", arr1);
//		left++;
//		right--;
//
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	char  arr1[] = "welcome to bit!!!";
//	char  arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//
//
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int password = 123456;
//	int getpassword =  0 ;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &getpassword);
//
//		if (getpassword == password)
//		{
//			printf("password right\n");
//			break;
//		}
//		else
//		{
//			printf("password woring\n you have %d chances\n", 2 - i);
//		}
//		while (getchar() != '\n')
//		{
//			getchar();
//		}
//	}
//	printf("%d\n", i);
//		if (i == 3)
//			printf("请一百年后再次重试");
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//
//	{
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		printf("密码输入错误，你还有%d次机会", 2 - i);
//
//
//
//	}
//	if (i == 3)
//		printf("请在一百年后重试");
//
//
//
//	return 0;
//}
//int main()
//{
//	int a, b, c,t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (b > a)
//	{
//		t = b;
//		b = a;
//		a = t;
//  
//	}
//	if (c > a)
//	{
//		t = c;
//		c = a;
//		a = t;
//
//	}
//	if (c > b)
//	{ 
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d%d%d", a, b, c);
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//
//	}
//
//	return 0;
//}	
//int main()
//{
//	int m, n, t,cha;
//	scanf("%d%d", &m, &n);
//	if (m < n)
//	{
//		t = m;
//		m = n;
//		n = t;
//	}
//	while (m % n != 0)
//	{
//		cha = m % n;
//		m = n;
//		n = cha;
//
//	}
//	printf("%d", n);
//
//
//
//
//
//}
//int main()
//{
//	int sum = 0, a = 0, b = 0;
//	int i = 1000;
//	for (i = 1000; i < 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d\n", i);
//			a++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d\n", i);
//			b++;
//
//		}
//		sum = a + b;
//		printf("%d\n", sum);
//	}
//
//
//
//}
//int main()
//{
//	int a = 0, b = 0, c = 0,i = 0;
//	for (i = 100; i < 200; i ++ )
//	{
//		for (a = 2; a < i; a++)
//		{
//
//			if (i % a == 0)
//				break;
//		}
//		if (a == i)
//		{
//			c++;
//			printf("%d\n", i);
//		}
//		
//
//
//
//
//	}
//
//	printf("%d\n", c);
//
//	return 0;
//
//
//
//
//}
//int main()
//{
//	int i = 0, c = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//			c++;
//		if (i / 10 == 9)
//			c++;
//			
//	}
//	printf("%d\n", c);
//	return 0;
//
//}
//
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i < 100; i++)
	{

		sum +=flag* 1.0 / i;
		flag = -flag;

	}
	printf("%f\n", sum);


	return 0;
}