#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a1,b1,a2,b2,c1,c2,x,y;
	printf("\nnhap a1 ");
	scanf("%f",&a1);
	printf("\nnhap a2 ");
	scanf("%f",&a2);
	printf("\nnhap b1 ");
	scanf("%f",&b1);
	printf("\nnhap b2 ");
	scanf("%f",&b2);
	printf("\nnhap c1 ");
	scanf("%f",&c1);
	printf("\nnhap c2 ");
	scanf("%f",&c2);
	y = (c1*a2-c2*a1)/(b1*a2-b2*a1);
	x = (c1-b1*y)/a1;
	if (a1/b1==a2/b2)
	{
		if (-c1/b1==-c2/b2)
		{		
			printf("\nphuong trinh co vo so nghiem");
		}
		else 
		{
			printf("\nphuong trinh vo nghiem");
		}
	}
	else 
	{
		printf("\ngia tri b = %f", y);
		printf("\ngia tri a = %f", x);
	}
	
	return 0;
}
