#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n,int a,int b,int c) {
    int s,i,in;
    int size;
    int arr[1200]={a,b,c};
    s=0;
    for(i=2;i<n;i++)
    {

       arr[i+1]=arr[i]+arr[i-1]+arr[i-2];


    }

    return arr[n-1];

}

int main() {
    int n, a,b,c;

    scanf("%d %d %d %d", &n,&a,&b,&c);
    int ans = find_nth_term(n,a,b,c);

    printf("%d", ans);
    return 0;
}
