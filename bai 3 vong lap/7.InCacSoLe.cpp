#include <iostream>

using namespace std;
int main() {
  int n;
  cout<<"Nhap n: "; cin>>n;
  cout<<"In cac so chan: ";
  for(int i=1;i<n;i++){
  	if(i%2!=0){
  		cout<<endl<<i<<endl;
	  }
  }
}
