#include <iostream>

using namespace std;

int iterasi (int a, int b){
	int x=a;
	for (int i=1;i<b;i++){
		x=x*a;
	}
	return x;
}


int main (){

	int a,b;

	cout << "\nperpangkatan menggunakan fungsi interasi" << endl;
	cout << "========================================" << endl;
	cout << "\nmasukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
	cout << "hasil dari " << a << " pangkat " << b << " adalah " << iterasi (a,b) << endl;

	return 0;
}