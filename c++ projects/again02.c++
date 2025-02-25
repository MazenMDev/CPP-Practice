#include <iostream>
using namespace std;

void min(int x[], int N, int &min1, int &min2, int &min3, int &min4){
	 min1 = 9999999;
	 min2 = 9999999;
	 min3 = 9999999;
	 min4 = 9999999;
	int Number = N / 4;
	for(int i=0; i<Number; i++){
		if(min1 > x[i]){
			min1 = x[i];
		}
	}
	for(int i=Number; i<(Number*2); i++){
		if( min2 > x[i]){
			min2 = x[i];
		}
	}
	for(int i=(Number*2); i<(Number*3); i++){
		if(min3 > x[i]){
			min3 = x[i];
		}
	}
	for(int i=(Number*3); i<(Number*4); i++){
		if(min4 > x[i]){
			min4 = x[i];
		}
	}
}

int main(){
	int x[20];
	int min1,min2,min3,min4;
	for(int i=0; i<20; i++){
		cin>>x[i];
	}
	min(x,20,min1,min2,min3,min4);
	cout << endl;
	cout << min1 << " , " << min2 << " , " << min3 << " , " << min4 << endl;
}