#include<iostream>
using namespace std;

// A program to find the largest and smallest integer from a user inputted list of integer.


// We will use the technique of mergesorting to sort the list of integer. The first element of the sorted list will give the smallest integer and the last element will give the largest integer.
void swap (int *x,int *y) {
	int temp = *x;
	*x=*y;
	*y=temp;

}


void sort(int A [], int  sizeofarray) {
  int i = 0;
  int h = sizeofarray-1;
  int mid = (i + h)/2;
  int l = 0;
  int B[h]; 
	
  for(i=0; i <= h;i++) {
  	for(int j=0; j<=h-i-1; j++) {
  		if(A[j] >= A[j+1]) {

  			swap(&A[j], &A[j+1]);
  		}
  		
  		}
  	}

  	for(int i =  0; i<=h; i++) {
  		cout << A[i];
  		cout << '\n';
  	}

int largest = A[h];
int smallest = A[0];
cout << "Largest integer: " << largest << endl;
cout << "Smallest integer: " << smallest << endl;

 } 

//cout << "Largest integer: " << largest << endl;
//cout << "Smallest integer: " << smallest << endl;



int main () {
  const int sizeofarray = 100;
  int counter=0;
  int A[counter];
  
  for (int i=0; i<sizeofarray-1; i++) {
  	cout << " Enter Array element: " << endl;
  	
  	cin >> A[i];
  	counter++;
  	cout<< "Counter " << counter;
  	if(A[i]== -99) 
  		//counter--;
  		break;
  	
  	
  }
   //sizeof(arr[7])/sizeof(arr[0]);
  //cout << "Size of array " << sizeofarray << endl;
  cout << counter;
  //sort(A, counter);



};