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
void inSNT(int n){
	int count =0;
	int i=2;
	while(count<n){
		if(KtSNT(i)==true){
			cout<<i<<" ";
			count++;
		}
		i++;
	}
	
	
}
int main(){
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<n<<" so nguyen to dau tien: ";
	inSNT(n);	
}
