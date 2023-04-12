// Write a program to check if a number is binary

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Hello World\n");
    int n, rem, c=-1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int temp = n;
    while(temp > 0)
    {
        rem = temp%10;
        if((rem) == 0 || (rem) == 1)
        {
            c++;
            sum = sum + (rem*pow(2, c));
        }
        else
        {
            printf("It is not a binary number...");
            return 0;
        }
        temp = temp/10;
    }
    printf("%d is a binary number", n);
    printf("\nThe equivalent decimal = %d", sum);
    return 0;
}