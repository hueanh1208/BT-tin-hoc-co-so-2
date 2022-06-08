#include <iostream>
#include <math.h>

using namespace std;
void giaiPTB2(float a, float b, float c){
	if(a==0){
		if(b==0){
			cout<<"PT vo nghiem";
		}else{
			cout<<"PT co 1 nghiem: x = "<<-b/c;
		}
	}else{
		float del = b*b-4*a*c;
		float x1,x2;
		if(del>0){
			x1=(-b+sqrt(del)/(2*a));
			x2=(-b-sqrt(del)/(2*a));
			cout<<"Pt co 2 nghiem phan biet: x1="<<x1<<" x2= "<<x2;
			
		}else if(del == 0){
			x1=x2=-b/(2*a);
			cout<<"pt co nghiem duy nhat x1 = x2 = "<<x1;
		}else{
			cout<<"pt  vo nghiem";
		}
	}
}

int main(){
	float a,b,c;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	giaiPTB2(a,b,c);
	
	
}
