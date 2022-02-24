#include <bits/stdc++.h>
using namespace std;

int board[51][51];
bool vis[51][51];
int t, m, n, k;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		queue<pair<int, int>> q;
		int cnt = 0;
		while (k--) {
			int x, y;
			cin >> x >> y;
			board[y][x] = 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 1 && !vis[i][j]) {
					q.push({ i,j });
					vis[i][j] = true;
					while (!q.empty()) {
						auto cur = q.front(); q.pop();
						for (int dir = 0; dir < 4; dir++) {
							int nx = cur.first + dx[dir];
							int ny = cur.second + dy[dir];
							if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
							if (vis[nx][ny] || board[nx][ny] != 1) continue;
							vis[nx][ny] = true;
							q.push({ nx,ny });
						}
					}
					cnt++;
				}
			}
		}
		for (int i = 0; i < n; i++) {  //마지막에 초기화시켜준다
			for (int j = 0; j < m; j++)
			{
				board[i][j] = 0;
				vis[i][j] = false;
			}
		}
		cout << cnt <<"\n";
	}
}