#include <stdio.h>
#include<stdlib.h>
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int row = -1, col = -1 ;
 
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
        if(col!=-1) break;
    }
int mid =2;
int swap_count = abs(row - mid) + abs(col - mid);
printf("%d", swap_count);
    return 0;
}
