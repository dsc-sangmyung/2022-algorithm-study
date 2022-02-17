#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int n,x;
	cin >> n;
	vector<int> num(n);

	for(int i=0; i<n; i++){
		cin >> x;
		arr[i]=x;
	}
	cin >> x;

	int s=0, e=n-1, c=0;
	sort(num.begin(), num.end());
	while(s<e){
		if(num[s]+num[e]==x){
			c++;
			e--;
		}
		else if(num[s]+num[e]>x) e--;
		else s++;
	}

	cout << c;
}