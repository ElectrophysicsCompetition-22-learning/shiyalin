#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main() {
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	
	scanf("%s", password);//�������룬�������password������
	//��������ʣһ��'\n'
	getchar();
	//��ȡ��һ��'\n'
	printf("��ȷ�ϣ�Y/N):>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
}