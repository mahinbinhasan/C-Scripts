#include<stdio.h>
int main()
{

    long long int n,i,t,c;
    start:
    t=1;
    c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        t=t*i;
    }
    printf("%d\n",t);

    while(t%10==0)
    {
        if(t%10==0)
        {
            c++;
            t=t/10;
        }
        else
        {
            break;
        }
    }
    printf("%d\n",c);
    goto start;
    return 0;
}
