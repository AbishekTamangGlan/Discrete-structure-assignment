#include<stdio.h>
#include<stdlib.h>
struct compound{
	int p;
	int q;
};
void displayinput(struct compound A[6])
{ int i;
	for(int i=0;i<4;i++)
	{
		if(!((A[i].p==0 && A[i].q== 0) || (A[i].p== 1 && A[i].q== 1) || (A[i].p== 0 &&A[i].q== 1) || (A[i].p== 1 && A[i].q== 0)))
		{
		printf("\nWRONG INPUT ! Enter binary values of p and q ");
		exit(0);
		}
	}
	printf(" \mThe inputs are:\n\n");
	printf("\n p\t\tq");
	printf("\n------------------------------\n");
	for(i=0;i<4;i++)
	{
		printf("\n %d\t\t%d\n",A[i].p,A[i].q);
		
	}
}
void displayoutput(struct compound A[6])
{
	int i;
	int r[6];
	for(int i=0;i<4;i++)
	{
		if(A[i].p==0 && A[i].q== 0)
		{ 
		r[i]=0;
		}
		else if(A[i].p==0 && A[i].q== 1)
		{ 
		r[i]=1;
		}
		else if(A[i].p==1 && A[i].q== 0)
		{ 
		r[i]=0;
		}
		else
		{ 
		r[i]=1;
		}
	}
	printf("\n The truth table for compound proposition is:\n");
	printf("\n p\t q\t\t r=(pv~q)-->(p^q) \n)");
	printf("\n--------------------------------------------------------\n");
	for(i=0;i<4;i++)
	{
		printf("\n %d\t %d\t\t %d\n",A[i].p,A[i].q,r[i]);
	}
}
int main()
{
	struct compound A[6];
	int i;
	printf("\nenter the inputs for p and q:");
	for(i=0;i<4;i++)
	{
		printf("input for p[%d]",i);
		scanf("%d",&A[i].p);
		printf("input for q[%d]",i);
		scanf("%d",&A[i].q);
	}
	displayinput(A);
	displayoutput(A);
	return 0;
}
