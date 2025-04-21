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

    
    
    
    
    
    cout << endl;
    
    return 0;
}