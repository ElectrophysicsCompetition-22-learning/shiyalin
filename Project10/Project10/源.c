#include<stdio.h>
void main()
{
	int month, age;
	float price = 200, money;
	printf("请输入旅游月份：");
	scanf_s("%d", &month);
	printf("请输入你的年龄：");
	scanf_s("%d", &age);
	if (month >= 5 && month <= 10)
		if (age >= 60) money = 0;
		else if (age <= 14) money = price / 2;
		else money = price;
	else
		if (age >= 60) money = 0;
		else if (age <= 14) money = price * 0.8 / 2;
		else money = price * 0.8;
	printf("您的购票价格为：%.2f", money);
}