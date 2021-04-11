//program to implement fuzzy set operations
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float max(float,float);
float min(float,float);
int main()
{
	float a[5]={0.1,0.4,0.6,0.7,0.9};
	float b[5]={0.0,0.2,0.4,0.9,1.0};
	int i;
	printf("\nGiven sets are:\n ");
	printf("Set A: {");
	for(i=0;i<5;i++)
    {
    	printf("%f,",a[i]);
	}
	printf(" } \n");
	printf("Set B: {");
	for(i=0;i<5;i++)
    {
    	printf("%f,",b[i]);
	}
	printf(" } \n");
	printf("\n<------------------------------------------------->\n");
	printf("Fuzzy union of a and b = { ");
	for(i=0;i<5;i++)
	{
		printf("%f,",max(a[i],b[i]));
	}
		printf(" } \n");
		printf("\n<------------------------------------------------->\n");
		printf("Fuzzy intersection of a and b = { ");
		for(i=0;i<5;i++)
		{
			printf("%f,",min(a[i],b[i]));
		}
		printf(" } \n");
	printf("\n<------------------------------------------------->\n");
	printf("Fuzzy complement of set A = { ");
	for(i=0;i<5;i++)
	{
		printf("%f,",(1-a[i]));
	}
	printf(" } \n");
	printf("\n<------------------------------------------------->\n");
	printf("FUzzy concentration of  set A = { ");
	for(i=0;i<4;i++)
	{
		printf("%f,",pow(a[i],2));
		
	}
	printf(" } \n");
	printf("\n<------------------------------------------------->\n");
	printf("Fuzzy Dialation of Set B = {");
	for(i=0;i<5;i++)
	{
		printf("%f,",sqrt(b[i]));
		
	}
	printf(" } \n");
	printf("\n<------------------------------------------------->\n");
	printf("Fuzzy difference of A and B = {");
	for(i=0;i<5;i++)
	{
		printf("%f,",min(a[i],1-b[i]));
		
	}
	printf(" } \n");
	getch();
	return 0;
}
	float max(float x, float y)
	{ 
	if(x>y)
	return x;
	else
	return y;
	}
	float min(float x,float y)
	{
		if(x<y)
		return x;
		else
		return y;
	}
