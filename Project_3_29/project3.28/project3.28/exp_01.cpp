#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '9' || ch < '0')
//			continue;
//			putchar(ch);
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		    continue;
//		printf("%d\n", i);
//	}
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int  arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		printf("%d\n", arr1 [i]);
//	}
//
//
//
//
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//
//}
//int main()
//{ 
//	int i = 0;
//	do
//	{
//		
//		
//		
//		printf("%d", i);
//		i++;
//		
//	} while (i <= 10);
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int t = 1;
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		t = t*i;
//		
//
//	}
//	printf("%d", t);
//
//
//	return 0;
//}
int main()
{
	int a = 0, i = 0, c = 1;
	int b = 1, t = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (c = 1; c <= i; c++)
		{
			b = b * c;
			
		}
		printf("%d\n", b);
		t = t + b;
		b = 1;


	}
	printf("%d\n", t);



}