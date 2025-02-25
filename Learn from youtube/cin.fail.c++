#include <iostream>
using namespace std;

int main(){
int grade;
cin >> grade;

if(cin.fail()){
	cout << "wrong one\n";
}
else{
	cout << grade << endl;
}
}
