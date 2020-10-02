#include <iostream>

using namespace std;

int main() 
{


int Initial_Fees = 2500;

//int First_Next_fees=(Initial_Fees/100)*4 + Initial_Fees;
int noofincreases =5;
//cout << First_Next_fees << endl;
for(int i=1; i<=noofincreases; i++)
{

Initial_Fees += ((Initial_Fees/100)*4);
cout << "Year "<< i  <<  " Fees are:  " << Initial_Fees << endl;
}

return 0;

}