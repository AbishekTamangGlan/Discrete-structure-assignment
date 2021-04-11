#include<stdio.h>
void binarysearch(int a[10],int, int,int);
void sort(int a[10],int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;i<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[i]=a[j];
				a[j]=temp;		
			}
		}
	}
}

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
	sort(a,size);
	printf("\n The elements after sort are:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n Enter the value which we need to search:");
	scanf("%d",&value);
	
	binarysearch(a,0,value,size);
	return 0;
}
void binarysearch(int a[], int low,int value,int size)
{
 int mid;
	 mid=(low+size)/2;
	 if(low>size)
	  {
	 	printf("\n Elements not found.\n");
	  }
	 else if(a[mid]==value)
	 {
	 	printf("\n %d is found at %d",value,a[mid]);
	  } 
	  else if (a[mid]>low)
	  binarysearch(a,low,value,mid-1);
	  else
	  binarysearch(a,mid+1,value,size);
}


