#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int a = 1;
    int b ;
    for (int i = 0; i < n-1; i++)
    {
        for (int k = 0; k < n-1; k++)
        {
            b = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == arr[k + 1][j])
                    b++;
                    
            }
           
            
            
        }
        if (b == (n))
            {
                a++;
            }
            printf(" b = %d",b);
       
    }
    printf(" a = %d",a);

    return 0;
}