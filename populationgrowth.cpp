#include<iostream>
//#include<>

using namespace std;


void populationgrowth(int size, int growth, int days) {
size;
for(int i=1; i<= days; i++) {

	
	size += size*(growth/100);
	cout << "Day Number: " << i << endl;
	cout << " size" << size << " " << days ;
}


}

int main() {

int starting_size;
int growth_percentage;
int numofdays;

cout << "Enter a starting size more than 2: " << endl;
cin >> starting_size;
while(starting_size <0) {
  cout << "Enter Starting size more than 2" << endl;
  cin >> starting_size;
}
cout << "Enter growth percentage" << endl;
cin >> growth_percentage;
while(growth_percentage<1) {
  cout << "Enter growth percentage: " << endl;
  cin >> growth_percentage;
}
cout << "Enter number of days" << endl;
cin >> numofdays;
while(numofdays<1) {
  cout << "Enter number of days: " << endl;
  cin >> numofdays;
}

populationgrowth(starting_size,growth_percentage,numofdays);



}