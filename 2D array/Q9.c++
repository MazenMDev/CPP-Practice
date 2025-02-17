#include <iostream>
using namespace std;
int main(){
	int x[20][20];
	for(int r=0; r<20; r++){
		for(int c=0; c<20; c++){
			cin>> x[r][c];
		}
	}
	int posr,posc;
	int tot = 0;
	int max = -9999999;
	int g = 1;
	int h = 1;
	int posdisplayr,posdisplayc;
	int posg,posh;
	for(;;){
		int count_out_of_range = 0;
		for(int r=0; r<20; r++){
			for(int c=0; c<20; c++){
				tot = 0;
				posr = r+g;
				posc = c-h;
				if (posr < 20 && posr >= 0 && posc<20 && posc>=0 && posr+g < 20 && posr+g>=0 && posc+h <20 && posc+h>=0)
				{
					for(;;){
						for(;;){
							tot += x[(posr)][(posc+h-1)];
							if (posr == (posc+g))
							{
								break;
							}
							posc++;
						}
						posr--;
						if (posr == r)
						{
							tot += x[posr][posc];
							if (max < tot)
							{
								max = tot;
								posdisplayr = r;
								posdisplayc = c;
								posg = g;
								posh = h;
							}
							break;
						}
						
					}
				}
				else
				{
					count_out_of_range++;
				}
			}
		}
		g++;
		h++;
		if (count_out_of_range == (20*20))
		{
			break;
		}
	}

	int k = 1;	
	int l = 1;
	
	cout << "The triangle with the largest sum: ";
	cout << endl; 

	for(int i = 0; i<posg ; i++){
		cout << " ";
	}
	cout << x[posdisplayr][posdisplayc];
	cout << endl;
	for(;;){
		posdisplayr++;
		for(int g=0; g<posg-k; g++){
			cout << " ";
		}
		for(int i=0; i<(posdisplayc+l); i++){
			cout << x[posdisplayr][i];
		}
		k--;
		l++;
		if (posdisplayr == posg)
		{
			break;
		}
		
	}
}