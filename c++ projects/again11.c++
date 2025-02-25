#include <iostream>
using namespace std;

void read(int x[], int N){
	for(int i=0; i<N; i++){
		cin>>x[i];
	}
}

void gen(int x[], int N, int y[], int &pos, int &pos2){
	int check = 0;
	int i,k;
	//*we will get the positions
	for(int i=0; i<N; i++){
		if(check == 0){
			if(x[i] == (i/2)){
			pos = i;
			check++;
		}
		}
		if(x[i] == (i/2)){
			pos2 = i;
		}
	}
	//*we got the positions
	
	//!do the right
	for(int i=0; i<pos; i++){
		if(x[i] % 2 != 0){
			y[k] = x[i];
			k++;
		}
	}
	//!do the right
	
	//todo fill now the right
	for(i=0;i<pos; i++)	{
		if (y[i] > 0 )
		{}
		else{
			y[i] = -1;
		}	
	}
	y[i] = x[pos];
	//todo fill now the right
	
	//!do the left
	k = N;
	for(int i=N; i>pos2; i--){
		if(x[i] % 2 != 0){
			y[k] = x[i];
			k--;
		}
	}
	//!do the left

	//todo fill now the left
	for(i=N; i>pos2; i--){
		if(y[i] > 0){}
		else{
			y[i] = -1;
		}
	}
	y[i] = x[pos2];
	//todo fill now the left

	//?: Fill between pos and pos2
	for(int i=pos+1; i<pos2; i++){
		y[i] = -1;
	}
}

void avg(int x[], int &pos, int &pos2, int &avg){
	int tot = 0;
	int count = 0;
	for(int i=pos+1; i<pos2; i++){
		tot +=x[i];
		count++;
	}
	avg = tot / count;
}

void add(int y[], int N, int &avg){
	for(int i=0; i<N; i++){
		y[i] += avg;
	}
}

void addbad(int q[], int N, int &avg){
	for(int i=0; i<N; i++){
		if(q[i] < 0){
			q[i] += avg;
		}
	}
}

int main(){
	int x[200]; int y[200];
	int q[600]; int w[600]; int z[600];
	int pos,pos2;
	int a1,a2;
	read(x,200);
	gen(x,200,y,pos,pos2);
	avg(x,pos,pos2,a1);
	avg(y,pos,pos2,a2);
	add(y,200,a1);
	add(y,200,a2);
	read(q,600);
	gen(q,600,z,pos,pos2);
	add(z,600,a1);
	avg(q,pos,pos2,a1);
	avg(z,pos,pos2,a2);
	add(z,600,a1);
	add(z,600,a2);
	read(w,600);
	gen(w,600,q,pos,pos2);
	avg(w,pos,pos2,a1);
	avg(q,pos,pos2,a2);
	addbad(q,600,a1);
	addbad(q,600,a2);
	read(y,200);
	gen(y,200,x,pos,pos2);
	read(q,600);
	gen(w,600,z,pos,pos2);
	avg(x,pos,pos2,a1);
	avg(y,pos,pos2,a2);
	add(y,200,a1);
	add(y,200,a2);

}