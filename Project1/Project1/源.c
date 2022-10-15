#include<stdio.h>
void main()
{
	int x, a;
	x = (a = 3, 6 * 3);/*a=3,x=18*/
	printf("%d,%d\n", a, x);
	x = a = 3, 6 * a;/*a=3,x=3*/
	printf("%d,%d\n", a, x);

}