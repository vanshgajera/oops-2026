#include<iostream>
using namespace std;

int main()
{
	int n,i,last=0, prev=1,curr;
	cout << "Enter the number of n: ";
	cin >> n;
	
	for(i=1; i<=n; i=i+1)
	{
		cout << last << " ";
		
		curr = prev + last;
		last = prev;
		prev = curr;
		
	}
	
	return 0;
}
