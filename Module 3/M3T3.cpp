// CSC 134
// M3T3- RNG
// vinecal4701 (B. Vineyard)
// 2/17/2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
// rolling dice

const int SIDES = 4;
//int seed = 3;
int seed = time(0);
// seed the random number generator
srand(seed);
// rand () is large number so we take the remainder which is %
int roll;
roll = (rand() % SIDES);
cout << roll << endl;

roll = (rand() % SIDES);
cout << roll << endl;

roll = (rand() % SIDES);
cout << roll << endl;

cout << endl;
cout << endl;
cout << endl;
return 0;
}