/*
Triangle border generator
Author: Mahin Bin Hasan
Input: length of each border
Output: Triangle
*/

#include <stdio.h>

int main()
{
    
    int i,j,p1,p2,s;
    scanf("%d",&s);
    s=s-1;
    p1=s;
    p2=s;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s*2;j++)
        {
            if(j==p1 || j==p2)
            {
                if(j==p1)
                {
                    printf(".");
                }
                else if(j==p2)
                {
                    printf(".");
                }
            }
            else
            {
                printf(" ");
            }
            
        }
        p1--;
        p2++;
        printf("\n");
    }
    for(i=0;i<=s*2;i+=2)
    {
        printf(". ");
    }

    return 0;
}
