#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*scanf的使用*/
//int main()
//{
//	//使用变量建议初始化
//	int num1 = 0;//初始化
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

/*利用sqrt语句（1），x=sqrt（x*x）；*/
//int main()
//{
//	double a, b, c, s, area;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("%lf\t%lf\t%lf\n", a, b, c);
//	printf("该三角形的面积是area=%lf\n", area);
//	return 0;
//}
/*利用sqrt语句（2）*/
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

/*getchar与putchar语句的使用（1）
a=getchar();即char a;\n   scanf("%c",&a);
b=putchar(a);即printf("%c",a);*/
//int main()
//{
//	char a,b;
//	printf("请输入一个大写字母:");
//	a = getchar();
//	a = a + 32;
//	b = putchar(a);
//	printf("该字母的小写为:%c\n",a);
//	return 0;
//	/*getchar和scanf语句同样用于输入
//	putchar可以用于输出*/
//}
/*getchar与putchar语句的使用（2）*/
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

/*对于pow语句的使用*//*j=pow(2,3);即j=2*2*2 */
//int main()
//{
//	double r, n, p;
//	r = -0.1;
//	n = 10;
//	p = pow(1 + r, n);
//	printf("10年后他的年薪与今年相比增长了%lf\n", p);
//	return 0;
//}

/*对于(int)(语句式)的使用，即只取某个数的整数部分*/
//int main()
//{
//	float a;
//	printf("输入的数字为");
//	scanf("%f", &a);
//	int b, c, d;
//	b = (int)(a / 100);
//	c = (int)((a / 10) - (b * 10));
//	d = (int)(a - (b * 100) - (c * 10));
//	printf("该数字的个位为 % d\n该数字的十位为 % d\n该数字的百位为 % d\n", d, c, b);
//	return 0;
//}
/*（int）（表达式）;将表达式结果强制转成整型
注表达式中得出的整数要提前定义，如下面这个例子中的b*/
//int main()
//{
//	double a;
//	int b;
//	scanf("%lf", &a);
//	(int)(b = a+1);
//	printf("输入小数的整数部分为%d", b);
//	return 0;
//}

/*if语句的使用*/
//具体格式:
//if ()
//{
//
//}
//else
//{
//
//}
/*if语句的使用（1）*/
//int main()
//{
//	int a;
//	printf("输入一个数字");
//	scanf("%d", &a);
//	if (a > 60)
//	{
//		printf("猴博士帅\n");
//	}
//	else
//	{
//		printf("猴博士贼帅\n");
//	}
//	return 0;
//}
/*if语句的使用（2）*/
//int main()
//{
//	int x, y;
//	y = 0;
//	printf("请输入整数x:");
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
/*if语句的使用（3）*/
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
/*if语句的使用（4）*/
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

/*while语句的使用（1）*/
//int main()
//{
//	int n = 1,sum = 0,a = 2;
//	while (n <= 50)
//	{
//		n = n + 1;
//		sum = sum + a;
//		a = n * 2;
//	}
//	printf("计算的结果是%d\n", sum);
//	return 0;
//}
/*while语句的使用（2）*/
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
//	printf("计算的结果是%lf\n", chengji);
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
//以上为错解，运行结果：n = 51，a = 102，sum = 0
//
//错误原因:算出的结果sum过大，使得int爆了
//
//解决方法：将sum初始值搞成double类型的
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
//————————————————
//
//版权声明：本文为博主原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接和本声明。
//
//原文链接：https ://blog.csdn.net/qq_61866753/article/details/122413259
/*while语句的使用（3）*/
//int main()
//{
//	int n = 2, a = 1;
//	while (n <= 100)
//	{
//		a = a * n;
//		n = n + 2;
//	}
//	printf("计算的结果是%d\n", a);
//	return 0;
//}
/*while语句的使用（4）*/
//int main()
//{
//	int a = 1, n = 1, sum = 0;
//	while (n <= 20)
//	{
//		sum = sum + a;
//		n = n + 1;
//		a = a * n;
//	}
//	printf("计算结果是%d\n", sum);
//	return 0;
//}

/*for语句的使用（1）*/
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

/*循环语句中的难题*/
//小明今天看动漫，看了一集又一集，但是他今天只能看150分钟，请问
//150分钟后，小明看了多少集动漫？
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
//	printf("黄子晨看了%d集动画\n", n);
//	return 0;
//}

/*特殊句式，i++，++i，i--，--i*/
//int main()
//{
//	int a, b;
//	a = 8;
//	printf("%d\n", ++a);
//	printf("%d\n", --a);
//
//	return 0;
//}

/*（表达式1）？语句2：语句3；的使用 即符合表达式1，运行语句2；不符合表达式1，则运行语句3*/
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	(a > b) ? printf("%d\t%d\n", b, a) : printf("%d\t%d\n", a, b);
//	return 0;
//}

/*switch语句的使用*/
//swich(整型变量或者字符型变量)
//{
//	case常量1:语句1;break;
//	case常量2:语句2;break;
//	:
//	:
//	:
//	case常量n:语句n;break;
//	default:语句n + 1; break;
//}
/*switch语句的使用（1）*/
//int main()
//{
//	char a;
//	printf("请输入成绩等级");
//	scanf("%c", &a);
//	switch (a)
//	{
//	case 'A':printf("分数段为85～100"); break;
//	case 'B':printf("分数段为70～84"); break;
//	case 'C':printf("分数段为60～69"); break;
//	case 'D':printf("分数段为<60"); break;
//	default:printf("输入的成绩等级不合理"); break;
//	}
//	return 0;
//}  

/*测试%e的使用，测试结果为数字必须要为小数，哪怕小数点后为0，而且
%a.be,这里的a指的是输出结果一共站几个格子，b为小数点后的位数*/
//int main()
//{
//	printf("小明的身高是%10.1e厘米",174.0);
//	return 0;
//}

