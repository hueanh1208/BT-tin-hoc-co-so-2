//#include <iostream>
// using namespace std;
//void nhapmang(int a[], int &n){
//	cout<<"Nhap n: ";
//	cin>>n;
//	while(n>=100 || n<=0){ // ||: hoac
//		cout<<"Nhap n>0: ";
//		cin>>n;
//	}
//	// n=3
//	cout<<"Nhap mang:\n";
//	for(int i=0; i<n; i++){			// 1: i=0, i<n dung, cout a[0] = 1, cin a[0] = 1 => giá tri cua a[0] = 1;  i++ 
//		cout<<"a["<<i<<"]= ";		// 2: i=1
//		cin>>a[i];// gan gia tri vao a[i]
//	}
//}
//
//void xuatmang(int a[], int n){
//	for(int i=0; i<n; i++) 
//		cout<<a[i]<<" ";
//}
// // 1 6 6 
//float timmax(int a[], int n){
// 	int max=a[0]; // gan vi tri dau tien cua mang la max
// 	for(int i=1; i<n; i++){ // 
// 		if(a[i]>max)
// 			max=a[i]; // max = 6 
//	 }
//	return max; // max = 6 // co the su dung gai tri max ben ngoai ham
//}
//
//void timViTri(int a[], int n){
//	int max = timmax(a,n);// tao bien max = ham timmax => de lay gia tri cua so lon nhat
//	for(int i=0; i<n; i++){
//		if(a[i] == max){
//			cout<< i <<" ";
//		}
//	}
//}
//
// int main(){
// 	int a[100]; // tao mang toi da 100
// 	int n; // so luong phan tu 
// 	cout<<n<<endl;
// 	
// 	nhapmang(a,n);
// 	cout<<"\nn sau: "<<n;
// 	// & => de sau khi chay ham nhapmang thi n = so phan tu duoc nhap trong ham do
// 	xuatmang(a,n);
// 	
// 	cout<< ("\nVi tri cua phan tu lon nhat: ");
// 	timViTri(a,n);
// }
// 
// 
// 
// 
// 
 
 
 #include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2; // khai bao chuoi
	// do while => cho nhap chuoi va sau do moi kiem tra dieu kien trong while
	do {
		cout << "Nhap chuoi s1: ";
		getline(cin, s1); // giong cin

	} while (s1.length() > 100); // length() lay chieu dai chuoi
	
	
	do {
		cout << "Nhap chuoi s2: ";
		getline(cin, s2);

	} while (s2.length() > 100);


}
 
 
 
 
 
 
 
