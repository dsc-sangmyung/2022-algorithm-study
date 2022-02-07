#include <bits/stdc++.h>
using namespace std;
int arr[2][7]; //자동으로 0초기화
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;

	int s, y, count = 0;	
	for (int i = 0; i < n; i++)
	{
		cin >> s >> y;
		arr[s][y]++;
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 7; j++)
		{
			count += arr[i][j] / k;
			if (arr[i][j] % k != 0)
				count++;
		}
	}
	cout << count;

}