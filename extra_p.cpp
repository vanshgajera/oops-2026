#include<iostream>
using namespace std;

class LibraryResource
{
	protected:
		int resourceID;
		string title;
		int daysOverdue;
		
	public:
		LiberaryResource(int id, string t, int days)
		{
			if(t.empty())
			{
				throw invalid_argument("Title cannot be empty!");
			}
			
			if(days < 0)
				throw invalid_argument("Days orvedue cannot be negative!");
				
			this.resourceID = id;
			this.title = t;
			this.daysOverdue = days;
		}
		
		virtual double computeFine() = 0; //pure virtual
		
		virtual void showResorceDetails()
		{
			cout << "ID: " << resourceID << endl;
			cout << "Title: " << title << endl;
			cout << "Days Overdue: " << daysOverdue << endl;
		}	
		
		virtual ~LiberaryResource()  // Virtual Destructor
		{
			
		}
}

class Book:public LiberaryResource
{
	string author;
	
	public:
		Book(int id, string t, int days, string a): LiberaryResource(int id,string t, int days)
		{
			this.author = a;
		}
};

class Journal:public LiberaryResource
{
	int volumeNumber;
	
	public:
		Journal(int id, string t, int days, int v): LiberaryResource(int id,string t, int days)
		{
			this.volumeNumber = v;
		}
		
}

int main()
{
	
}
