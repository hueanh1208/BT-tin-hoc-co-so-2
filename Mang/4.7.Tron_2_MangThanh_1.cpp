#include <iostream>
using namespace std;
int main(){
	int chan[5] = {0,2,4,6,8};
	int le[6] = {1,3,5,7,9,11};
	int tron[11], n=0;
	
	for(int i=0; i<5; i++){
		tron[n] = chan[i];
		n++;
	}
	for(int i=0; i<6; i++){
		tron[n] = le[i];
		n++;
	}
	cout<<"Mang chan: ";
	for(int i=0; i<5; i++){
		cout<<chan[i]<<" ";
	}
	cout<<"\nMang le: ";
	for(int i=0; i<6; i++){
		cout<<le[i]<<" ";
	}
	cout<<"\nMang tron: ";
	for(int i=0; i<n; i++){
		cout<<tron[i]<<" ";
	}
}
	
