#include<iostream> 
#include<string>
using namespace std;

// I want to make a function that is defined in the class, which will reverse strings.




void reverse(string A, string B, int size) {
  
  for(int i=size-1; i>=0; i--) {
    B[size-i-1] = A[i];
 }
  for (int i=0; i<=size-1; i++) {
    cout << B[i] ;
}
}

int main() {
  int size;
  string A;
  cout << "Enter a string you want to reverse: "; 
  cin >> A;
  string B;
  size = A.length();
  reverse(A,B, size);

}
