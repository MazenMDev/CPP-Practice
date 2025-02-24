#include <iostream>
using namespace std;

void create(char x[], int pos, char y[]){
	int o = 0;	
	for(int i=pos; x[i] != '\0'; i++){
		y[o] = x[i];
		o++;
	}
	for(int i=0;i <pos; i++){
		y[o] = x[i];
		o++;
	}
	y[o] = '\0';
}
int main(){
	char x[300], y[300];
	int pos;
	cin.getline(x, 300);
	cin>>pos;
	create(x,pos,y);
	cout << y;
}