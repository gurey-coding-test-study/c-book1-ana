#include <stdio.h>

int main()
{
    int xx=1, yy=1;
    int n, i;
    char dir[105] = {0};

    scanf("%d", &n);

    for(i=0;i<100;i++)
    {
        scanf(" %c", &dir[i]);
        
        if(dir[i] == 'L'){
            if(xx > 1)  xx--;
        }
        else if(dir[i] == 'R'){
            if(xx < 5)  xx++;
        }
        else if(dir[i] == 'U'){
            if(yy > 1)  yy--;
        }
        else if(dir[i] == 'D'){
            if(yy < 5)  yy++;
        }
    }

    printf("%d %d", yy, xx);

    return 0;
}