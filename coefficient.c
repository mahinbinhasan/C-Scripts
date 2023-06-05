#include<stdio.h>
int main()
{
    int cn,m,i,j;//cn->caser number m-> main number
    printf("Enter total number counts: ");
    scanf("%d",&cn);
    for(i=0;i<cn;i++)
    {
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
            if(m%j==0)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}
