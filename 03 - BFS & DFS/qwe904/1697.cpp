#include <bits/stdc++.h>
using namespace std;

int dist[100002];
int n, k;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i = 0; i < 100001; i++)
		dist[i] = -1;

	queue<int> q;
	q.push(n);
	dist[n] = 0;
	while (dist[k] == -1)
	{
		int cur = q.front(); q.pop();
		int arr[] = { cur - 1,cur + 1,cur * 2 };
		for (int nxt : arr)
		{
			if (nxt < 0 || nxt >100000) continue;
			if (dist[nxt] != -1) continue;
			q.push(nxt);
			dist[nxt] = dist[cur] + 1;
		}
	}

	cout << dist[k];
}