#include <iostream>
using namespace std;
int main(){
	int x[4][4];
	int posr,posc;
	int r,c;
	for(int r=0; r<4; r++){
		for(int c=0; c<4; c++){
			cin>>x[r][c];
			if (x[r][c] == 0)
			{
				posr = r; 
				posc = c;
			}
		}
	}
	
	for(;;){
	cout << "Enter the Selceted cell (r,c): ";
	cin>> r >> c;
		for(;;){
			if ((r==posr && c==posc+1)||(r==posr && c==posc-1)||(r==posr+1 && c==posc)||(r==posr-1 && c==posc))
			{
				break;
			}
			else	
			{
				cin>> r >> c;
			}	
		}
		x[posr][posc] = x[r][c];
		x[r][c] = 0;
		posr = r;
		posc = c;
		int count = 1;
		for(int r=0; r<4; r++){
			for(int c=0; c<4; c++){
				if (x[r][c] == count)
				{
					count++;
				}
				else 
				if(r != 3 && c != 3)
				{
					count = -1;
					break;
				}
			}
			if (count == -1)
			{
				break;
			}
		}
		if (count == 16 && x[3][3] == 0)
		{
			break;
		}
		else
		{
			cout << "Try again";
		}
	}

	cout << endl;
	cout << "Puzzle have been sorted\n";
}
