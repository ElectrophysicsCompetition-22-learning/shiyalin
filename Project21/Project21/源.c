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
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum=0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//дһ�����룬��arr���飨����ģ����ҵ�7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±���:%d\n", i);
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");
	return 0;
}
