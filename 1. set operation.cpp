#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void display(int k, int c[]);
int main()
  {
  	system("cls");
    int a[5],b[5],c[5],fl=0,ch;
    char ans;
    int i,j,n,m,k;
   
    printf("Enter limit of set A ");
    scanf("%d",&n);
     printf("Enter value of set A");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("Enter limit of setB ");
     scanf("%d",&m);
     printf("Enter val of set B");
     for(j=0;j<m;j++)
     scanf("%d",&b[j]);
     printf("Set A:{");
     for(i=0;i<n;i++)
     printf("%d,",a[i]);
     printf("}\n");
     printf("Set B:{");
     for(j=0;j<m;j++)
     printf("%d,",b[j]);
     printf("}\n");
     do
     { 
		printf("\n======================================================\n");
      printf("\n1.Intersection\n2.Union \n3.A-B \n4.B-A\n5.Cartesian Product\n6.Exit\n");
      printf("==============================");
	  printf("\nEnter ur choice");
      scanf("%d",&ch);
      printf("\n--------------------------------------------------\n");
      switch(ch)
       {
       case 1:										//intersection
	 for(k=0,i=0;i<n;i++)
	  {
	   for(j=0;j<m;j++)
	    {
	     if(a[i]==b[j])
	       {
		c[k]=a[i];
		k++;
	      }
	    }
	  }
	     printf("Intersection of A nd B:{");
	     display(k,c);
	     break;
     case 2:  										//union
	 	k=0;
	      for(i=0;i<n;i++)
	       {
		 c[k]=a[i];
		 k++;
	       }
	      for(i=0;i<m;i++)
	       {
			fl=0;
			for(j=0;j<n;j++)
			 {
				 if(a[j]==b[i])
			   {
			    fl=0;
		 	   break;
		 	  }
		 		else
		    	fl=1;
			 }
			if(fl==1)
		 	{
		  	c[k]=b[i];
		 	 k++;
		 	}
	       }
	       printf("Union of A nd B:{");
	       display(k,c);
	       break;
     case 3:										 //A-B
	 	k=0;
	     for(i=0;i<n;i++)
		 {
		  fl=0;
			 for(j=0;j<m;j++)
		   	{
		  		if(a[i]==b[j])
		  		{
		   			fl=0;
		   			break;
				}
	     		else
	     		{
	       			fl=1;
	      		}
	     	}
	     	if(fl==1)
	      	{
	      		c[k]=a[i];
	       		k++;
	    	}
	    }
	     printf("Difference is A-B:{");
	     display(k,c);
	     break;
     case 4:																//B-A
	 	k=0;
	 	for(i=0;i<m;i++)
	 	{
	  		fl=0;
	  		for(j=0;j<n;j++)
	   		{
	      		if(b[i]==a[j])
	      		{
		 			fl=0;
					break;
				}
	     		else
	       		fl=1;
	     	}
	     	if(fl==1)
	      	{
	       		c[k]=b[i];
	       		k++;
	      	}
	    }
	    printf("Difference is B-A:{");
	    display(k,c);
	    break;

   case 5:																		//cartesian product
  	 	printf("\n Cartesian Product = {");
				for(i=0;i<n;i++)
	    		{
	    			for(j=0;j<m;j++)
	    			{
	    				printf("(%d,%d)",a[i],b[j]);
	    			}
	    		}
	    		printf("}\n");
	    break;
     case 6: 
	 	break;
	 	
    } 
    printf("\n Do you want to continue.....(y/n)");
    scanf("%c",&ans);
    
    }while(ans=='y'||'Y');
    getch();
    return 0;
 }
void display(int k, int c[])
{
	int i;
	 for(i=0;i<k;i++)
	 {
	    if(c[i]!=c[i+1])
	      printf("%d",c[i]);
	      if(i!=k)
	      printf(",");
	   }
	     printf("}");
}

			
