#include <iostream>

using namespace std ;

//SOAL : BERAPAKAH HARGA YANG HARUS DI BAYAR NOVAN APABILA DIA MEMBELI "NASI PECEL LELE" ?

int main() {



	float a, b, c ;
	cout << "MENU MAKANAN\n" ;
	cout << "1. NASI CAMPUR\n2. NASI KRENGSENGAN\n3. NASI PECEL LELE " ;
	cout << "Pilihan MAKANAN = " ;
	cin >> a ;

	cout << "\n\n " ;
	cout << "Ukuran Menu\n1. Paket Small\n2. Paket Medium\n3. Paket Large\n " ;
	cout << "Pilihan Minuman =" ;
	cin >> b ;

	if (a==1) {
		if (b==a) {
			cout <<"Harga = 21.000" ;
		}

		else if (b==b) {
			cout <<"Harga = 25.000" ;
		}

		else if (b==c) {
			cout <<"Harga = 30.000" ;
		}
	
	}

	else if (a==2) {
		if (b==a) {
			cout <<"Harga = 21.000" ;
		}

		else if (b==b) {
			cout <<"Harga = 25.000" ;
		}

		else if (b==c) {
			cout <<"Harga = 30.000" ;
		}
	
	}

	return 0 ;
}
