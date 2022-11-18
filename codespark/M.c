#include<stdio.h>
int main()
{
    char s[50],q[50];
    scanf(" %[^\n]s",s);
    scanf(" %[^\n]s",q);
    int a=0,b=0;
    for(int i=0 ; s[i]!='\0';i++)
    {
        a++;
    }
    for(int i=0 ; q[i]!='\0';i++)
    {
        b++;
    }
    if(a==b)
    {
        printf("No movie\n");
    }
    if((a==4 && b==5)||(a==5 && b==4))
    {
        if (a==5)
        {
            printf("K-movie\n");
        }
        if (b==5)
        {
            printf("Bollywood\n");
        }
        
    }
    if((a==5 && b==8)||(a== 8&& b==5))
    {
        if (a==8)
        {
            printf("K-movie\n");
        }
        if (b==8)
        {
            printf("Bollywood\n");
        }
        
    }
    if((a==4 && b==8)||(a==8 && b==4))
    {
        if (a==4)
        {
            printf("K-movie\n");
        }
        if (b==4)
        {
            printf("Bollywood\n");
        }
        
    }
    return 0;
}