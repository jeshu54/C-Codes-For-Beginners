#include <iostream>
#include <string>

using namespace std; 

string suffix(int days);
//string suffix1(int days);
int main()


{

	float pennies = .01;
	float days=0;
	cout << "Enter the number of days" << endl;
	cin >> days;
	string t ;
	t = suffix(days);
	float totalsalary1=0;
	

	float	totalsalary = 0;

	for(int i=1; i<= days; i++)
	{
		string t1 ;
		t1 = suffix(i);
		totalsalary = 1*pennies;
		pennies *= 2;
		totalsalary1 += 1*pennies;
		cout << "salary on " << i << t1 << " day " << " $"<< totalsalary << endl;
	}


cout << "Total salary at the end of " << days << t  << " day " << " $"<< totalsalary1 << endl;
return 0;
}


string suffix(int days)
{

string type;

if(days>3) 
	 {type ="th";} 
else if(days==2)
	{type = "nd";} 
else if (days==3)
	{type = "rd";} 
else
	{type = "st";}

return type;
}

