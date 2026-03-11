#include<iostream>
using namespace std;

int main()
{
	int row, col;
	int n;
	cout << "Enter the number: ";
	cin >> n;
	
	for(row=1; row<=n; row=row+1)
	{
		//space print
		for(col=1; col<=n-row; col=col+1)
			cout <<"  ";
		
		//star print
		for(col=1; col<=row; col=col+1)
		{
			cout << "* "; 
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(row=1; row<=n; row=row+1)
	{
		//space print
		for(col=1; col<=n-row; col=col+1)
			cout <<"  ";
		
		//star print
		for(col=1; col<=row; col=col+1)
		{
			cout << row << " "; 
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(row=1; row<=n; row=row+1)
	{
		//space print
		for(col=1; col<=n-row; col=col+1)
		{
			cout << "  ";
		}
		
		//star print
		for(col=1; col<=row; col=col+1)
		{
			cout << col << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	for(row=1; row<=n; row=row+1)
	{
		//space print
		for(col=1; col<=n-row; col=col+1)
		{
			cout << "  ";
		}
		
		//char print
		for(char name='A'; name<='A'+row-1; name=name+1)
		{
			cout<< name << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(row=1; row<=n; row=row+1)
	{
		for(col=1; col<=n-row; col=col+1)
		{
			cout << "  ";
		}
		
		for(col=row; col>=1; col=col-1)
		{
			cout << col << " ";
		}
		cout << endl;
	}
	
}
