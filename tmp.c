#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    t=n%2;
    if (t==0)
        printf("Even");
    else
        printf("odd");
    return 0;
}
