#include<stdio.h>
void main()
{
	int n, a1, a2, a3;
	printf("请输入三位整数：");
		scanf_s("%d", &n);
		a1 = n / 100;
		a2 = n / 10 % 10;
	a3 = n % 10;
	printf("%d%d%d\n", a3, a2, a1);
}