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

int main(){
	int count =0;
	cout<<"Cac so nguyen to co 5 chu so la: ";
	for(int i =10001; i<100000; i++){
		if(KtSNT(i)==true){
			cout<<i<<" ";
			count++;
		}
	}
	cout<<"Tong cac so nguyen to co 5 chu so la: "<<count;
	
}
