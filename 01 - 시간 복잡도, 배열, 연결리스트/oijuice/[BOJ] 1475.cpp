#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(void){
  string input;
  cin >> input;

  vector<int> num(10);
  for(int i=0;i<input.size();i++) num[input[i]-'0']++;

  int max_val=0;
  for(int i=0;i<10;i++){
    if(i!=9&&i!=6) max_val=max(max_val, num[i]);

  cout << max(max_val,(num[6]+num[9]+1)/2);
}