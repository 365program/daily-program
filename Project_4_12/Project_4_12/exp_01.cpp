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
//	char arr1[] = "2519375966@qq.com";
//	char p[] = "@.";
//	char* ret = NULL;
//	for (ret = strtok (arr1, p); *ret != NULL; ret =strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//
//	}
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "Xuzong Is HAIWANG";
//	int i = 0;
//	for (i = 0; i < strlen(arr1); i++)
//	{
//		if (islower(arr1[i]) != 0)
//		{
//			arr1[i] = toupper(arr1[i]);
//		}
//
//	}
//	printf("%s", arr1);
//
//
//	return 0;
//}

//void* my_memcpy(void* base, const void* src, int num)
//{
//	assert(base && src);
//	char* ret1 = (char*)base;
//	char* ret2 = (char*)src;
//	char* ret3 = (char*)base;
//	while (num--)
//	{
//		*ret1++ = *ret2++;
//		
//	}
//	return ret3;
//
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//
//int main()
//{
//	//char arr1[] = "guohang";
//	//char arr2[] = "bit";
//	///*memcpy(arr1, arr2, 3);
//	//printf("%s\n", arr1);*/
//	//my_memcpy(arr1, arr2, 3);
//	//printf("%s\n", arr1);
//	struct Stu sarr1[2] = { {"zhangsan",10},{"lisi", 20} };
//	struct Stu sarr2[3] = { 0 };
//	my_memcpy(sarr2, sarr1, sizeof(sarr1));
//	printf("%s", sarr2[1].name);
//	
//
//
//	return 0;
//}


//void* my_memmove(void* Dest, void* Src, int count)
//{
//	assert(Dest && Src);
//	void* ret = Dest;
//	char* dest = (char*)Dest;
//	char* src = (char*)Src;
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*dest = *src;
//			dest++;
//			src++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*(dest + count ) = *(src + count);
//			
//		}
//		return ret;
//	}
//}
//
//
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = {0};
//	int count = 5;
//	my_memmove(arr2, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//
//	return 0;
//}

//int my_memcmp(const void* Dest,const void* Src, int size_num)
//{
//	char* dest = (char*)Dest;
//	char* src = (char*)Src;
//	while (size_num  && *dest == *src)
//	{
//		dest++;
//		src++;
//		size_num--;
//	}
//	if (*dest > *src)
//	{
//		return 1;
//	}
//	else if (*dest < *src)
//	{
//		return -1;
//	}
//	else if(size_num == 0)
//		return 0;
//}
//
//
////int main()
////{
////	int arr1[] = { 1,0,3,4,5 };
////	int arr2[] = { 1,2,3,4,5 };
////	/*int ret = memcmp(arr1, arr2, 8);
////	printf("%d", ret);*/
////	int ret = my_memcmp(arr1, arr2, 8);
////	if (ret > 0)
////	{
////		printf("大于");
////	}
////	else if (ret == 0)
////	{
////		printf("等于");
////	}
////	else
////		printf("小于");
////
////
////	return 0;
////}
//
////内存设置;
////int main()
////{
////	char arr[10] = { 0 };
////	memset(arr, '3', 10);
////	for (int i = 0; i < 10; i++)
////	{
////		printf("%c", arr[i]);
////	}
////
////	return 0;
////}
//
//int main()
//{
//
//
//	return 0;
//}
struct s1
{
	char a;
	char b;
	int c;

};
struct s2
{
	char a;
	int b;
	char c;
};

int main()
{
	struct s1 ps = { 0 };
	struct s2 pr = { 0 };
	printf("%d\n", sizeof(s1));
	printf("%d\n", sizeof(s2));
	printf("%d", sizeof(double));


	return 0;
}