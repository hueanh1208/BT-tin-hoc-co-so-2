#include <iostream>
#include <string.h>
using namespace std;
// bool chi tra ve true or false
bool sub(char str1[], char str2[], int m, int n)
{

    if (m == 0) // do dai chuoi 1 = 0 => return true -> dung chuong trinh
        return true;
    if (n == 0) // do dai chuoi 2 = 0 => return false -> dung chuong trinh 
        return false;
 
    if (str1[m - 1] == str2[n - 1]) // so sanh 2 ky tu cuoi cua chuoi str1 va str2 neu bang nhau
    	return sub(str1, str2, m - 1, n - 1); // => tra ve 1 ham va goi ham chay, chieu dai chuoi se giam di 1, tiep tuc so sanh => den khi m=0 => return true ( tren dong so 7)
	
    return sub(str1, str2, m, n - 1);// neu khong roi vào 3 truong hop tren thi se return ve ham va chay ham, den khi n = 0 => return false ( dong so 10)
}
 

int main()
{
    char str1[] = "abc ab ab ab abcd";
    char str2[] = "ab abc";
    int m = strlen(str1); // m la do dai chuoi str1, strlen -> lay do dai chuoi
    int n = strlen(str2);// n la do dai chuoi str2

	sub(str1, str2, m, n) ? cout << "Yes": cout << "No";  // if rut gon
	// => neu ham sub(str1, str2, m, n)
	// ? => co nghia la sub(str1, str2, m, n)true thi se tra ve  cout << "Yes"
	// : ->  nghia la hoac neu return false se   cout << "No"
    return 0;
}
