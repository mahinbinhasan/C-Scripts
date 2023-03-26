#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,r,p,a;
    scanf("%d",&n);
    r=0;
    a=n;
    for(i=0;n>0;i++)
    {
        
        r=r+n%10;
        r= r*10;
        
        n=n/10;
        
    }
    r=r/10;
    if(a==r)
    {
        printf("Palindrome");
    
    }
    else
    {
        printf("Not");
    }
    return 0;
    
}
