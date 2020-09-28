#include <iostream>

using namespace std;

int main()
{

	float speed = 0;
	int time = 0;
	int count = 0;
	float distance = 0;
	cout << "Enter total time" << endl;
	cin  >> count;

	for(int i=1; i<= count; i++)
	{

		
		cout << "Enter Speed of the car at"<< i << "th hour" << endl;
		cin  >> speed;
		distance += 1 * speed;
		cout <<  "Distance in " << i << " hour is " << distance << endl;

	}
	cout << "Total distance travelled in " << count << " hours is " << distance << endl;
	return 0;
}