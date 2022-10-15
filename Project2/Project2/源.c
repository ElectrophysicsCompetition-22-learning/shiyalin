#include<stdio.h>
main()
{
	int a, i = 0, j = 0;
loop:scanf_s("%d", &a);
if (a != 0)
{if(a>0)
i = i + 1;
else
j = j + 1;
goto loop;
}
printf("\ni=%d j=%d\n", i, j);
}