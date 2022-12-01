// Write a program in C to print the Fibonacci series using iterative method.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0, b = 1;
    int n;
    int sum;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    if(n == 1)
    {
        printf("0");
    }
    else if(n == 2)
    {
        printf("0 1");
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            printf("%d ", a);
            sum = a + b;
            a = b;
            b = sum;
        }
    }
}
