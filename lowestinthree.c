/* Unlock all Comments before use*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,temp;
    printf("Enter Number 1:");
    scanf("%d",&a);
    printf("Enter Number 2:");
    scanf("%d",&b);
    printf("Enter Number 3:");
    scanf("%d",&c);
    /* Type one
    if(a<=b)
    {
        temp=a;
    }
    else if(a>=b)
    {
        temp=b;
    }
    if(temp<c)
    {
        printf("Smallest is %d",temp);
    }
    else
    {
        printf("Smallest is %d",c);
    }
    */
    /* Type 2
    if(a<b&&a<c)
    {
        printf("Smallest is %d",a);
    }
    else if(b<a&&b<c)
    {
        printf("Smallest is %d",b);
    }
    else
    {
        printf("Smallest is %d",c);
    }
    */
    getch();
    return 0;
}



