// Print numbers from 1 to N but skip multiples of 5

#include"stdio.h"
int main()
{
    int n;
    printf("Enter N value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%5 != 0)
         printf("%d\n",i);
    }
    return 0;
}
