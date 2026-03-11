#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout <<"Enter the number of n number = ";
	cin >> n;
	
//	for(int i=1; i<=n; i= i+1)
//	{
//		cout << i <<" Sqaure is:" << i * i<<endl;
//	}

	int fact = 1;
	for(i=1; i<=n; i=i+1)
	{
		fact = fact * i;
	}
	cout << fact;
	
}
