#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*scanf��ʹ��*/
//int main()
//{
//	//ʹ�ñ��������ʼ��
//	int num1 = 0;//��ʼ��
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

/*����sqrt��䣨1����x=sqrt��x*x����*/
//int main()
//{
//	double a, b, c, s, area;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("%lf\t%lf\t%lf\n", a, b, c);
//	printf("�������ε������area=%lf\n", area);
//	return 0;
//}
/*����sqrt��䣨2��*/
//int main()
//{
//	double a, b, c, d, x1, x2;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	d = sqrt(b * b - 4 * a * c);
//	x1 = (-b + d) / (2 * a);
//	x2 = (-b - d) / (2 * a);
//	printf("x1=%lf\n", x1);
//	printf("x2=%lf\n", x2);
//	return 0;
//}

/*getchar��putchar����ʹ�ã�1��
a=getchar();��char a;\n   scanf("%c",&a);
b=putchar(a);��printf("%c",a);*/
//int main()
//{
//	char a,b;
//	printf("������һ����д��ĸ:");
//	a = getchar();
//	a = a + 32;
//	b = putchar(a);
//	printf("����ĸ��СдΪ:%c\n",a);
//	return 0;
//	/*getchar��scanf���ͬ����������
//	putchar�����������*/
//}
/*getchar��putchar����ʹ�ã�2��*/
//int main()
//{
//	char a, b, c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	a = a + 32;
//	b = b + 32;
//	c = c + 32;
//	putchar(a);
//	putchar(b);
//	putchar(c);
//  putchar(\n);
//	return 0;
//}

/*����pow����ʹ��*//*j=pow(2,3);��j=2*2*2 */
//int main()
//{
//	double r, n, p;
//	r = -0.1;
//	n = 10;
//	p = pow(1 + r, n);
//	printf("10���������н��������������%lf\n", p);
//	return 0;
//}

/*����(int)(���ʽ)��ʹ�ã���ֻȡĳ��������������*/
//int main()
//{
//	float a;
//	printf("���������Ϊ");
//	scanf("%f", &a);
//	int b, c, d;
//	b = (int)(a / 100);
//	c = (int)((a / 10) - (b * 10));
//	d = (int)(a - (b * 100) - (c * 10));
//	printf("�����ֵĸ�λΪ % d\n�����ֵ�ʮλΪ % d\n�����ֵİ�λΪ % d\n", d, c, b);
//	return 0;
//}
/*��int�������ʽ��;�����ʽ���ǿ��ת������
ע���ʽ�еó�������Ҫ��ǰ���壬��������������е�b*/
//int main()
//{
//	double a;
//	int b;
//	scanf("%lf", &a);
//	(int)(b = a+1);
//	printf("����С������������Ϊ%d", b);
//	return 0;
//}

/*if����ʹ��*/
//�����ʽ:
//if ()
//{
//
//}
//else
//{
//
//}
/*if����ʹ�ã�1��*/
//int main()
//{
//	int a;
//	printf("����һ������");
//	scanf("%d", &a);
//	if (a > 60)
//	{
//		printf("�ﲩʿ˧\n");
//	}
//	else
//	{
//		printf("�ﲩʿ��˧\n");
//	}
//	return 0;
//}
/*if����ʹ�ã�2��*/
//int main()
//{
//	int x, y;
//	y = 0;
//	printf("����������x:");
//	scanf("%d", &x);
//	if (x <= 0)
//	{
//		if (x < 0)
//		{
//			y = -1;
//		}
//		else
//		{
//			y = 0;
//		}
//	}
//	else
//	{
//		y = 1;
//	}
//	printf("y=%d", y);
//}
/*if����ʹ�ã�3��*/
//int main()
//{
//	int a, b, t;
//	scanf("%d%d", &a, &b);
//	if (a>b)
//	{
//		a = a;
//		b = b;
//	}
//	else
//	{
//		t = b;
//		b = a;
//		a = t;
//	}
//	printf("%d\t%d\n", a, b);
//}
/*if����ʹ�ã�4��*/
//int main()
//{
//	int a, b, c, t;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d\t%d\t%d\n", a, b, c);
//	return 0;
//}

/*while����ʹ�ã�1��*/
//int main()
//{
//	int n = 1,sum = 0,a = 2;
//	while (n <= 50)
//	{
//		n = n + 1;
//		sum = sum + a;
//		a = n * 2;
//	}
//	printf("����Ľ����%d\n", sum);
//	return 0;
//}
/*while����ʹ�ã�2��*/
//int main()
//{
//	int n = 1, a = 2;
//	double chengji = 1;
//	while (n<=49)
//	{
//		n = n + 1;
//		chengji = chengji * a;
//		a = n * 2;
//	}
//	printf("����Ľ����%lf\n", chengji);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 2, n = 1, sum = 1;
//
//	while (n <= 50)
//	{
//		n = n + 1;
//
//		sum = sum * a;
//
//		a = a + 2;
//
//	}
//	printf("%d %d\n", n, a);
//	printf("%d\n", sum);
//	return 0;
//}
//����Ϊ��⣬���н����n = 51��a = 102��sum = 0
//
//����ԭ��:����Ľ��sum����ʹ��int����
//
//�����������sum��ʼֵ���double���͵�
//
//#include <stdio.h>
//int main()
//{
//
//	double sum = 1;
//	int a = 2, n = 1;
//
//	while (n <= 50)
//	{
//		n = n + 1;
//
//		sum = sum * a;
//
//		a = a + 2;
//
//	}
//	printf("%d %d\n", n, a);
//	printf("%lf\n", sum);
//	return 0;
//}
//��������������������������������
//
//��Ȩ����������Ϊ����ԭ�����£���ѭ CC 4.0 BY - SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӻͱ�������
//
//ԭ�����ӣ�https ://blog.csdn.net/qq_61866753/article/details/122413259
/*while����ʹ�ã�3��*/
//int main()
//{
//	int n = 2, a = 1;
//	while (n <= 100)
//	{
//		a = a * n;
//		n = n + 2;
//	}
//	printf("����Ľ����%d\n", a);
//	return 0;
//}
/*while����ʹ�ã�4��*/
//int main()
//{
//	int a = 1, n = 1, sum = 0;
//	while (n <= 20)
//	{
//		sum = sum + a;
//		n = n + 1;
//		a = a * n;
//	}
//	printf("��������%d\n", sum);
//	return 0;
//}

/*for����ʹ�ã�1��*/
//#include <stdlib.h>
//int main()
//{
//    int i;
//    int p = 1, sum = 0;
//    for (i = 1; i <= 20; i++)
//    {
//        p = p * i;
//        sum = sum + p;
//    }
//    printf("1!+2!+~~+20!=%d\n", sum);
//    printf("\n");
//    system("pause");
//    return 0;
//}
//268040729

/*ѭ������е�����*/
//С�����쿴����������һ����һ��������������ֻ�ܿ�150���ӣ�����
//150���Ӻ�С�����˶��ټ�������
//int main()
//{
//	float zongshichang = 0, shichang;
//	int n = 0;
//	while (zongshichang<=150)
//	{
//		scanf("%f", &shichang);
//		zongshichang = zongshichang + shichang;
//		n = n + 1;
//	}
//	printf("���ӳ�����%d������\n", n);
//	return 0;
//}

/*�����ʽ��i++��++i��i--��--i*/
//int main()
//{
//	int a, b;
//	a = 8;
//	printf("%d\n", ++a);
//	printf("%d\n", --a);
//
//	return 0;
//}

/*�����ʽ1�������2�����3����ʹ�� �����ϱ��ʽ1���������2�������ϱ��ʽ1�����������3*/
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	(a > b) ? printf("%d\t%d\n", b, a) : printf("%d\t%d\n", a, b);
//	return 0;
//}

/*switch����ʹ��*/
//swich(���ͱ��������ַ��ͱ���)
//{
//	case����1:���1;break;
//	case����2:���2;break;
//	:
//	:
//	:
//	case����n:���n;break;
//	default:���n + 1; break;
//}
/*switch����ʹ�ã�1��*/
//int main()
//{
//	char a;
//	printf("������ɼ��ȼ�");
//	scanf("%c", &a);
//	switch (a)
//	{
//	case 'A':printf("������Ϊ85��100"); break;
//	case 'B':printf("������Ϊ70��84"); break;
//	case 'C':printf("������Ϊ60��69"); break;
//	case 'D':printf("������Ϊ<60"); break;
//	default:printf("����ĳɼ��ȼ�������"); break;
//	}
//	return 0;
//}  

/*����%e��ʹ�ã����Խ��Ϊ���ֱ���ҪΪС��������С�����Ϊ0������
%a.be,�����aָ����������һ��վ�������ӣ�bΪС������λ��*/
//int main()
//{
//	printf("С���������%10.1e����",174.0);
//	return 0;
//}

