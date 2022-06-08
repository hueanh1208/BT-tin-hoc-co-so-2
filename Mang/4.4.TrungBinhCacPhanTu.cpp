#include <iostream>

using namespace std;
void nhapMang(int a[], int& n){
	cout<<"Nhap n: ";
	cin>>n;
	while(n>=100 || n<=0){
		cout<<"Nhap n>0: ";
		cin>>n;
	}
	cout<<"Nhap mang:\n";
	for(int i=0; i<n; i++){
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
}
int tinhTrungBinh(int a[], int n){
	int tong = 0;
	int trungBinh = 0;
	 for(int i = 0; i<n; i++){
	 	tong+=a[i];
	 }
	 trungBinh = tong/n;
	 return trungBinh;
}
int main() {
  int a[100];
  int n;
  nhapMang(a,n);
  cout<<"Trung binh cac phan tu trong mang: "<<tinhTrungBinh(a,n);
}
