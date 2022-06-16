#include <stdio.h>

int main(){
    int map_y, map_x;
    int i, j, cnt=0, dir_change = 0;
    int now_y, now_x, now_dir;
    int new_y=0, new_x=0, new_dir;
    int map[55][55]={0};
    int dy[4] = {-1, 0, 1, 0};
    int dx[4] = {0, -1, 0, 1};

    scanf("%d %d", &map_y, &map_x);
    scanf("%d %d %d", &now_y, &now_x, &now_dir);
    
    for(i=0;i<=map_y+1;i++){
        for(j=0;j<=map_x+1;j++){
            map[i][j] = 1;
        }
    }

    for(i=1;i<=map_y;i++){
        for(j=1;j<=map_x;j++){
            scanf("%d", &map[i][j]);
        }
    }

    new_dir = now_dir;
    now_y++;
    now_x++;
    map[now_y][now_x]=1;
    cnt++;
    
    while(1){        
        new_dir++;
        if(new_dir > 3) new_dir = 0;

        new_y = now_y + dy[new_dir];
        new_x = now_x + dx[new_dir];

        if(map[new_y][new_x] == 0){
            map[new_y][new_x]=1;
            now_dir = new_dir;
            cnt++;
            dir_change = 0;
            now_y = new_y;
            now_x = new_x;
        }
        else  dir_change++;
        
        if(dir_change == 4){
           if(now_dir > 2) now_dir-=2;
           else           now_dir +=2;

           new_y = now_y+dy[now_dir];
           new_x = now_x+dx[now_dir];

           if(map[new_y][new_x] == 1) break;
        }
    }

    printf("%d", cnt);

    return 0; 
}