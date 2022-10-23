/*#include<stdio.h>
void main()
{
	int i, num = 0;
	for (i = 1; i <= 100; i++)
	{
		printf("%-5d", i);
		num++;
		if (num == 6)
		{
			printf("\n");
			num = 0;
		}
	}
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("ret=%d\n", ret);
	return 0;
}