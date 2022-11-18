#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((c+(a*2))<=b)
    {
        printf("YES %d\n",b-(2*a));
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}