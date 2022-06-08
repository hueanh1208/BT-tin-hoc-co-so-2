#include <iostream>
using namespace std;
int main(){
	int h=6, c=6;
	
	for(int i=0; i<h; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
}
