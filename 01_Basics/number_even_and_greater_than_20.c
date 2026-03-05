#include"stdio.h"
int main()
{
    int n;
    printf("Enter N value:");
    scanf("%d",&n);
    if(n%2 == 0&& n>20)
        {
          printf("valid");  
        }
       
        else
        {
            printf("Invalid");
        }
    return 0;
}
