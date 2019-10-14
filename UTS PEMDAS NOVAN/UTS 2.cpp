#include <iostream>

using namespace std ;

int main () {

	system ("title NOVAN ARI PRADANA") ;
	
	float a, b, hasil ;
	cout << "Masukkan angka pertama = " ;
	cin >> a ;
	cout << "Masukkan angka kedua   = " ;
	cin >> b ;
	
	hasil = a/b ;
	
	cout <<"Hasilnya adalah =" << hasil ;
	
	if (b==0) {
		cout << "tidak terdefinisi" ;
	}
	
	return 0 ;
}
