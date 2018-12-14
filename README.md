# praktikum-8

## latihan1.cpp : menentukan deret fibonacci dengan fungsi iterasi
1. membuat fungsi fibonacci :
  - int fibonacci (int a, intb)
  - didalam fungsi fibonacci terdapat variable fib = 1;
  - membuat perulangan dengan menggunakan for, dengan kondisi : (int i=1;i<b;i++)
  - membuar pemrosesan fib = fibonacci (n-1) + fibonacci (n-2);
  - kemudian nilai fib tersebut di kembalikan ke fungsi fibonacci " return fib; "
2. membuat fungsi utama :
  - int main ()
  - didalam fungsi main terdapat variable n;
  - menginputkan nilai n;
  - mencetakan deret fibonacci ke consol dengan cara memanggil fungsi fibonacci " cout << fibbonaci (n) << endl;"
3. selesai.

berikut kode lengkapnya :
#include <iostream>
using namespace std;

int fibonacci(int n)
{

	int fib=1;
	for (int i=1;i<n;i++)
		fib = fibonacci (n-1) + fibonacci (n-2);

		return fib;
}

int main()
{
	int n;
	cout << "\nmasukan nilai n : ";
	cin >> n;
	cout << "nilai deret fibonacci nya adalah : " << fibonacci (n) << endl;
	return 0;
}
  
  berikut flowchart nya :
  ![latihan1](https://user-images.githubusercontent.com/45138731/49647290-9774a100-fa54-11e8-9535-e31a0ada60ef.jpg)
  
  berikut hasil screenshotnya :
  ![latihan1](https://user-images.githubusercontent.com/45138731/49647315-b07d5200-fa54-11e8-9b1d-d42e095dbe50.png)
  
## latihan2.cpp : perkalian dengan menggunakan fungsi rekursif
1. membuat fungsi nilai :
    - int nilai (int a, int b)
    - membuat if statment dengan kondisi (b<1)
    - jika nilainya true maka akan mengembalikan nilai 1 "return 1;"
    - jika nilai nya false maka akan mengembalikan nilai a+ nilai (a,(b-1)) "return a+ nilai (a,(b-1));"
2. membuat fungsi utama :
    - int main ()
    - didalam fungsi main terdapat variable a dan b
    - menginputkan nilai a dan b
    - mencetakan hasil perkalian ke consol dengan cara memanggil fungsi nilai "cout << (nilai (a,b)-1) << endl;"
3. selesai.
    
berikut kode lengkapnya :
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

berikut flowchart mya :
![latihan2](https://user-images.githubusercontent.com/45138731/49647840-639a7b00-fa56-11e8-8289-06ba2889797f.jpg)

berikut hasil scren shotnya :
![latihan2](https://user-images.githubusercontent.com/45138731/49647866-7a40d200-fa56-11e8-9644-9251d96486e7.png)

## latihan3.cpp : perpangkatan dengan menggunakan fungsi rekursif
1. membuat fungsi rekursif
  - int rekursif (int a, int b)
  - membuat if statment dengan kondisi (b<1)
  - jika nilainya true maka akan mengembalikan nilai 1 "return 1"
  - jika nilainya false maka akan mengembalikan nilai a* rekursif (a,(b-1) "return a* rekursif (a,(b-1));"
2. membuat fungsi utama :
  - int main ()
  - didalam fungsi main terdapat variable a dan b
  - menginputkan nilai a dan b
  - mencetakan nilai hasil perkalian tersebut ke consol dengan cara memanggil fungsi rekursif " cout << rekursif (a,b) << endl;"
3. selesai.

berikut code lengkapnya :
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

berikut flowchartnya :
![latihan3](https://user-images.githubusercontent.com/45138731/49648660-3bf8e200-fa59-11e8-94a4-365466a49ea9.jpg)

berikut hasil screenshotnya :
![latihan3](https://user-images.githubusercontent.com/45138731/49648691-68acf980-fa59-11e8-8b24-ff6bd3c1b8c1.png)

## latihan4.cpp : perpangkatan dengan menggunakan fungsi iterasi
1. 1. membuat fungsi iterasi
  - int iterasi (int a, int b)
  - membuat variable x=a "int x=a;"
  - membuat perulangan dengan menggunakan for, dengan kondisi (int i=1;i<b;i++)
  - membuat pemrosesan x=x*a;
  - kemudian nilai x tersebut di kembalikan ke fungsi iterasi "return x;"
2. membuat fungsi utama :
  - int main ()
  - didalam fungsi main terdapat variable a dan b
  - menginputkan nilai a dan b
  - mencetakan nilai hasil perkalian tersebut ke consol dengan cara memanggil fungsi iterasi " cout << iterasi (a,b) << endl;"
3. selesai.

berikut kode lengkapnya :
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
  
berikut flowchartnya :
![latihan4](https://user-images.githubusercontent.com/45138731/49649151-e6253980-fa5a-11e8-8196-a6534d6f8c40.jpg)

berikut hasil screenshotnya :
![latihan4](https://user-images.githubusercontent.com/45138731/49649193-03f29e80-fa5b-11e8-974e-e79fe677e9e4.png)
