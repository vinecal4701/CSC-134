#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

cout << "Let's perform some simple addition!" << endl;
const int OFFSET = 5;

int seed = time(0);
// seed the random number generator using time from the system
srand(seed);

// rand () is large number so we take the remainder which is %
int first_number, second_number, sum, answer;
first_number = (rand() % OFFSET) + 1;
second_number = (rand() % OFFSET) + 1;
sum = first_number + second_number;

cout << "What does: " << first_number << " + " << second_number << " =" << endl;
cin >> answer;


if (answer == sum) {
    cout << "That is correct!" << endl;
}
else if (answer != sum) {
    cout << "I'm sorry, " << answer << " is not the correct answer. The correct answer is " << sum << "." << endl;
}


cout << endl;
cout << endl;
cout << endl;
return 0;
}