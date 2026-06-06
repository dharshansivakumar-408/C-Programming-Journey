#include"stdio.h"
int main()
{
    int d;
    printf("Enter D value:");
    scanf("%d",&d);
    if(d%2==0 && d>0)
     printf("Positive Even number");
    else if(d%2==0 && d<0)
     printf("Negative Even number");
    else if(d%2!=0 && d>0)
     printf("Positive odd number");
    else if(d%2!=0 && d<0)
     printf("Negative odd number");
    else
     printf("Zero");
    return 0;
}
