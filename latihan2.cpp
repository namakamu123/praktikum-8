#include <iostream>

using namespace std;

int nilai(int a, int b){ 
	if (b<1) {
		return 1;
	}
	else {
		return a+ nilai (a,(b-1)) ; 
	}
}


int main (){

	int a,b;
	cout << "\nmasukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
	cout << "\nhasil dari " << a << " x " << b << " adalah " << (nilai (a,b)-1) << endl;
	
	
	return 0;
}