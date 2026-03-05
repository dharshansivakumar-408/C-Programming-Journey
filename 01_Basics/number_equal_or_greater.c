#include"stdio.h"
int main()
{
    int a,b,c;
    printf("Enter A value:");
    scanf("%d",&a);
    printf("Enter B value:");
    scanf("%d",&b);
    printf("Enter C value:");
    scanf("%d",&c);
    if(a == b && b ==c && c == a )
    {
        printf("All are equal");
    }
    else if(a>=b && a>=c)
    {
        printf("A is largest ");
    }
    else if(b>=a && b>=c)
    {
        printf("B is largest ");
    }
    else 
    {
        printf("C is largest");
    }
    return 0;
}
