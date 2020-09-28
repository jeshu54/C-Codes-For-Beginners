#include <iostream>

using namespace std;

int main ()
{
float calorie = 0;
float CBPM = 3.9;
int Minutes = 30;


for(int i=10; i<=Minutes; i+=5)
{

calorie = CBPM*i;

cout << calorie << endl;

}



return 0;
}