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
    if(a>b && a>c)
    printf("A is Largest");

else if(b>a && b>c)
    printf("B is Largest");

else if(c>a && c>b)
    printf("C is Largest");

else if(a==b && b==c)
    printf("All are Equal");

else if((a==b && a>c) ||(a==c && a>b) ||(b==c && b>a))
{
    printf("Two numbers are equal and largest");
}
    return 0;
}
