#include <iostream>
using namespace std;
int main(){
	int x[20][20];
	for(int r=0; r<20; r++){
		for(int c=0; c<20; c++){
			cin>>x[r][c];
		}
	}	

	int row = 1;
	int L = 3;
	int max = -99999;
	int tot=0;
	int posr,posc;
	int h=1;
	int possaver,possavec,saveg;
	int g=1;
	for(;;){
		for(int r=0; r<20; r++){
			for(int c=0; c<20; c++){
				posr = r;
				posc = c;
				if (posr+h <20 && posc+h<20)
				{
					while (row < L)
					{
						for(int colo=posc; colo<=posc+h; colo++){
							tot += x[row][colo];
						}
					row++;
					}
				}
				if (max < tot)
				{
					max = tot;
					possaver = r;
					possavec = c;
					saveg = g;
				}
				tot = 0;
				row = 1;
				L++;
			}
		}
		if (posr+h == 20 && posc+h == 20)
		{
			break;
		}
		L++;
	}


}