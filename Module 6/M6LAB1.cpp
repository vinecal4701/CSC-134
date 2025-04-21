// CSC 134
// M6LAB1
// vinecal4701 (B. Vineyard)
// 4/21/2025


#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;




int main()
{
    // Idea is to replace the simplest parts of Buckshot Roulette.
    //Variables
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;  //do we need this? We would with an array

    //example one: using a basic array
    int magazine[] = {RED, RED, BLACK, BLACK};
    for (int shell : magazine){
        string shellname;
        if (shell == BLACK){
            shellname = "Black";
        }
        if ( shell == RED){
            shellname = "Red";
        }
        cout << "Next shell: " << shellname << endl;
    }

    //Example two: using a vector
    // .size() tells you how many items are in the vector
    // .push_back() adds an item to the back (end) of the vector
    // .pop_back() removes an item from the back (end) of the vector
    vector<int> mag;
    //load mag
    mag.push_back(BLACK);
    mag.push_back(RED);
    mag.push_back(BLACK);
    mag.push_back(RED);
    int num_shells = mag.size();
    // look at shell before you eject it
    int current_shell = mag.at(num_shells-1);
    cout << "Next shell: " << current_shell << endl;
    //eject a shell
    mag.pop_back(); //this removes the last shell
    num_shells--;
    //repeat
    current_shell = mag.at(num_shells-1);
    cout << "Next shell: " << current_shell << endl;
    mag.pop_back(); // removes last shell
    cout << "Mag contains " << mag.size() << " shells." << endl;
    cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;
    
    
    cout << endl;
    
    return 0;
}