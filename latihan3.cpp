#include <iostream>

using namespace std;

int rekursif(int a, int b){ 
	if (b<1) {
		return 1;
	}
	else {
		return a* rekursif (a,(b-1)) ; 
	}
}

int main (){

	int a,b;

	cout << "\nperpangkatan menggunakan fungsi rekursif" << endl;
	cout << "========================================" << endl;
	cout << "\nmasukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
	cout << "hasil dari " << a << " pangkat " << b << " adalah " << rekursif (a,b) << endl;
	return 0;
}