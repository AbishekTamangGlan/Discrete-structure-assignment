#include<stdio.h>
#include<stdlib.h>
//function to calculate extetnded euclidean
int gcdExtended(int a,int b,int *x,int *y)
{
	if(a==0)
	{
		*x=0;
		*y=1;
		return b;
	}
	int x1,y1;
	int gcd=gcdExtended(b%a,a,&x1,&y1);
	*x=y1-(b/a)*x1;
	*y=x1;
	return gcd;
}

int rey(int a,int b)
{
	int x,y;
	int g=gcdExtended(a,b,&x,&y);
	return x;
}
int main()
{
	long long int num1,num2,n1[4],n2[4],m[4],y[4],a[4],temp,temp1;
	long long int sm[4]={99,98,97,95};
	long long int lm=sm[0]*sm[1]*sm[2]*sm[3];
	long long int sum=0;
	printf("enter two large integers:\n");
	scanf("%lld %lld",&num1,&num2);
	for(int i=0;i<4;i++)
	{
		n1[i]=num1%sm[i];
		n2[i]=num2%sm[i];
		m[i]=lm/sm[i];
		a[i]=n1[i]+n2[i];
		a[i]=a[i]%sm[i];
	}
	for(int i=0;i<4;i++)
	{
		temp=m[i]%sm[i];
		y[i]=rey(temp,sm[i]);
		
	}
	for(int i=0;i<4;i++)
	{
		temp1=a[i]*m[i]*y[i];
		sum=sum+temp1;
	}
	sum=sum%lm;
	printf("The sum of the two integer is: %lld.",sum);
	return 0;
}

