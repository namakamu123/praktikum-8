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