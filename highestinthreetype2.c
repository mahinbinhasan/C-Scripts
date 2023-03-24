#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter three Numbers and separate them using space: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b &&a>c)
    {
        printf("Highest: %d",a);
    }
    else if(b>a&&b>c)
    {
        printf("Highest: %d",b);
    }
    else
    {
        printf("Highest: %d",c);
    }
    //getch(); Yow can remove comment if you want to use it as executable.
    return 0;
}
