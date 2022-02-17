#include <iostream>
#include <list>
using namespace std;

int main(void){
	list<int> L;
 	list<int>::iterator t;
	int n,k;
	cin >> n >> k;

	for(int i=1;i<=n;i++) L.push_back(i);
	t=L.begin();
	cout << '<';

	for(int i=1;i<k;i++) t++;

	while(n>0){
		if(n==1){
			cout << *t;
			break;
		}
		cout << *t << ',';
		t=L.erase(t);
		if(t==L.end()) t=L.begin();
		--n;
		
		for(int i=0; i<k;i++){
			t++;
			if(t==L.end()) t=L.begin();
		}
	}
	cout << '>';
}