#include<iostream>
#include<string>
using namespace std;

struct stFullName
{
	string FirstName;
	string LastName;
};

stFullName ReadName()
{
	stFullName FullName;
	
	cout << "Please enter your First Name: ";
	cin >> FullName.FirstName;

	cout << "Please enter your Last Name: ";
	cin >> FullName.LastName;
	
	return FullName;
}

string GetFullName(stFullName FullName)
{
	string Name = FullName.FirstName + " " + FullName.LastName;
	return Name;
}

void PrintFullName(string Name)
{
	cout << "Your  full name is: " << Name << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadName()));

	return 0;
}