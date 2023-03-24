#include<stdio.h>
int main()
{
    int y;
    for (y=0;y<=10000;y++){
    if(y%400==0)
    {
        printf("%d\n",y);
    }
    else
    {

        if(y%100==0)
        {
            printf("");
        }
        else if(y%4==0)
        {
            printf("%d\n",y);
        }
    }
    }
}
