#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

int main(){
    bool keep_going = true;
    while (true == keep_going){  
            
    int choice;
    string game_over ("Thank you for playing!");

    cout << "Welcome to my simple choose your own adventure game!" << endl;
    cout << "We begin with your character standing at the mouth of a great cave. Please choose between choice [1] (enter the cave) or choice [2] (walk away to begin). You may also choose [0] to end the program." << endl;
    cin >> choice;


    if ( 1 == choice) {
        cout << "You choose to enter the cave and explore. " << endl;
        cout << "You come upon a split in the tunnel. Choose [1] for left or [2] for right." << endl;
        cin >> choice;

        if ( 1 == choice){
            cout << "You chose to venture down the left tunnel and come upon a large cavern. On a raised rock in the middle there is a chest." << endl;
            cout << "Do you approach [1] or look around for traps [2]?" << endl;
            cin >> choice;

            if ( 1 == choice){
                cout << "You start to approach the chest and activate a pressure plate controlled spike which impales you." << endl;
                cout << game_over << endl;
                cout << endl;
        cout << endl;
        cout << endl;
            }
            else if (2 == choice){
                cout << "You look around for traps and manage to avoid the hidden pressure plate spikes." << endl;
                cout << "You now stand in front of the chest. Open it [1] or walk away [2]?" << endl;
                cin >> choice;

                if (1 == choice){
                    cout << "You reach out to open the chest and upon touching it the chest turns into a mimic and devourers you." << endl;
                    cout << game_over << endl;
                    cout << endl;
        cout << endl;
        cout << endl;
                }
                else if (2 == choice){
                    cout << "You turn to walk away and accidentallty activate a trip wire you had stepped over." << endl;
                    cout << "You died from a poison dart. " << game_over << endl;
                    cout << endl;
        cout << endl;
        cout << endl;
                }
            }
        }
        else if (2 == choice){
            cout << "You chose to venture down the right tunnel and the ceiling collapsed on you." << endl;
            cout << game_over << endl;
            cout << endl;
        cout << endl;
        cout << endl;
        }
    }
    else if ( 2 == choice) {
        cout << "You choose to walk away and go on about your life never knowing what treasures or horrors awaited you in that cave." << endl;
        cout << game_over << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
    else if (0 == choice){
        cout << "Goodbye!" << endl;
        cout << endl;
        cout << endl;
        return 0;
    }
    else if ( 0,1,2 != choice) {
        cout << "That is and invalid choice. please try again." << endl;
        cout << endl;
        cout << endl;
        cout << endl;
    }
}
return 0;
}