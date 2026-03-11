#include<iostream>
using namespace std;

int main()
{
	int row,col;
	
	for(row=1; row<=5; row=row+1)
	{
		for(col=5; col>=1; col=col-1)
		{
			cout << col * col * col << " ";
		}
		cout << "\n";
	}
	
	cout << "\n";
	
		
	for(row=1; row<=5; row=row+1)
	{
		char name = 'a' + row-1;
		
		for(col=5; col>=1; col=col-1)
		{
			cout << name << " ";
		}
		cout << "\n";
	}
	
	cout << "\n";
	
	for(row=1; row<=5; row=row+1)
	{
		for(char col='a'; col<='e'; col=col+1)
		{
			 cout << col << " ";
		}
		cout << "\n";
	}
	
	cout << endl;
	
	int count = 1;
	for(row=1; row<=5; row=row+1)  
	{
		for(col=1; col<=5; col=col+1)
		{
			cout << (row-1)*5+col << " ";	
		}
		cout << endl;
	}
	cout << endl;
	
}
