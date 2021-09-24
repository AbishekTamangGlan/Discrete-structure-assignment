
//randomized algorithm

#include<stdio.h>
#include <math.h>
#include <stdlib.h>

/*This is a sample program to generate a random numbers based on probability desity function of spiner
pdf(x) = 1 if x>360
       = 0 if x<0
       = x/360 otherwise */
int N = 10;
int main()
{
    int p = 0;
    for (int i = 0; i < N; i++)
    {
        p = rand() % 400;
        if (p > 360)
        	printf("1 \t");

        else if (p < 0)
        	printf("0\t");
           
        else
        	printf("%f \t",p * 0.1 / 360);
            
    }   
    printf("...");

}


