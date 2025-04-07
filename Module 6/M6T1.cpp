// CSC 134
// M6T1
// vinecal4701 (B. Vineyard)
// 4/xx/2025


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void first_version();
void second_version();


int main()
{
    int choice;
    cout << "Which version would like to use? version [1] or [2], [0] to exit?" << endl;
    cin >> choice;

    if (choice == 1){
        first_version();
    }
    else if( choice == 2){
        second_version();
    }
    else if(choice == 0){
        cout << "Goodbye!" << endl;
        cout << endl;
        return 0;
    }
    else{
        cout << "Invalid choice. Choose again." << endl;
        cout << endl;
        cin.ignore();
        main();
    }
    
    

    
    
    
    
    
    cout << endl;
    
    return 0;
}


void first_version(){
    // first version - no array
    const int DAYS = 5;
    int cars_today;
    int cars_total = 0;
    double cars_average;

    cout << "Enter cars that pass for each day." << endl;
    for(int i = 0; i < DAYS; i++){
        cout << "Day " << i+1 << ": ";
        cin >> cars_today;
        cars_total += cars_today;
    }
    cars_average = (double) cars_total / DAYS;
    cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
    cout << "The average number of cars per day was " << cars_average << endl;
    cout << endl;
    main();
}

void second_version(){
    // second version - using array
    const int DAYS = 5;
    int cars_today;
    int cars_total = 0;
    double cars_average;
    int cars[DAYS];

    cout << "Enter cars that pass for each day." << endl;
    for(int i = 0; i < DAYS; i++){
        cout << "Day " << i+1 << ": ";
        cin >> cars_today;
        cars[i] = cars_today; // save today's value in the array
        cars_total += cars_today;
    }
    cars_average = (double) cars_total / DAYS;
    cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
    cout << "The average number of cars per day was " << cars_average << endl;

    // Now print the array
    for ( int i = 0; i<DAYS; i++){
        cout << "Day: " << i+1 << " Count: " << cars[i] << endl;
    }
    cout << endl;
    main();
}