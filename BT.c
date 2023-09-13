#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	printf("\nnhap hai so a = ");
	scanf("%d",&a);
	printf("\nnhap hai so b = ");
	scanf("%d",&b);
	if(a > b)
	{
		printf("\nso lon nhat = %d ",a );
		printf("\nso nho nhat = %d ",b );
	}
	else 
	{
		printf("\nso lon nhat = %d ",b);
		printf("\nso nho nhat = %d ",a);
	}
	
	int x,y;
	printf("\nnhap hai so x = ");
	scanf("%d",&x);
	printf("\nnhap hai so y = ");
	scanf("%d",&y);
	if ( y == 0)
	{
		printf("\nx/y khong co ket qua");
	}
	else
	{
		printf("\nx/y co ket qua = %d", x/y);
	}
	return 0;
}
