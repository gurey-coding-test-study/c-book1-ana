#include <stdio.h>

int main()
{
    int n, k;
    int case1=0, case2=0, num = 0;

    scanf("%d %d", &n, &k);

    num = n;
    while(1)
    {
        num--;
        case1++;
        if(num==1)  break;
    }

    num = n;
    while(1)
    {
        num/=k;
        case2++;
        if(num==1) break;
    }

    if(case1 >= case2)  printf("%d", case2);
    else                printf("%d", case1);

    return 0;
}