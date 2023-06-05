#include<stdio.h>
int main()
{
    int n1,n2,n3,temp;
    printf("Enter three number by space: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1<n2)
    {
        if(n2<n3)
        {
            printf("%d %d %d",n1,n2,n3);
        }
        else
        {
            temp=n3;
            n3=n2;
            n2=temp;
            printf("%d %d %d",n1,n2,n3);
        }
    }
    else
    {
        if(n1<n3)
        {
            temp=n2;
            n2=n1;
            n1=temp;
            printf("%d %d %d",n1,n2,n3);
        }
        else
        {
            if(n2<n3)
            {
                temp=n2;
                n2=n3;
                n3=n1;
                n1=temp;
                printf("%d %d %d",n1,n2,n3);
            }
            else
            {
                temp=n3;
                n3=n1;
                n1=temp;
                printf("%d %d %d",n1,n2,n3);
            }
        }
    }
    return 0;
}
