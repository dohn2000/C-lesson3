#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float n,s1,s2,s3,s4,s5;
	printf("\nnhap n = ");
	scanf("%f",&n);
	s1=0;
	s2=0;
	s3=0;
	s4=0;
	s5=0;
	while (n>=1)
	{
	s1= s1+n;
	s2= s2+n*n;
	s3= s3+1/n;
	s4= s4+1/(2*n);
	s5= s5+ 1/(2*n+1);
	n--;
	}
	printf("\nTong Bai1 = %f",s1);
	printf("\nTong Bai2 = %f",s2);
	printf("\nTong Bai3 = %f",s3);
	printf("\nTong Bai4 = %f",s4);
	printf("\nTong Bai5 = %f",s5);
	return 0;
}

