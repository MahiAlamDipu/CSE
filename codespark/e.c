#include <stdio.h>
int main()
{
    long long unsigned int N, x, y, p, r, t;
    scanf("%llu", &t);
    int i = 0;
    int w = t;
    int arr[w];
    int d;

    while (i < t)
    {
        int c = 0;
        scanf(" %llu %llu %llu %llu", &N, &x, &y, &p);
        if ((y >= x) && (y <= N))
        {
            r = x;
            while (r <= x)
            {
                if ((x + p) % 2 != 0)
                {
                    r = x + p + 2;
                    c++;
                }
                if ((x + p) % 2 == 0)
                {
                    r = x + p + 1;
                    c++;
                }
            }
        }

       else{

           y = 15;
           r = 




       }
        
    }

    return 0;
}