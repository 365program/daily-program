#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
 


//int my_int_cmp(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//
//}
//
//void Swap(char*  duf1, char*  duf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *duf1;
//		tmp = *duf1;
//		*duf1 = *duf2;
//		*duf2 = tmp;
//		duf1++;
//		duf2++;
//		
//	}
//
//}
//
//
//void my_qsort(void* base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + width * j, (char*)base + width * (j + 1)) > 0)
//			{
//				Swap((char*)base + width * j, (char*)base + width * (j +     1),width);
//			}
//		}
//
//	}
//
//}
//
//
//
//
//void text1()
//{
//	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_qsort(arr, sz, sizeof(arr[0]), my_int_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//
//}
//int main()
//{
//	text1();
//
//
//
//	return 0;
//}

//void reverse(char* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		char tmp = *arr;
//		*arr = *(arr + sz - i - 1);
//		*(arr + sz - i -1) = tmp; 
//		arr++;
//	}
//
//}
//
//
//
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", &arr);
//	int len =  strlen(arr);
//	reverse(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//
//	return 0;
//
//}

//void reverse(char* str)
//{
//	int i = 0;
//	char* left = str;
//	int len = strlen(str);
//	char*  right = str+len - 1;
//	
//	for (i = 0; i < len / 2; i++)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s\n", arr);
//	/*reverse(arr);*/
//	int i = 0;
//	int count = 0;
//	while (1)
//	{
//		if (arr[i] == '\0')
//		{
//		
//		   break;
//	    }
//		count++;
//		i++;
//	
//	printf("%d", count);
//	
//
//
//	return 0;
//}

//int main()
//{
//	char arr[100] = "abcd ef";
//	int i = 0;
//	int j = 0;
//	while (1)
//	{
//		if (arr[i] == '\0')
//		{
//			break;
//		}
//		j++;
//		i++;
//	}
//	printf("%d", j);
//
//	return 0;
//}

//求水仙花数
//12345
//求出每个位子上的数
//求出位数

//int power(int x, int y)
//{
//	int i = 0;
//	int z = 1;
//	for (i = 0; i < y; i++)
//	{
//		z = z * x;
//	}
//	return z;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	int arr[7] = { 0 };
//	int sum = 0;
//	int t = 1;
//	
//	for (i = 1; i < 100000; i++)
//	{
//		while (t)
//		{
//			int t = i;
//			arr[count] = t % 10; //arr[i] 每一位的大小
//			t = t / 10;           
//			count++; //count 位数
//		}
//		for (i = 0; i < count; i++)
//		{
//			sum = sum + power(arr[i], count);
//		}
//		if (i == sum)
//		{
//			printf("%d", i);
//		}
//	}
//
//	return 0;
//}
 

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			
//			tmp = tmp / 10;
//			count++;
//		}
//		 tmp = i;
//		while (tmp)
//		{
//			sum = sum + power(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//
//	return 0;
//}
////给你20元；一瓶汽水一元两空瓶换一瓶
//int main()
//{
//	int money = 20;
//
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int sum = 0;
//	do
//	{
//		sum = sum + input / 2;
//		input = input / 2;
//
//
//
//	} while (input);
//	printf("%d", sum);
//
//
//	return 0;
//}

//void move(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left < right)
//	{
//
//
//		//从左边开始找一个奇数 
//
//		while (left < right && arr[left] % 2 == 0)
//		{
//			left++;
//		}
//
//		//从右边开始找一个偶数
//		while (left < right && arr[right] % 2 == 1)
//		{
//			right--;
//		}
//		if (left < right)
//
//			//交换双方位置
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//
//
//	}
//}
//
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//		for (int i = 0; i < sz; i++)
//		{
//			printf("%d", arr[i]);
//		}
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int f = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (f = 1; f <= 5; f++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (f == 4) == 1 )&&
//							((c == 1) + (d == 2) == 1 )&&
//							((c == 5)+ (d == 3) == 1 )&&
//							((f == 4) + (a == 1) == 1 )&&
//							a * b * c * d *f ==120 
//							)
//						{
//							printf("%d  %d  %d  %d  %d", a, b, c, d, f);
//						}
//					}
//				}
//			}
//		}
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//
//
//	return 0;
//}


//void left_move(char* arr, int k)
//{
//	assert(arr);
//	for(int j = 0; j < k; j ++)
//	{
//		int i = 0;
//		int len = 6;
//		char tmp = *arr;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(arr + j) = *(arr + j + 1);
//
//		}
//		*(arr + len -1) = tmp;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
//
////void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//
//		}
//		*(arr + len -1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = " abcdef";
//	left_move(arr, 3);
//	printf("%s\n", arr);
//
//
//	return 0;
//}
//三步反转法
// abcdef
// bafedc
// cdefab
//
//

/*void reverse(char* duf1, char* duf2)
{
	int len = duf2 - duf1;
	int i = 0;
	char tmp = '0';
	for (i = 0; i < (len+1) / 2; i++)
	{
		tmp = *(duf1 + i);
		*(duf1 + i) = *(duf2 - i);
		*(duf1 + len - i) = tmp;

	}
}

void left_move(char**//* arr, int k)
{*/
	/*int len = strlen(arr);
	int i = 0;
	char tmp = *arr;
	for (i = 0; i < k / 2; i++)
	{
		 tmp = *(arr + i);
		*(arr + i) = *(arr + k - 1 - i);
		*(arr + k - 1 - i) = tmp;

	}
	
	for (i = 0; i < (len - k) / 2; i++)
	{
		tmp = *(arr + k + i );
		*(arr + i + k) = *(arr + len - 1 - i);
		*(arr + len - 1 - i) = tmp;
	}
	
	for (i = 0; i < len / 2; i++)
	{
		 tmp = *(arr + i);
		*(arr + i) = *(arr + len - 1 - i);
		*(arr + len - 1 - i) = tmp;
	}*/
	/*assert(arr);
	int len = strlen(arr);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr+len- 1);

	
}

int main()
{
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_move(arr, k);
	printf("%s\n", arr);




}*/


//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//void left_reverse(char* arr,int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr + k -1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//
//
//int is_left_move(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_reverse(arr1, 1);
//		int ret = strcmp(arr1, arr2); 
//		if (ret == 0)
//		{
//			return 1;
//		}
//		
//	}
//	return 0;
//
//
//}
//
//int main()
//{
//	int k = 1;
//	char arr1[] = "abcdef";
//	left_reverse(arr1,k);
//	printf("%s", arr1);
//	char arr2[] = "cdecab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes");
//	}
//	else
//		printf("No");
//
//
//	return 0;
//}
//
////abcdef
////bcdefaabcdef
//int  arr[3][4];

//int arr2[3][4];
//int(*p)[4] = arr2;
//int((*p)[3])[4] = &arr2;


//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1,len1);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes");
//
//	}
//	else
//		printf("No");
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[4][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7} };
//	int input = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &input);
//	int min = arr[0][0];
//	int max = arr[3][3];
//	if (input > max || input < min)
//	{
//		printf("您查找的数超出矩阵范围");
//	}
//	else
//	{
//		//查找数组在那个小矩阵范围内
//		for (i = 0; i < 4;i++ )
//		{
//			if (input >= arr[i][i])
//			{
//				count++;
//			}
//			else
//			{
//				for (i = count-1; i <= count ; i++)
//				{
//					for (int j = count-1; j <= count ; j++)
//					{
//						if (arr[i][j] == input)
//						{
//							printf("找到了%d%d", i, j);
//							
//						}
//					}
//				}
//			}
//			
//
//		}
//		if (count == 4)
//		{
//			printf("存在%d%d", 3, 3);
//		}
//		
//	}
//
//
//	return 0;
//}

//int main()
//{
//
//
//
//}