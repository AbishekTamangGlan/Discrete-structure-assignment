// linear search using recursion.
#include<stdio.h>
void search(int a[10],int, int,int);
int main()
{
	int a[10],value,size;
	int i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("\n Enter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the value which we need to search:");
	scanf("%d",&value);
	search(a,0,value,size);
	return 0;
}
void search(int a[], int low,int value,int size)
{
	if( a[low]==value)
	{
		printf("The search value %d is found at a[%d]",value,low);
	}
	else if(low==size)
	{
		printf("The search value is not found.\n");
	}
	else
	return search(a,low+1,value,size);
}


