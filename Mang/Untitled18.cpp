#include <iostream>

using namespace std;
int main() {
	  int n;
	  cout<<"Nhap so phan tu cua mang: ";
	  cin>>n;
	  int a[n];
	  for(int i=0; i<n; i++){
	  	cout<<"a["<<i<<"]= ";
	  	cin>>a[i];
	  }
	  cout<<"mang vua nhap la: ";
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	
	
	

}
