#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a1,a2,a3,a4;
	printf("\nNhap so nguyen a1 = ");
	scanf("%d",&a1);
	printf("\nNhap so nguyen a2 = ");
	scanf("%d",&a2);
	printf("\nNhap so nguyen a3 = ");
	scanf("%d",&a3);
	printf("\nNhap so nguyen a4 = ");
	scanf("%d",&a4);
	if(a1 >a2)
	{
		if(a1>a3)
		{
			if(a1>a4)
			{
				printf("\nso nguyen lon nhat la = %d",a1);
			}
			else
			{
				printf("\nso nguyen lon nhat la = %d",a4);
			}
		}
		else if(a3>a4)
		{
			printf("\nso nguyen lon nhat la = %d", a3);
		}
		else 
		{
			printf("\nso nguyen lon nhat la = %d", a4);
		}	
			
	}
	else if(a2>a3)
	{
		if (a2>a4)
		{
			printf("\nso nguyen lon nhat la = %d", a2);	
		}
		else 
		{
			printf("\nso nguyen lon nhat la = %d", a4);
		}
	}
	else if(a3>a4)
	{
			printf("\nso nguyen lon nhat la = %d", a3);	
		}
		else 
		{
			printf("\nso nguyen lon nhat la = %d", a4);
	}
	if(a1 <a2)
	{
		if(a1<a3)
		{
			if(a1<a4)
			{
				printf("\nso nguyen nho nhat la = %d",a1);
			}
			else
			{
				printf("\nso nguyen nho nhat la = %d",a4);
			}
		}
		else if(a3<a4)
		{
			printf("\nso nguyen nho nhat la = %d", a3);
		}
		else 
		{
			printf("\nso nguyen nho nhat la = %d", a4);
		}	
			
	}
	else if(a2<a3)
	{
		if (a2<a4)
		{
			printf("\nso nguyen nho nhat la = %d", a2);	
		}
		else 
		{
			printf("\nso nguyen nho nhat la = %d", a4);
		}
	}
	else if(a3<a4)
	{
			printf("\nso nguyen nho nhat la = %d", a3);	
		}
		else 
		{
			printf("\nso nguyen nho nhat la = %d", a4);
	}
	return 0;
}
