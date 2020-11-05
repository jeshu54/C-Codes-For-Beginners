#include <iostream>
using namespace std;


int main() {

	uint64_t *arr, *brr;
	uint64_t n=4000000;
	uint64_t sum=0;
	arr= new uint64_t[n];
	brr= new uint64_t[n];
	arr[0] = 1;
	arr[1]= 2;
	
	for(uint32_t i=2; i< n; i++) {
		arr[i] = arr[i-1] + arr[i-2];
		//cout<< arr[i]<< " ";	
		}
		
	for(uint32_t i=0; i< n; i++) {
		if(arr[i]%2==0){
			brr[i] += arr[i];
			
			sum += brr[i];
			//cout << brr[i] << "  ";
		}
		}
		cout << sum;
		
	}

