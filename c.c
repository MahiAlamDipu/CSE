#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr1[a];
    int jersey[a];
    int max, sagor, m,x;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int arr2[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        max = arr1[0];
        for (int j = 0; j < a; j++)
        {
            if (max <= arr1[j])
            {
                max = arr1[j];
                sagor = j;
            }
        }
        for (m = 0; m < a; m++)
        {
            if (arr2[sagor][m] > -1)
            {
                break;
            }
        }
        x=arr2[sagor][m];
        for (int g = 0; g < a; g++)
        {
            for (int h = 0; h < a; h++)
            {
                if (x == arr2[g][h])
                {
                    arr2[g][h] = -1;
                }
            }
        }
        jersey[sagor]=x;

        arr1[sagor] = -5;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",jersey[i]);
    }
    
    return 0;
}