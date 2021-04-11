// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>
 
// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    int a = 100, b = 200;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    a = 40, b = 10;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    a = 2, b = 31;
    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
