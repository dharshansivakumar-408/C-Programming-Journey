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
    if (a >= b && a >= c)
        printf("%d", a);
    else if (b >= a && b >= c)
        printf("%d", b);
    else
        printf("%d", c);

    return 0;
}
