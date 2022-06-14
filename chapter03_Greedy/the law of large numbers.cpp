#include <stdio.h>

int main()
{
    int n, m, k, i, j;
    int limit = 0, total_cnt = 0;
    int temp = 0;
    int arr[1005] = {0,};
    int sum = 0;

    scanf("%d %d %d", &n, &m, &k);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){ // 큰 수대로 재배열
        for(j=0; j<n; j++){
            if(i != j){
                if(arr[i] > arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    limit = k;
    while(1)
    {
        if(limit == 0)
        {
            sum += arr[n-2];
            limit = k;
        }
        else
        {
            sum += arr[n-1];
            limit--;
        }
        total_cnt++;
        if(total_cnt == m) break;
    }

    printf("%d", sum);
    return 0;
}