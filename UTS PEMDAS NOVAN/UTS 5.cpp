#include <iostream>
using namespace std;

int main ( ) {

	system ("title NOVAN ARI PRADANA") ;
 
	cout << "=============================================\n " ;
	cout << "                VAN'S MART'                 \n " ;
	cout << "=============================================\n " ;
	
	float  tot ;
	
	cout << "Masukkan Total Belanjaan Anda = " ;
	cin >> tot ;
	
	if ( tot >= 100000 ) {
		cout << "Selamat Anda Mendapatkan Hadiah" ;
	}
	
	else if ( tot <= 100000 ) {
		cout << "Terimakasih telah berbelanja" ;
	}
	
	return 0;
}
