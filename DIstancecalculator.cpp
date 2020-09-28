#include <iostream>

using namespace std;

int main()
{

	int speed = 0;
	int time = 0;
	int distance = 0;
	cout << "Enter total time" << endl;
	cin  >> time;

	for(int i=1; i<= time; i++)
	{

		
		cout << "Enter Speed of the car at"<< i << "th hour" << endl;
		cin  >> speed;
		distance = i * speed;
		cout <<  "Distance in " << i << " hour is " << distance << endl;

	}

	return 0;
}