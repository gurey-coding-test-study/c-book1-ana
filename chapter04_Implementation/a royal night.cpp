#include <stdio.h>

int main(){
    char dir1, dir2;
    int i=0, cnt=0;
    int xx, yy, new_x=0, new_y=0;
    int dir_x[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dir_y[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

    scanf(" %c %c", &dir1, &dir2);

    yy = dir2 -'0';
    xx = dir1 - 96;
    
    for(i=0;i<8;i++){
        new_y = yy + dir_y[i];
        new_x = xx + dir_x[i];

        if(new_y > 0 && new_x > 0 && new_y < 9 && new_x < 9)    cnt++;
    }

    printf("%d", cnt);
    return 0;
}