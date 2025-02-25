#include <iostream>
using namespace std;

int main(){

	int x;
	cin >> x;
	cout << "Memory Address: " << &x << endl;
	cout << "Value: " << x << endl;

	int* y = &x;
	cout << "Memory address: " << y << endl;
	cout << "value: " << *y << endl;

	x = 15;
	cout << "Memory address: " << y << endl;
	cout << "value: " << *y << endl;

	delete y;



//! Pointers
/////////
int x = 10;
int* y = &x;//you said to y to storage the memory address of x;
cout << "memory address: " << y << endl;
cout << "value: " << *y << endl;
*y = 15;

//? REF
/////////
int& ref = x;//you said to ref to storage the value of x;
cout << "memory address: " << &ref << endl;
cout << "value: " << ref << endl;

//*/*/*//*/*/*/*////*/*///
}