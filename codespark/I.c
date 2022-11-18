#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((b-a)>=c)
    {
        printf("YES %d\n",b-a);
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}