/*
-----------------------------
---------Script Info---------
---Author: Mahin Bin Hasan---
---github.com/mahinbinhasan--
---facebook.com/root.mahin---
-----------------------------
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=a%2;
    if(b==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    //getch(); Yow can remove comment if you want to use it as executable.
    return 0;
}
