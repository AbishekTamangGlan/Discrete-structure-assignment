//programt o compute a^n, b^n mod m, linear search, etc by using recursion.

#include<stdio.h>
long int pow(int x, int y);
int mod(long int x, int y);
int main()
{
	int a, b,n,m;
	long int a_pow, bn_mod;
	
	printf("enter the value of a and n:");
	scanf("%d %d",&a,&n);
	printf("\n enter the value of b and m:");
	scanf("%d %d",&b,&m);
	a_pow=pow(a,n);
	printf("\nThe value of %d^%d=%ld", a , n , a_pow);
	bn_mod=mod(pow(b,n),m);
	printf("\nThe value of (%d^%d)mod %d=%d",b,n,m,bn_mod);
}

long int pow(int x, int y)
{
	while(y>=0)
	{
		if( x == 0)
		 return 0;
		if( y == 0)
		return 1;
		else
		return x*pow(x,y-1);
	}
}
int mod(long int x, int y)
{
	if(x<y)
	return x;
	else
	return mod(x-y,y);
}
