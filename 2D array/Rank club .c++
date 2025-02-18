#include <iostream>
using namespace std;
int main(){
	int rank[20][100];
	int count = 0;
	int maxcount = -999999;
	int TheBest;
	int x;
	int sc;
	for(int r=0; r<20; r++){
		count = 0;
		for(int c=0; c<100; c++){
			cin>>rank[r][c];
			if (rank[r][c] == 1)
			{
				count++;	
		}
	   if (maxcount < count) {
       	      maxcount = count;
              TheBest = r;
    }
	}
	cout << "Clubs who get the first place is: ";
	for(int r=0; r<20; r++){
		x = 0;
		for(int c=0; c<100; c++){
			if (rank[r][c] == 1)
			{
				x++;
				if (x == 1)
				{
					cout <<  r << endl;
				}
			}	
		}
	}

	cout << "The best club of the century is: " << TheBest;
	cin>>sc;
	int maxrank = 99999;
	for(int c=0; c<100; c++){
		if (maxrank > rank[sc][c])
		{
			maxrank = rank[sc][c];
		}
	}
	cout << "The max rank is " << maxrank << "for club number " << sc;
}
