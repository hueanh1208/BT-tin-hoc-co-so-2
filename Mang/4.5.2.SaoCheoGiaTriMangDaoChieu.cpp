#include <iostream>
using namespace std;

int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10];
	int n =10;
	for(int i=0; i<n; i++){
		b[9-i] =a[i];
	}
	cout<<"Mang ban dau -> Mang sao chep"<<endl;
	for(int i=0; i<n; i++){
		cout<<"\t"<<a[i]<<"\t\t"<<b[i]<<endl;
	}
	
}


