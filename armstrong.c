#include<stdio.h>
int main()
{
    int add=0,n,r;
    printf("enter no :");
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        r=n%10;
        add=add+(r*r*r);
        n=n/10;
    }
    if (add==a){
        printf("valid no \n");
    }
    else {
        printf("invalid no \n");
    }
    return 0;
}