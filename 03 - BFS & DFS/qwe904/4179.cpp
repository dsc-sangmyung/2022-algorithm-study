#include <bits/stdc++.h>
using namespace std;

string board[1002];
int dist1[1002][1002];
int dist2[1002][1002];
int r, c;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> r >> c;
	queue<pair<int, int>> q1; // 불
	queue<pair<int, int>> q2; // 지훈

	for (int i = 0; i < r; i++)
		cin >> board[i];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			dist1[i][j] = -1;
			dist2[i][j] = -1;
		}

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			if (board[i][j] == 'F')
			{
				q1.push({ i,j });
				dist1[i][j] = 0;
				
			}
			if (board[i][j] == 'J')
			{
				q2.push({ i,j });
				dist2[i][j] = 0;
				
			}
		}
	while (!q1.empty())
	{
		pair<int, int> cur = q1.front(); q1.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			dist1[nx][ny] = dist1[cur.first][cur.second] + 1;
			q1.push({ nx,ny });
		}
	}
	while (!q2.empty())
	{
		pair<int, int> cur = q2.front(); q2.pop();
			for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) { // 범위를 벗어났다는 것은 탈출에 성공했다는 의미. 큐에 거리 순으로 들어가므로 최초에 탈출한 시간을 출력하면 됨.
				cout << dist2[cur.first][cur.second] + 1;
				return 0;
			}
			if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.first][cur.second] + 1) continue;
			dist2[nx][ny] = dist2[cur.first][cur.second] + 1;
			q2.push({ nx,ny });
		}
	}
	cout << "IMPOSSIBLE";
}