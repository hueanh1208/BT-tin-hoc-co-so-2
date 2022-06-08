#include <iostream>
#include <math.h>

using namespace std;
bool KtSNT(int n){
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)
			return false;
	}
	return true;
}
void LietKeSNT(int n){
	for(int i=0; i<n; i++){
		if(KtSNT(i) == true){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Cac so nguyen to nho hon "<<n<<" la: ";
	LietKeSNT(n);
	
}
