
#include <stdio.h>
int main()
{
    int n, k,a;
    scanf("%d%d", &n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d", &arr[i]);
    }
    int kth_score=arr[k-1];
    int count = 0;
    for (int i = 0; i <n; i++)
 
    {
        if(arr[i] >= kth_score && arr[i] > 0) count++;
    }
    printf("%d\n",count);
    return 0;
}
