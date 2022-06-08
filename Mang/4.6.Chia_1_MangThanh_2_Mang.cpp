#include <iostream>
using namespace std;
int main(){
	int a[11]={1,2,3,4,5,6,7,8,9,10,11};
	int chan[11], n=0;
	int le[11], m=0;
	for(int i=0;i<11; i++){
		if(a[i]%2==0){
			chan[n]=a[i];
			n++;
		}else{
			le[m]=a[i];
			m++;
		}
	}
	cout<<"Mang ban dau: ";
	for(int i=0; i<11; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nMangchan: ";
	for(int i=0; i<n; i++){
		cout<<chan[i]<<" ";
	}
	cout<<"\nMang le: ";
	for(int i=0; i<m; i++){
		cout<<le[i]<<" ";
	}
}
