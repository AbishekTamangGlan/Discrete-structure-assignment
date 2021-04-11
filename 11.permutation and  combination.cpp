#include<stdio.h>
#include<stdlib.h>
long int fact(int n)
{
	while(n>=0)
	{
		if(n==0||n==1)
		return 1;
		else 
		return n*fact(n-1);
	}
}
long int permutation(int n, int r)
{	long int p;
	p=fact(n)/fact(n-r);
	return p;
}
long int combination(int n, int r,int p)
{
	long int c;
	c=p/fact(r);
	return c;
}
int main()
{
	int n,r;
	long int perm,com;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the value of r:");
	scanf("%d",&r);
	perm=permutation(n,r);
	printf("\n Permutaion=%ld",perm);
	com=combination(n,r,perm);
	printf("\n Combination=%ld",com);
	return 0;
}
