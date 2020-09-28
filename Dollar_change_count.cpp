#include<iostream>

using namespace std;

int main(){

int userpennies = 0;
int userdimes = 0;
int usernickels = 0;
int userquarters = 0;

int pennies = 100;
int dimes = 5;
int nickels = 20;
int quarters = 4;

cout<< "enter no. of quarters for 1 Dollar"<< endl;
cin >> userquarters;

if(userquarters>0 && userquarters<=4){
	if(userquarters == quarters){

		cout <<"congrats"<< endl;
 	}
 	else{
 		cout<< "insert another " << quarters - userquarters << " Quarters " <<endl;


 	}
 }
else{

	cout<< "Collect extra quarters "<< userquarters - quarters << endl;

}
return 0;
}


