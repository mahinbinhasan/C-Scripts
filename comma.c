/*
Script: Mahin Bin Hasan
Read an integer variable and print it in which the digits are separated into groups of three by commas.

Input
The input will contain an integer [Ex: 1171123]

Output
Print the formatted number.[Ex:1,171,123]
*/
#include<stdio.h>
int main()
{
    int n,r,i=0,j;
    int arr[40];
    scanf("%d",&n);
    if (n>=1000)
    {
    while(n>1000)
    {
        r=n%1000;
        n=n/1000;
        arr[i]=r;
        i++;
    }

    arr[i]=n;
    j=i;
    for (j=i;j>=0;j--)
    {
        if(j==i){
            printf("%d,",arr[j]);
        }

        else if(j!=0 && j!=i)
        {
            if (arr[j]<10 && arr[j]>0){
            printf("00%d,",arr[j]);
            }
            else if(arr[j]>=10 && arr[j]<100)
            {
                printf("0%d,",arr[j]);
            }
            else if(arr[j]>=100)
            {
                printf("%d,",arr[j]);
            }
            else{
                printf("000,");
            }
        }
        else
        {
            if (arr[j]<10 && arr[j]>0){
            printf("00%d",arr[j]);
            }
            else if(arr[j]>=10 && arr[j]<100)
            {
                printf("0%d",arr[j]);
            }
            else if(arr[j]>=100)
            {
                printf("%d",arr[j]);
            }
            else{
                printf("000");
            }
        }
    }
    }
    else{
        printf("%d",n);
    }

    return 0;
}
