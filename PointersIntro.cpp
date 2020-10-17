#include<iostream>
using namespace std;

int main() {

  int b=2;
  cout << &b << endl;

  int *p = &b; // P is a pointer, pointing to the int, which is also equal to the value of value at the address of b.

  cout << p << endl; // Printing address of int
  cout << &p << endl; // Printing address of p
  cout << *p << endl; // Printing value of *p
  
  
  int *m = &b; // P is a pointer, pointing to the int, which is also equal to the value of value at the address of b.
  *m = 45; // if I say *m = &b, I am basically saying *m is an allias to b, and if I change *m, I am actually changing b.
  cout << m << endl; // Printing address of int
  cout << &m << endl; // Printing address of p
  cout << *m << endl; // Printing value of *p

// Note:  *m = a  is same as saying a = a.
//int *l = b;  This is illegal. You cannot point to the value of the variable.

  double x[10]; // Creating an array with length 10
  double * s = &x[0]; // It's same as saying
  double * s2 = x;
  cout << x << endl;
  cout << &*s << endl;
  cout << &*s2 << endl;
  // Essentially &*s2 = &*s = x = &*x. They are same memory address
  cout << *x << endl;
  cout << *s << endl;
  cout << *s2 << endl;
  // Essentially *s2 = *s = x[0] = *x. They have same memory address
}