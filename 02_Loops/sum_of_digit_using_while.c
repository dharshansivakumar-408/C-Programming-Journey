//Sum of Digits of a Number
#include"stdio.h"
int main()
{
    int n;
    printf("Enter N value:");
    scanf("%d",&n);
    int count=0;
    int i=1;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("Output is:%d",count);
    return 0;
}
