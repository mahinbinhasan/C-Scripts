#include <stdio.h>

int main()
{

    int Cx,Cy,r,Px,Py;
    float dx,dy,rtmpsqr,rsqr;
    label:
    printf("Enter Points (Cx,Cy,r,Px,Py): ");
    scanf("%d %d %d %d %d",&Cx,&Cy,&r,&Px,&Py);
    dx = Px-Cx;
    dy = Py-Cy;
    rtmpsqr=(dx*dx)+(dy*dy);
    rsqr=r*r;
    if (rtmpsqr<rsqr)
    {
        printf("Point Location: Inside Circle\n");
    }
    else if(rtmpsqr==rsqr)
    {
        printf("Point Location: Is On Outer Line\n");
    }
    else
    {
        printf("Point Location: Outside of Circle\n");
    }
    goto label;
    return 0;
}
