#include<iostream>
using namespace std;

int main()
{
	int row,col,n;
	
	cout << "enter the number of n: ";
	cin >> n;
	
	//Upper part
	for(row=1; row<=n; row++)
	{
		//space print
		for(col = n-row; col>=1; col--)
		{
			cout << " ";
		}
		
		//* print
		for(col=1; col<=row; col++)
		{
			cout << "* ";
		}
		
		cout << endl;
	}
	
	//Lower part
	for(row=n; row>=1; row--)
	{
		//space print
		for(col = n-row; col>=1; col--)
		{
			cout << " ";
		}
		
		//* print
		for(col=1; col<=row; col++)
		{
			cout << "* ";
		}
		
		cout << endl;
		 
	}
}
