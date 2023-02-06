#include <stdio.h>
int main()
{
    int b, p;
    float r=1;
    printf("Enter the Base : ");
    scanf("%d", &b);
    printf("Enter the Power : ");
    scanf("%d", &p);
    if(p<0)
    {
        for(int i=p; i<0; i++)
        {
            r = r*1/b;
        }
        printf("%d^%d = %.3f", b, p, r);
    }
    else
    {
        for(int i=0; i<p; i++)
        {
            r = r*b;
        }
        printf("%d^%d = %.0f", b, p, r);
    }
    return 0;
}
