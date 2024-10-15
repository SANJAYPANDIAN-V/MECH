#include<stdio.h>
#include<conio.h>
void swap(int a , int b)
{
	int temp = a ;
	a = b ;
	b = temp ;
	
	printf("\n After swapping , The value of a and b %d and %d " , a , b);
}
int main()
{
	int a = 10 , b = 20 ;
	
	
	printf("Before swapping , The value of a and b is %d and %d " , a , b);
	
	swap(a , b);
	
	getch() ;
	return 0;
	
}
