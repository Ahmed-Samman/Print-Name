#include<iostream>
#include<string>
using namespace std;


void Print_Letters()
{
	int Counter = 65;

	for (Counter; Counter <= 90; Counter++)
	{
		cout << char(Counter) << endl;
	}
}


int main()
{
	
	Print_Letters();

	return 0;
}