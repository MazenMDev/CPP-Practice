#include <iostream>
using namespace std;

void read(int x[], int N){
	for(int i=0; i<N; i++){
		cin>>x[i];
	}
}

void gen(int x[], int N, int y[]){
	int k=0;
	for(int i=0; i<N; i+=3){
		y[k] = x[i];
		k++;
	}
	for(int i=1; i<N; i++){
		for(int o=0; o<2; o++){
			y[k] = x[i];
			k++;
			i++;
			y[k] = x[i];
			k++;
			i++;
		}
	}
}

void avg1(int y[], int N, int &avg){
	int tot;
	for(int i=0; i<N/2; i++){
		tot += y[i];
	}
	avg = tot / (N/2);
}
void avg2(int y[], int N, int &avg){
	int tot;
	for(int i=N/2; i<N; i++){
		tot += y[i];
	}
	avg = tot / (N/2);
}

void howmany(int y[], int N, int &avg, int &count){
	for(int i=0; i<N; i++){
		if(y[i] < avg){
			count++;
		}
	}
}


//*The main function
int main(){
	int x[300];
	int y[300];
	int a1,a2;
	int ct1,ct2;
	int q[300];
	read(x,300);
	gen(x,300,y);
	avg1(y,300,a1);
	avg2(y,300,a2);
	howmany(y,300,a1,ct1);
	howmany(y,300,a2,ct2);
	read(q,300);
	gen(q,300,y);
	avg1(y,300,a1);
	avg2(y,300,a2);
	howmany(y,300,a1,ct1);
	howmany(y,300,a2,ct2);
	read(x,300);
	gen(x,300,y);
	avg1(y,300,a1);
	avg2(y,300,a2);
	howmany(y,300,a1,ct1);
	howmany(y,300,a2,ct2);
	read(q,300);
	gen(q,300,y);
	avg1(y,300,a1);
	avg2(y,300,a2);
	howmany(y,300,a1,ct1);
	howmany(y,300,a2,ct2);
}