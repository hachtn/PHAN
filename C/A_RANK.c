#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int adj[MAX][MAX]; // Ma trận kề
int visited[MAX];  // Mảng đánh dấu các đỉnh đã thăm

void dfs(int v, int n) {
    visited[v] = 1;
    for (int i = 0; i < n; i++) {
        if (adj[v][i] && !visited[i]) {
            dfs(i, n);
        }
    }
}

int main() {
    int n, m;
    char str[1000];
    fgets(str, sizeof(str),file); 
    sscanf(str, "%d %d",&n,&m);

    // Khởi tạo ma trận kề
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    // Đọc các cạnh và cập nhật ma trận kề
    for (int i = 0; i < m; i++) {
        int a, b;
         fgets(str, sizeof(str), file); 
        sscanf(str, "%d %d",&a,&b);
        adj[a-1][b-1] = 1;
        adj[b-1][a-1] = 1;
    }

    // Khởi tạo mảng visited
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Bắt đầu DFS từ đỉnh 0
    dfs(0, n);

    // Kiểm tra xem tất cả các đỉnh đều được thăm hay không
    int connected = 1;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            connected = 0;
            break;
        }
    }

    if (connected) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
