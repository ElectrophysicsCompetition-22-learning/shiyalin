#include<stdio.h>
int main()
{
	int y, leap;
	printf("������һ����ݣ�");
	scanf_s("%d",&y);
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		leap =1;
	else
		leap =0;
	if (leap==1)
		printf("%d��һ�����ꡣ", y);
	else
		printf("%d����һ������", y);
}