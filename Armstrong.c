// Write a program to check whether an integer is Armstrong number or not.     { (number = sum(digit**len(number))) }

#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int s = 0;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int c = 0;
    int chk = n;
    int temp = 0;
    while(n>0)
    {
        temp = (10*temp) + n%10;
        n = n/10;
        c++;
    }
    while(temp>0)
    {
        s = s + pow(temp%10, c);
        temp = temp/10;
    }
    printf("The sum is %d", s);
    if(s == chk)
    {
        printf("\nIt is Armstrong number");
    }
    else
    {
        printf("\nIt is not Armstrong number");
    }
}
