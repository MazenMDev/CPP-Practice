#include <iostream>
using namespace std;

void copy(char x[], int N, char y[], int number){
	int pos,posafter;
	int count = 0;
	int count2 = 0;
	for(int i=0; i<N; i++){
		if(x[i] == ' '){
			count++;
			if(count == (number -1)){
				pos = i;
				break;
			}
		}
	}
	for(int i=0; i<N; i++){
		if(x[i] == ' '){
			count2++;
			if(count2 == (number + 1)){
				posafter = i;
				break;
			}
		}
	}
	int k = 0;
	for(int i = pos+1; x[i] != ' '; i++){
		y[k] = x[i];
		k++;
	}
	y[k] = ' ';
	k++;
	for(int i=posafter-1 ; x[i] != ' '; i--){
		y[k] = x[i];
		k++;
	}
	y[k] = '\0';
}

int main(){
	char x[300];
	char y[300];
	int number;
	cin.getline(x,300);
	cin>>number;
	copy(x,300,y,number);
	cout << y << endl;
}