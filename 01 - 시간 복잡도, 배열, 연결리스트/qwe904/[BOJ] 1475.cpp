#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int n, ans = 1;
	cin >> n;

	int arr[10] = {};

	while (n > 0)
	{
		arr[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
			continue;
		ans = max(ans, arr[i]);
	}

	ans = max(ans, (arr[6] + arr[9] + 1) / 2);
	cout << ans;
	return 0;
}