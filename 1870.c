#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float d,a,b,c;
	printf("\nnhap a = ");
	scanf("%f",&a);
	printf("\nnhap b = ");
	scanf("%f",&b);
	printf("\nnhap c = ");
	scanf("%f",&c);
	d= b*b -4*a*c;
	if (d <0)
	{
		printf("\nphuong trinh vo nghiem");
	}
	else if (d>0)
	{
		printf("\nphuong trinh co nghiem x1 = %f", (-b+sqrt(d))/(2*a));
		printf("\nphuong trinh co nghiem x2 = %f", (-b-sqrt(d))/(2*a));
	}
	else 
	{
		printf("\nphuong trinh co nghiem = %f", -b/(2*a));		
	}
	return 0;
}
