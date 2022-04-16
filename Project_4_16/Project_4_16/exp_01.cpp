#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <math.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fputs("hello\n",pf);
//	fputs("world\n", pf);
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);
//	
//	return 0;
//}

struct S
{
	int n;
	float a;
	char arr[10];
};


int main()
{
	struct S s = {100, 3.14, "hello bit"};
	struct S tmp = { 0 };
	char buf[1024];
	
	sprintf(buf, "%d   %f   %s", s.n, s.a, s.arr);
	sscanf(buf, "%d %f %s", &tmp.n, &tmp.a, tmp.arr);
	printf("%d %f %s", tmp.n, tmp.a, tmp.arr);

	

	return 0;
}