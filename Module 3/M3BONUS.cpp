// Generated, per instructions, using an Large language model. Started with ChatGPT but had to switch to copilot and continue through that.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random> // this was added by the prompt to improve the RNG

using namespace std;

// Prompted Copilot to make the RNG more truly randomized

// Function to generate a random number between min and max
int getRandomNumber(int min, int max) {
    // Create a random number engine and distribution
    std::random_device rd;                       // Obtain a random seed
    std::mt19937 generator(rd());               // Use Mersenne Twister for random number generation
    std::uniform_int_distribution<int> dist(min, max); // Define the range of numbers

    return dist(generator); // Generate and return the random number
}


// Function to print the current status of the player
void printStatus(int health, int bugHealth) {
    cout << "\nYour health: " << health << endl;
    cout << "Bug's health: " << bugHealth << endl;
}

// Function to handle player attack
int playerAttack(int bugHealth, int weaponDamageMin, int weaponDamageMax) {
    int damage = getRandomNumber(weaponDamageMin, weaponDamageMax);
    bugHealth -= damage;
    cout << "You attack the bug and deal " << damage << " damage!" << endl;
    return bugHealth;
}

// Function to handle bug attack
int bugAttack(int health) {
    int damage = getRandomNumber(10, 20); // Random damage between 10 and 20
    health -= damage;
    cout << "The bug attacks you and deals " << damage << " damage!" << endl;
    return health;
}

// Function to handle healing
int heal(int health) {
    int healing = getRandomNumber(20, 30); // Random healing between 20 and 30
    health += healing;
    cout << "You heal yourself for " << healing << " health!" << endl;
    return health;
}

int main() {
    srand(time(0)); // Seed the random number generator
    int playerHealth = 100;  // Player's starting health
    int bugHealth = 150;     // Bug's starting health
    string action;

    // Weapon selection
    cout << "Choose your weapon:\n1. Sword (15-25 damage)\n2. Bow (10-30 damage)\n3. Magic Wand (20-20 damage)\n";
    int weaponChoice;
    int weaponDamageMin, weaponDamageMax;
    cin >> weaponChoice;

    switch (weaponChoice) {
        case 1: // Sword
            weaponDamageMin = 15;
            weaponDamageMax = 25;
            cout << "You chose the Sword!" << endl;
            break;
        case 2: // Bow
            weaponDamageMin = 10;
            weaponDamageMax = 30;
            cout << "You chose the Bow!" << endl;
            break;
        case 3: // Magic Wand
            weaponDamageMin = 20;
            weaponDamageMax = 20;
            cout << "You chose the Magic Wand!" << endl;
            break;
        default: // Invalid choice
            cout << "Invalid choice. Defaulting to Sword." << endl;
            weaponDamageMin = 15;
            weaponDamageMax = 25;
    }

    cout << "You are fighting a giant bug the size of a car!" << endl;

    // Main game loop
    while (playerHealth > 0 && bugHealth > 0) {
        printStatus(playerHealth, bugHealth);

        // Input validation loop for player's action
        bool validInput = false;
        while (!validInput) {
            cout << "\nWhat do you want to do? (attack / dodge / heal): ";
            cin >> action;

            if (action == "attack" || action == "dodge" || action == "heal") {
                validInput = true; // Valid input received
            } else {
                cout << "Invalid action. Please choose 'attack', 'dodge', or 'heal'." << endl;
            }
        }

        // Branch based on player's action
        if (action == "attack") {
            bugHealth = playerAttack(bugHealth, weaponDamageMin, weaponDamageMax);
        } else if (action == "dodge") {
            cout << "You attempt to dodge the bug's attack!" << endl;
            if (getRandomNumber(1, 10) <= 3) { // 30% chance the bug misses
                cout << "You successfully dodge the bug's attack!" << endl;
            } else {
                cout << "The bug still hits you!" << endl;
                playerHealth = bugAttack(playerHealth); // Bug still attacks
            }
        } else if (action == "heal") {
            playerHealth = heal(playerHealth);
        }

        // Bug attacks after the player takes an action
        if (bugHealth > 0) {
            playerHealth = bugAttack(playerHealth);
        }

        // Check for win/lose conditions
        if (playerHealth <= 0) {
            cout << "\nYou have been defeated by the bug!" << endl;
            break;
        } else if (bugHealth <= 0) {
            cout << "\nYou defeated the bug!" << endl;
            break;
        }
    }

    return 0;
}
