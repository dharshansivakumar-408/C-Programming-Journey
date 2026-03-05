#include"stdio.h"
int main()
{
    char n;
    printf("Enter a letter:");
    scanf("%c",&n);
    printf("%c=>%d\n",n,n);
    if(n>='a' && n<='z')
    {
        printf("Lower case");
    }
    if(n>='A' && n<='Z')
    {
        printf("Upper case");
    }
    return 0;
}
