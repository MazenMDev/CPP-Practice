#include <iostream>
using namespace std;

void makeit2(char x[]){
	int pos,posmaster,posfirst,poslast;
	int count = 0;
	int countlast = 0;
	int number,h;
	int master;
	int i;
	for( i=0; x[i] != '\0'; i++){
		if(x[i] == 'u' && x[i+1] == 'n'){
			pos = i;
		}
	}
	posmaster = i;
	for(int i=pos; ; i--){
		if(x[i] == ' '){
			posfirst = i;
			break; 
		}
	}
	for(int i = posfirst+1; ;i++){
		count++;
		if(x[i] == ' '){
			poslast = i;
			count--;
			break;
		}
	}
	for(int i=poslast+1; x[i] != '\0'; i++){
		countlast++;
	}
	master = posmaster;
	number = (count / 2) + 1;
	for(; posmaster > poslast ; i--){
		x[posmaster+number] = x[posmaster];
		posmaster--;
	}
	x[posmaster+number] = ' ';
	x[master + number + 1] = '\0';
	h = 1;
	for(int i=(posfirst+1) ; i<(posfirst + number); i++){
		x[poslast + h] = x[i];
		h++;
	}
	
}


int main(){
	char x[300];
	cin.getline(x,300);
	makeit2(x);
	cout << x << endl;
}