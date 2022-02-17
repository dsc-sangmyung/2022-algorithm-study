#include <iostream>
#include <list>
using namespace std;

int main(void){
	list<char> L;
 	list<char>::iterator t;
	int n;
 	string str;
 	cin >> n;

 	for (int i = 0; i < n; i++) {
 		L.clear();
 		t = L.begin();
 		cin >> str;

 		for (int j = 0; j < str.length(); j++) {
			if(str[j] != '<' && str[j] != '>' && str[j] != '-') L.insert(t, str[j]);
 			else if (str[j] == '<' && t != L.begin()) t--;
 			else if (str[j] == '>' && t != L.end()) t++;
 			else if (str[j] == '-' && t != L.begin()) t = L.erase(--t); 
 		}
 		for (t = L.begin(); t != L.end(); t++)
			cout << *t;

 		cout << '\n';
 	}
}