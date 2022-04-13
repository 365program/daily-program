#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <math.h>

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s1;
//	printf("%d", sizeof(s1));
//
//
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//};
//
//
//
//int main()
//{
//	union Un u1;
//	printf("%d", sizeof(u1));
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int ret = *((char*)&a);
//	if (ret == 1)
//	{
//		printf("Ð¡¶Ë");
//	}
//	else
//	{
//		printf("´ó¶Ë");
//	}
//
//
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//enum
//{
//	ab,
//	cd
//};
//int main()
//{
//	printf("%d", 1);
//	return 0;
//}


#define MAX         1000
#define MAX_NAME    20
#define MAX_SEX     5
#define MAX_TELE    12
#define MAX_ADDR    30

	struct PeoInfo
	{
		char name[MAX_NAME];
		int age;
		char sex[MAX_SEX];
		char tele[MAX_TELE];
		char addr[MAX_ADDR];
	};

	struct Contact
	{
		struct PeoInfo date[MAX];
		int size;
	};

	enum Option
	{
		EXIT,
		ADD,
		DEL,
		SEARCH,
		MODIFY,
		SHOW,
		SORT,

	};
	int main()
	{
		printf("%d", 1);
		return 0;
	}