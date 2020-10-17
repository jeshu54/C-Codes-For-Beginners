#include <iostream>
#include <cmath>

using namespace std;

// Brute force on sorted Array
void findduplicate(int array[], int size) {
  int lastDuplicate=0;
  for(int i=0; i<size; i++) {
  	if(array[i]== array[i+1] && array[i] != lastDuplicate) {
  		cout << array[i] << endl;
  		lastDuplicate = array[i];
  	}
  }
}

//Using hashing on Sorted array
void findduplicate2(int array [], int size, int array2 [], int size2) {
  
  for(int i=0; i<size; i++) {
    if(array[i] == array[i+1])
    array2[array[i]]++;
  //cout << array2[i];
  }
  for(int i=0; i<size2; i++) {
    //cout << array2[i];
    if(array2[i]>0) {
      cout << i << "  "<<array2[i]+1<<endl;
    }
  }
}

int main() {
  int array[12] = {1,2,3,4,5,5,6,6,6,6,7,7};
  int sizeofarray =  sizeof(array)/sizeof(int);
  int H[8]= {};
  int sizeofarray1 =  sizeof(H)/sizeof(int);
  
  //cout << sizeofarray1 << endl;
  findduplicate(array, sizeofarray);
  findduplicate2(array, sizeofarray, H, sizeofarray1);
  return 0;

}