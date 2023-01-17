#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // sqrt需要包含math.h
int main()
{
	// 输入a，b，c
	double a, b, c, p, s;
	scanf("%lf %lf %lf", &a, &b, &c);
	// 是否能构成三角形
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a * a + b * b == c * c)
		{
			printf("Rtriangle\n");
		}
		else 
		{
			printf("Triangle\n");
		}
	}
	else
	{
		// 无法构成三角形，程序结束。
		printf("Notriangle\n");
		return 0;
	}
	// 求三角形的面积
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	// 输出结果
	printf("s=%f", s);
	return 0;
}