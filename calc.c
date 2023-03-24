#include<stdio.h>
#include<conio.h>
int main()
{
    char op;
    float a,b;
    printf("Select operator: '+' or '-' or '*' or '/'\n==:");
    scanf("%c",&op);
    printf("Enter Number 1: ");
    scanf("%f",&a);
    printf("Enter Number 2:");
    scanf("%f",&b);
    switch(op)
    {
    case('+'):
        printf("%.2f %c %.2f = %.2f",a,op,b,a+b);
        break;
    case('-'):
        printf("%.2f %c %.2f = %.2f",a,op,b,a-b);
        break;
    case('*'):
        printf("%.2f %c %.2f = %.2f",a,op,b,a*b);
        break;
    case('/'):
        printf("%.2f %c %.2f = %.2f",a,op,b,a/b);
        break;
    }
    getch();
    return 0;

}



