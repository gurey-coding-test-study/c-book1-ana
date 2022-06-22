#include <stdio.h>

int n, m, i, j;
int map[1005][1005]={0};
int ice_cnt = 0;

void dfs(int y, int x){
  if(y >= 0 && y < n && x >= 0 && x < m && map[y][x] == 0){
    map[y][x] = ice_cnt;
    dfs(y-1, x);
    dfs(y+1, x);
    dfs(y, x-1);
    dfs(y, x+1);
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%1d", &map[i][j]);
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(map[i][j] == 0){
        ice_cnt++;
        dfs(i, j);
      }
    }
  }

  printf("%d", ice_cnt);

  return 0;
}