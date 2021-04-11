#include<stdio.h>
#include<stdlib.h>
long int binary_add(int a, int b)
{	
	
	int carry=0,mid, l=0, p=1;
	int sum=0;
	while(a!=0||b!=0)
	{ 
		mid=(a%10+b%10+carry)%2;
		carry=(a%10+b%10+carry)/2;
		sum=p*mid+sum;
		p=p*10;
		a=a/10;
		b=b/10;
	}
	if(carry!=0)
	{
		sum=p*carry+sum;
	}
	
	return sum;
}
	int binary_product(int a,int b)
{
	int i;
	int mult=0;
	for(i=0;i<b;i++)
	{
		mult=binary_add(mult,a);
	}
	return mult;
}
int binary_division(int a, int b)
{	int i,res,count=0,twoscomp;
	if(a<b)
	{
		return 0;
	}
	res = a;
	twoscomp =binary_add(~b,1);
	for(i=0;res>0;i++)
	{
		res =binary_add(res,twoscomp);
		if(res<=0)
		{
			if(res==0)
			{
				count=binary_add(count,1);
			}
			break;
		}
		else
		{
			count=binary_add(count, 1);
		}
	}
	
	return count;
}
	
  

int main()
{
	int a,b,add,division;
	long int product;
	printf("enter the first binary number:");
	scanf("%d",&a);
	printf("enter the second binary number:");
	scanf("%d",&b);
		add=binary_add(a,b);
	printf("\nthe addition is :%d",add);
		product=binary_product(a,b);
	printf("\nthe multiplication is :%ld",product);
		division=binary_division(a,b);
	printf("\n the division is:%d",division);
	return 0;
}
