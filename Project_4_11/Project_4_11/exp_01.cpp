#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>

// 1 2 3 
// 4 5 6
// 7 8 9
//int Find_Num(int arr[3][3], int k, int *px ,int *py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px-1 && y >= 0)
//	{
//
//		if (arr[x][y] == k)
//		{
//			printf("找到了");
//			*px = x;
//			*py = y;
//			return 1;
//		}
//
//		else
//		{
//			if (k > arr[x][y])
//			{
//				x++;
//			}
//			else if (k < arr[x][y])
//			{
//				y--;
//			}
//		}
//
//	}
//	return 0;
//}

//int Find_Num(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1&& y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] == k)
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//
//}
//
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int input = 0;
//	int x = 3;
//	int y = 3;
//	scanf("%d", &input);
//	int ret = Find_Num(arr, input, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了,下标是%d %d", x, y);
//	}
//	else
//		printf("找不到");
//
//
//
//}

//int my_strlen(const char* base)
//{
//	assert(base);
//	int count = 0;
//	while (*base++)
//	{
//		count++;
//	}
//	return count;
//}
//
//
//
//int main()
//{
//
//	const char* pa = "ancde";
//	int ret = my_strlen(pa);
//	printf("%d", ret);
//	
//
//	return 0;
//}
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	char* ret = str1;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
// 
//
//
//	return 0;
//
//}
//char* my_strcat(char* str1, char* str2)
//{
//	char* ret = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return str1;
//
//}
//
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//
//
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 )
//	{
//		if (*str1 == '\0')
//		{
//
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return(*str1 - *str2);
//	
//}
//
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcde";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret == 0)
//	{
//		printf("相等");
//	}
//	else if (ret > 0)
//	{
//		printf("arr1>arr2");
//	}
//	else if (ret < 0)
//	{
//		printf("arr2 > arr1");
//	}
//
//
//	return 0;
//}

//int my_strncmp(char* str1, char* str2, int count)
//{
//	while (*str1 == *str2 && count)
//	{
//		str1++;
//		str2++;
//		count--;
//
//	}
//	if (count)
//	{
//		return (*str1 - *str2);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcdf";
//	int ret = my_strncmp(arr1, arr2, 6);
//	if (ret == 0)
//		printf("相等");
//	if (ret > 0)
//		printf("大于");
//	if (ret < 0)
//	{
//		printf("小于");
//	}
//
//
//
//	return 0;
//
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (str2 == NULL)
//	{
//		return 0;
//	}
//	while (*str1)
//	{
//		while (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		str1++;
//	}
//
//
//
//}
//
//abbbcdef
//bbdef
//
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if(!*p2)
	{
		return (char*)p1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && ( * s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (!*s2)
		{
			return cur;
		}
		cur++;

	}
	return NULL;

}


int main()
{
	const char* p1 = "abcdefsadqwdfw";
	const char* p2 = "def";
	char* p =my_strstr(p1, p2);
	if (p == NULL)
	{
		printf("找不到");
	}
	else
		printf("%s", p);


	return 0;
}

//int main()
//{
//	int i = 0;
//	while (i < 11)
//	{
//		while (i < 10)
//		{
//			i++;
//		}
//		i++;
//		printf("%d", i);
//	}
//
//	return 0;
//}