#include <iostream>

using namespace std;

int main()
{

	int year = 2020;
	float oceanlevel = 0;

	for (int i=1; i <= 25; i++)
	{
		year += 1; 
		oceanlevel += 1.5;
		cout << "Year " << year << " oceanlevel  " << oceanlevel << endl;
	}



return 0;
}