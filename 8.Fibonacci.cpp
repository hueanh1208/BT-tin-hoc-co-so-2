#include <iostream>
#include <math.h>
using namespace std;
int fibonacci(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int isPrimeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
using namespace std;
int main(){
	int n;
    cout << "Nhap so nguyen duong = ";
    cin >> n;
    printf("Cac so fibonacci nho hon %d va la so nguyen to: ", n);
    int i = 0;
    while (fibonacci(i) < n) {
        int fi = fibonacci(i);
        if (isPrimeNumber(fi)) {
            printf("%d ", fi);
        }
        i++;
    }
}
      
	
