#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	
	scanf("%s", password);//输入密码，并存放在password数组中
	//缓冲区还剩一个'\n'
	getchar();
	//读取下一个'\n'
	printf("请确认（Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
}