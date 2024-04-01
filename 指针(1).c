#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* 指针=&变量，*指针=指针指定的变量的值 */
//int main()
//{
//	int a, b, t;
//	scanf("%d%d", &a,&b);
//	int*p;
//	p=&a;
//	int*q;
//	q=&b;
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	printf("从小到大排序为%d\t%d\n", *p, *q);
//	return 0;
//}
//int main()
//{
//	int* p, a = 5;
//	p = &a;
//	printf("%d", *p);
//	return 0;
//}

/* 指针=&数组名[某数]，*指针=指针指定变量的值，指针+1=&数组名[某数+1] */
//int main()
//{
//	int* p, a[5];
//	p = &a[0];
//	for (int i = 0; i <= 4; i++)
//	{
//		scanf("%d", &a[i]);
//		*(p+i) = *(p+i) * 2;
//		printf("%d\t", *(p+i));
//	}
//	return 0;
//}
//int main()
//{
//	int a[5];
//	int i, * p;
//	p = &a[0];
//	printf("请输入5个整数\n");
//	for (i = 0; i <= 4; i++)
//	{
//		scanf("%d", p + i);
//		*(p + i) = *(p + i) * 2;
//	}
//	printf("加倍后的各整数为:\n");
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d\t", *(p + i));
//	}
//	printf("\n");
//	return 0;
//} 

/* &数组名[某数]=数组名+某数  数组名[某数]=*(数组名+某数) */

/*指针变量与一维数组相关函数
函数声明:数组名[]=*p 
函数解释:数组名[i]=*(p+i)
函数使用:数组名=q(使用前需要先关联)*/

/*指针=&数组名[a][b],*指针=指针指定变量的值，指针+i=&(数组名[a][b]后面的第i个元素) */
//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,6,5,4,3,2,1 };
//	int* p;
//	p = &a[0][0];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (i == 2)
//			{
//				printf("%d",*(p+i+j+6));
//			}
//			else
//			{
//				if (i == 1)
//				{
//					printf("%d", *(p + i + j + 3));
//				}
//				else
//				{
//					printf("%d", *(p + i + j));
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,6,5,4,3,2,1 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%d\n", a[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 1,2,3,4,5,6,6,5,4,3,2,1 };
//	int* p;
//	for(p = &a[0][0]; p <= a[2][3]; p++);
//	{
//		if ((p - &a[0][0]) % 4 == 0)
//		{
//			printf("\n");
//		}
//		printf("%d\t", *p);
//	}
//	printf("\n");
//	return 0;
//}