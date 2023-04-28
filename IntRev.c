// Write a program to reverse an integer and check if it Palindrome and find difference

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int chk = n;
    int s = 0;
    while(n>0)
    {
        s = (10*s) + (n%10);
        n = n/10;
    }
    if(s==chk)
    {
        printf("It is a Palindrome number : %d", s);
    }
    else
    {
        printf("The reverse number is : %d", s);
    }
    printf("\nThe difference between the original and reverse number is : %d", abs(s-chk));
}
