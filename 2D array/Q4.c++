#include <iostream>
using namespace std;
int main(){
	int x[3][2]={
	{1,0},
	{0,2},
	{2,1}
	};
	char y[300];
	cin.getline(y,300);
	int i=0;
	int r = 0;
	for(;y[i] != '\0';){
		
		if (y[i] == 'a')
		{
			r = x[r][0];
		}
		if (y[i] == 'b')
		{
			r = x[r][1];
		}
		i++;
	}
	if (r == 2)
	{
		cout << "accepted";
	}
	else
	{
		cout << "not accepted";
	}
	
}