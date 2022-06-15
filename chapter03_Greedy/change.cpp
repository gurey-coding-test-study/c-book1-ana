#include <stdio.h>

int main()
{
    int n, cnt = 0, i=0;
    int total_cnt = 0;
    int arr[4]={500, 100, 50, 10};

    scanf("%d", &n);

    for(i=0; i<4; i++)
    {
        cnt = n/arr[i];
        total_cnt += cnt;
        n -= cnt*arr[i];
    }

    printf("%d", total_cnt);
    return 0;
}