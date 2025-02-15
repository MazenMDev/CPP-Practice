#include <iostream>
using namespace std;
int main(){
	int x[90][90];
	int countgood = 0;
	int countbad = 0;
	for(int r=0; r<90; r++){
		for(int c=0; c<90; c++){
			cin>>x[r][c];
		}
	}

	for(int r=0; r<90; r++){
		countbad = 0;
		for(int v=1; v<=90; v++){
			countgood = 0;
			for(int c=0; c<90; c++){
				if (x[r][c] == v)
				{
					countgood++;
				}
			}
			if(countgood != 1)
			{
				countbad++;
			}
		}
		if(countbad == 0)
		{
			cout << "The " << r << " row is good\n";
		}
	}
}