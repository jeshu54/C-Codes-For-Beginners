#include<iostream>
#include<string>
using namespace std;

// I want to make a function that is defined in the class, which will reverse strings.

void Palindrome(string A, string B, int size) {
  int counter;

  for(int i=size-1; i>=0; i--) {
      B[i] = A[i]|32;
    }
//cout << B[i] << " "<< i << '\n';
  for(int i=size-1; i>=0; i--)   {
    if (B[i] == ' ') {
      continue;
    }
    if (B[size-i-1] == B[i]) 
      
      counter++;
    
    
    else 
      counter--;

//cout << B[i] << endl;
}
    if(size == counter) {
      cout << "Your input string is a palindrome" << endl;
    }
    else {
      cout << "Your input string is not a palindrome" << endl;
    }
    cout << counter << endl;
}

int main() {
  int size;
  string A;
  cout << "Enter a string you want to check for palindrome: "; 
  cin >> A;
  string B;
  size = A.length();
  Palindrome(A,B, size);
  cout << size << endl;

}