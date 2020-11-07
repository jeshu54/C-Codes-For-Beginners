#include<iostream>
#include<vector>

#include<algorithm>

using namespace std;

int main(){

vector <int> l;
uint64_t num;
int s;
uint64_t n = num;
uint64_t sum, rev=0, digit;
for(int i=100; i<1000; i++) {
	for (int j=100; j<1000; j++) {
	  num=i*j;
	  n=num;
	  rev=0;
	
 while (num!=0) {
   digit = num % 10;#include <iostream>
#include<cmath>

using namespace std;

int main() {
   rev = (rev * 10) + digit;
   num = num / 10;
}
if (n == rev){
  l.push_back(n);
}
}
}
cout << *max_element(l.begin(), l.end());
}
