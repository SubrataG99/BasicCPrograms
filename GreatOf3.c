// Write a program to find greatest among three integers.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    printf("Enter the 2nd number : ");
    scanf("%d", &b);
    printf("Enter the 3rd number : ");
    scanf("%d", &c);
    if(a == b)
        printf("1st and 2nd number are same");
    else if(a == c)
        printf("1st and 3rd number are same");
    else if(b == c)
        printf("2nd and 3rd number are same");
    else if(a == b && a == c)
        printf("All the numbers are same");
    printf("\n");
    
    if(a > b)
        if(a > c)
            printf("1st number, %d is the greatest of all 3", a);
        else
            if(b > c)
                printf("2nd number, %d is the greatest of all 3", b);
            else
                printf("3rd number, %d is the greatest of all 3", c);
    else if(b > c)
        printf("2nd number, %d is the greatest of all 3", b);
    else
        printf("3rd number, %d is the greatest of all 3", c);
    return 0;
}