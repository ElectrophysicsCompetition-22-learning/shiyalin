/*13��1��C*/
#include<stdio.h >
#define PI 3.1415926  /*����������ų���*/
main() 
{float perimeter,area,radius,volume;
printf("input radius=:");  /*��ʾ��ʾ�ַ���*/
scanf("%f",& radius);  /*����Բ�İ뾶*/
perimeter=2.0*PI* radius;
area=PI*radius*radius; 
volume=4/3.0*PI*radius*radius*radius;
printf("perimeter=%10.4f\n area=%10.4f\n volume=%10.4f\n",perimeter,area,volume);
}
