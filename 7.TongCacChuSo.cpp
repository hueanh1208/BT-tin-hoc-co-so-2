#include <iostream>
int TongCacChuSo(int n){
	int tong = 0;
	while(n>=0){
		tong = tong+n%10;
		n=n/10;
	}
	return n;
}
using namespace std;
int main(){
	int n;
	cout<<"Nhap so duong n: ";
	cin>>n;
	cout<<"Tong cac chu so cua "<<n<<" la = ";
	TongCacChuso(n);
	
}
