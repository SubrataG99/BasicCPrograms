// Write a program to check if any duplicates in array and remove if any.

#include <stdio.h>

int main()
{
    int a[20], n;
    printf("Enter the number of items you want to enter : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nYour original array : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[j] == a[i])
            {
                c++;
                for(int k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
            }
        }
    }
    n = n - c + 1;
    if(c == 0)
    {
        printf("\nYour array has no duplicate items...\n");
        printf("Your finalised array : ");
    }
    else
    {
        printf("\nYour array has %d duplicate items...\n", c);
        printf("Your finalised array : ");
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}