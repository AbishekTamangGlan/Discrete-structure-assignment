// program to implement boolean matrix operation join and meet or product.
#include<math.h>
#include<stdio.h>
#include<stdbool.h> // to use bool datatype in boolean algebra

int main()
{
	int s1,s2,i,j,m;
	int a[5][5],b[5][5];
	int product[5][5],join[5][5],meet[5][5];
	printf("Enter the size of first square matrix");
	scanf("%d",&s1);
	printf("Elements of matrix:\n");
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s1;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter the size of second square matrix");
	scanf("%d",&s2);
	printf("Elements of matrix:\n");
	for(i=0;i<s2;i++)
	{
		for(j=0;j<s2;j++)
		scanf("%d",&b[i][j]);
	}
	//to find the join
	printf("Result of join:\n");
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
		join[i][j]=a[i][j] || b [i][j];
	printf("%d\t",join[i][j]);
	}
	printf("\n");
}
//for meet 
	printf("Result of meet:\n");
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
		meet[i][j]=a[i][j] && b [i][j];
	printf("%d\t",meet[i][j]);
	}
	printf("\n");
}
// for product
for(i = 0; i <s1; i++)
{
    for(j = 0; j < s2; j++)
    {
        bool value = false;
        for(m = 0; m < s2; m++)
        {
            value=value||a[i][m] && b[m][j];
    //        if(value)
           //     break; // early out
        }
        product[i][j] = value;
    }
}
printf("Boolean product is:\n");
for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
		{
	printf("%d\t",product[i][j]);
	}
	printf("\n");
}
}
