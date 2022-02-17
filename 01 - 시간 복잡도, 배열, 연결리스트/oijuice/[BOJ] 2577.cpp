#include <iostream>
using namespace std;

int main(void){
  int n1,n2,n3;
  cin >> n1 >> n2 >> n3;
  int sum = n1*n2*n3;

  while(sum!=0){
    cout << sum%10 << '\n';
    sum/=10;
  }
}