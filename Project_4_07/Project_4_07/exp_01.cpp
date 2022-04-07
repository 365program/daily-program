#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src)
//{
//	/*while (*dest++ = *src++)
//	{
//		;
//	}*/
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//
//}
//
//
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//
//	return 0;
//}
//
//

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//
//	}
//
//
//	return 0;
//}
//
////int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 15; i++)
//	{
//		printf("%s\n", "hehe");
//		arr[i] = 0;
//
//	}
//
//
//	return 0;
//}



//char* my_strcpy(char* dest, const char* scr)
//{
//	char* ret = dest;
//	
//	assert( dest != NULL);
//	assert( scr != NULL);
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n",my_strcpy(arr1, arr2));
//
//	return 0;
//}



int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;

	}
	return count;

}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}

//int main()
//{
//	int a = 12;
//	printf("%d", a);
//	return 0;
//}