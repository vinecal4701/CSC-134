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
cout << "Let's roll some dice!" << endl;
const int SIDES = 4; // SIDES = MAX

int seed = time(0);
// seed the random number generator using time from the system
cout << "Your seed # is: " << seed << endl;
srand(seed);

// rand () is large number so we take the remainder which is %
int roll1, roll2, total;
roll1 = (rand() % SIDES) + 1;
cout << "Your roll was: " << roll1 << endl;

roll2 = (rand() % SIDES) + 1;
cout << "Your roll was: " << roll2 << endl;

total = roll1 + roll2;
cout << "Your total is: " << total << endl;

//Let's play Craps!
// 7 and 12 -> win
// 2, 3 and 12 -> lose
// anything else -- comes later
if (total == 7) {
    cout << "Lucky seven! You win!" << endl;
}
else if (total == 11) {
    cout << "Eleven is a winner!" << endl;
}
else if (total == 2) {
    cout << "Snake eyes! Too bad, you lose." << endl;
}
else if (total == 3) {
    cout << "Sorry, three is unlucky. You lose." << endl;
}
else if (total == 12) {
    cout << "Boxcars! Sorry, you lost." << endl;
}
else {
    cout << "Your point is " << total << /*but we will do this part later*/ endl;
}

cout << endl;
cout << endl;
cout << endl;
return 0;
}