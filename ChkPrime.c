//  Write a program in C to check given number is prime or not.

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=2; i<n/2; i++)
    {
        if(n%i == 0)
        {
            printf("It is a Composite number (not Prime)");
            return 1;
        }
    }
    printf("It is a Prime Number");
}
