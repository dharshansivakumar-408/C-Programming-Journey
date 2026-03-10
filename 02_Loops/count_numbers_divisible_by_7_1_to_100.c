#include"stdio.h"
int main()
{
    int n=100;
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%7 == 0)
        {
         count = count + 1;
        }
    }
    printf("%d",count);
    return 0;
}
