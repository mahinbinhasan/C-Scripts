#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("Lowest No. is= %d",b);
    }
    else
    {
        printf("Lowest No. is=%d",a);
    }


    getch();
    return 0;
}


