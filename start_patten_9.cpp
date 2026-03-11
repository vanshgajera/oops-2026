#include<iostream>
using namespace std;

int main()
{
	int row,col,space;
	
	for(row=0; row<=5; row=row+1)
	{
		//print space
		for(space=0; space<=row-1; space=space+1)
		{
			cout << "  ";
		}
		//print star
		for(col=1; col <= 9-space*2; col=col+1)
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	int n;
	cout << "enter the input: ";
	cin >> n;
	
	for(row=n; row>=1; row=row-1)
	{
		//space
		for(col=1; col<=n-row; col=col+1)
		{
			cout << "  ";
		}
		//star print
		for(col=1; col<=2*row-1; col=col+1)
		{
			cout << "* ";	
		}
		cout << endl;	
	}
}
