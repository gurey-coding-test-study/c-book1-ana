#include <stdio.h>

int main()
{
    int n, m, i, j;
    int arr[105][105] ={0,};
    int big_num = 0, low_num = 0;

    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        low_num = 10001;
        for(j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] < low_num)  low_num = arr[i][j];
        }
        if(big_num < low_num) big_num = low_num;
    }

    printf("%d", low_num);

    return 0;
}