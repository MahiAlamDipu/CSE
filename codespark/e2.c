#include<stdio.h>
int main()
{
    int N,x,y,p,r,c=0;
    scanf("%d %d %d %d",&N,&x,&y,&p);
    if((y>=x)&&(y<=N))
    {
        r=x;
        while(r<=x)
        {
            if((x+p)%2!=0)
            {
                r=x+p+2;
                c++;
            }
            if((x+p)%2==0)
            {
                r=x+p+1;
                c++;
            }
        }
    }


    return 0;
}