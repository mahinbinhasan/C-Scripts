#include<stdio.h>
int main()
{
    int n,f,l,s;
    printf("Enter 5 digit Number:");
    scanf("%d",&n);
    l= n%10;;
    f= n/10000;
    s= f+l;
    printf("Sum of First and last number: %d",s);
    return 0;
}
