#include <iostream>
using namespace std;

int main(){
	int a[100], b[100];
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
		b[i] = a[i];	
	}
	cout<<"Mang ban dau -> Mang sao chep"<<endl;
	for(int i=0; i<n; i++){
		cout<<"\t"<<a[i]<<"\t\t"<<b[i]<<endl;
	}
	
}
