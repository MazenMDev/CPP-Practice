#include <iostream>
using namespace std;
int main(){
	int y;
	y = 10;
	int *w;
	w = &y;
	cout << w << endl; //the address of y
	cout << &w << endl; //the address of w
	cout << *w << endl; //the number that in the address of y (indiract way)
	cout << y << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}