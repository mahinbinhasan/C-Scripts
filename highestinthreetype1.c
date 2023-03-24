#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,temp;
    printf("Enter three Numbers and separate them using space: ");
    scanf("%d%d%d",&a,&b,&c);
    temp=0;
    if(a>=b)
    {
        temp=a;
    }
    else if(a>=c)
    {
        temp=a;
    }
    else
    {
        temp=b;

        if (b>=c)
        {
            temp=b;
        }
        else
        {
            temp=c;
        }
    }
    printf("Highest: %d",temp);
    //getch(); Yow can remove comment if you want to use it as executable.
    return 0;
}
