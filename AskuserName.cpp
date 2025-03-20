#include<iostream>
#include<string>
using namespace std;

string user_name()
{
	string full_name; 
	
	cout << "What's your name?\n";
	getline(cin, full_name);
	
	return full_name;
}

void Print_Name(string Name)
{
	cout << "Your Name is: " << Name << endl;
}

int main()
{
	Print_Name(user_name());


	return 0;
}