#include<stdio.h>
int main()
{
    int h=1000,i,j;
    i=h;
    j=0;
    while(i>0)
    {
        printf("%d\t",i);
        i--;
        j++;
        if(j==5)
        {
            printf("%\n");
            j=0;
        }

    }
    return 0;
}
