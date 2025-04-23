// CSC 134
// M6LAB1
// vinecal4701 (B. Vineyard)
// 4/21/2025


#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction strings for output
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    ENTRANCE_HALL = 0,
    CAFETERIA = 1,
    MATH_CLASS = 2,
    SCIENCE_CLASS = 3,
    NORTH_GROUNDS = 4,
    ART_CLASS = 5,
    WOOD_SHOP = 6,
    GYM = 7,
    FOOTBALL_FIELD = 8,
    PARKING_LOT = 9,
    NUM_ROOMS = 10
};


int main()
{
// Room names array
string roomNames[NUM_ROOMS] = {
    "Entrance Hall",
    "Cafeteria",
    "Math Class",
    "Science Class",
    "North Grounds",
    "Art Class",
    "Wood Shop",
    "Gym",
    "Football Field",
    "Parking lot"
};

// Room descriptions array
string roomDescriptions[NUM_ROOMS] = {
    "A spacious grand entrance hall with white tile floors and large vaulted ceilings.",
    "A large open room filled with many tables and benches with a long window wall looking out onto the North Grounds.",
    "A small classroom filled with desks and walls plastered with math related posters.",
    "A classroom with laboratory benches and chemistry equipment on all the benches.",
    "A vast green grounds with a large concrete arch seating area in the middle.",
    "A large classroom with several large square tables with many art supplies atop them. \nThe walls are covered by many hanging paintings done by students. \nThe room smells strongly of paint and paper.",
    "A large room filled with various wood working tools and machines and a few desks. \nThe room smells of paint, chemicals and various types of burnt wood.",
    "A large gymnasium containing a full size basketball court, collapsable bleachers on both sides and a small stage at the far end of the room. \nThe room smells of rubber, sweat and floor wax.",
    "A high school sized football field surrounded by large bleachers and a running track.",
    "A large parking lot stretching the length of the school."
};

// Adjacency list using a 2D array
// connections[from_room][direction] = to_room or -1 if no connection
int connections[NUM_ROOMS][NUM_DIRECTIONS];

// Initialize all connections to -1 (no connection)
for (int i = 0; i < NUM_ROOMS; i++) {
    for (int j = 0; j < NUM_DIRECTIONS; j++) {
        connections[i][j] = -1;
    }
}

// Define the connections between rooms using the Room enum
// Entrance Hall connections
connections[ENTRANCE_HALL][NORTH] = CAFETERIA;         // Entrance Hall -> North -> CAFETERIA
connections[ENTRANCE_HALL][EAST] = MATH_CLASS;         // Entrance Hall -> East -> MATH_CLASS
connections[ENTRANCE_HALL][SOUTH] = PARKING_LOT;       // Entrance Hall -> SOUTH -> PARKING_LOT
connections[ENTRANCE_HALL][WEST] = SCIENCE_CLASS;      // Entrance Hall -> West -> SCIENCE_CLASS

// CAFETERIA connections
connections[CAFETERIA][NORTH] = NORTH_GROUNDS;    // CAFETERIA -> north -> NORTH_GROUNDS
connections[CAFETERIA][EAST] = -1;                // No connection east
connections[CAFETERIA][SOUTH] = ENTRANCE_HALL;    // CAFETERIA -> South -> Entrance Hall
connections[CAFETERIA][WEST] = -1;                // No connection west

// MATH_CLASS connections
connections[MATH_CLASS][NORTH] = NORTH_GROUNDS;     // MATH_CLASS -> north -> NORTH_GROUNDS
connections[MATH_CLASS][EAST] = ART_CLASS;         // MATH_CLASS -> EAST -> ART CLASS
connections[MATH_CLASS][SOUTH] = -1;               // No connection South
connections[MATH_CLASS][WEST] = ENTRANCE_HALL;     // MATH_CLASS -> West -> Entrance Hall

// SCIENCE_CLASS connections
connections[SCIENCE_CLASS][NORTH] = FOOTBALL_FIELD;      // SCIENCE_CLASS -> north -> FOOTBALL_FIELD
connections[SCIENCE_CLASS][EAST] = ENTRANCE_HALL;      // SCIENCE_CLASS -> East -> Entrance Hall
connections[SCIENCE_CLASS][SOUTH] = PARKING_LOT;        // SCIENCE_CLASS -> SOUTH -> PARKING LOT
connections[SCIENCE_CLASS][WEST] = GYM;                 // SCIENCE_CLASS -> WEST -> GYM

// NORTH_GROUNDS connections
connections[NORTH_GROUNDS][NORTH] = -1;                     // No connection north
connections[NORTH_GROUNDS][EAST] = WOOD_SHOP;              // NORTH_GROUNDS -> East -> WOOD_SHOP
connections[NORTH_GROUNDS][SOUTH] = CAFETERIA;              // NORTH_GROUNDS -> SOUTH -> CAFETERIA
connections[NORTH_GROUNDS][WEST] = FOOTBALL_FIELD;           // NORTH_GROUNDS -> WEST -> FOOTBALL FIELD

// ART_CLASS connections
connections[ART_CLASS][NORTH] = WOOD_SHOP;         // ART CLASS -> North -> WOOD SHOP
connections[ART_CLASS][EAST] = -1;                 // No connection EAST
connections[ART_CLASS][SOUTH] = PARKING_LOT;       // ART CLASS -> SOUTH -> PARKING LOT
connections[ART_CLASS][WEST] = MATH_CLASS;         // ART CLASS -> West -> MATH_CLASS

// WOOD_SHOP connections
connections[WOOD_SHOP][NORTH] = -1;              // No connection NORTH
connections[WOOD_SHOP][EAST] = -1;               // No connection EAST
connections[WOOD_SHOP][SOUTH] = ART_CLASS;       // WOOD_SHOP -> SOUTH -> ART_CLASS
connections[WOOD_SHOP][WEST] = NORTH_GROUNDS;    // WOOD_SHOP -> West -> NORTH_GROUNDS

// GYM connections
connections[GYM][NORTH] = FOOTBALL_FIELD;          // GYM -> NORTH -> FOOTBALL_FIELD
connections[GYM][EAST] = SCIENCE_CLASS;            // GYM -> EAST -> SCIENCE_CLASS
connections[GYM][SOUTH] = PARKING_LOT;             // GYM -> SOUTH -> PARKING_LOT
connections[GYM][WEST] = -1;                       // No connection WEST

// FOOTBALL FIELD connections
connections[FOOTBALL_FIELD][NORTH] = -1;              // No connection NORTH
connections[FOOTBALL_FIELD][EAST] = NORTH_GROUNDS;    // FOOTBALL_FIELD -> EAST -> NORTH_GROUNDS
connections[FOOTBALL_FIELD][SOUTH] = GYM;             // FOOTBALL_FIELD -> SOUTH -> GYM
connections[FOOTBALL_FIELD][WEST] = -1;               // No connection WEST

// PARKING_LOT connections
connections[PARKING_LOT][NORTH] = ENTRANCE_HALL;              // PARKING_LOT -> NORTH -> ENTRANCE_HALL
connections[PARKING_LOT][EAST] = -1;                          // No connection EAST
connections[PARKING_LOT][SOUTH] = -1;                         // No connection SOUTH
connections[PARKING_LOT][WEST] = -1;                          // No connection WEST

// Game state
int currentRoom = ENTRANCE_HALL; // Start in the Entrance Hall
bool gameRunning = true;

// Game loop
while (gameRunning) {
    // Display current room information
    cout << "\nYou are in the " << roomNames[currentRoom] << endl;
    cout << roomDescriptions[currentRoom] << endl;
    
    // Show available exits
    cout << "Exits: ";
    bool hasExits = false;
    for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
        if (connections[currentRoom][dir] != -1) {
            cout << DIRECTION_NAMES[dir] << " ";
            hasExits = true;
        }
    }
    if (!hasExits) {
        cout << "none";
    }
    cout << endl;
    
    // Get player input
    string command;
    cout << "\nWhat would you like to do? ";
    cin >> command;
    
    // Process movement commands
    if (command == "north" || command == "n") {
        if (connections[currentRoom][NORTH] != -1) {
            currentRoom = connections[currentRoom][NORTH];
        } else {
            cout << "You can't go that way." << endl;
        }
    } else if (command == "east" || command == "e") {
        if (connections[currentRoom][EAST] != -1) {
            currentRoom = connections[currentRoom][EAST];
        } else {
            cout << "You can't go that way." << endl;
        }
    } else if (command == "south" || command == "s") {
        if (connections[currentRoom][SOUTH] != -1) {
            currentRoom = connections[currentRoom][SOUTH];
        } else {
            cout << "You can't go that way." << endl;
        }
    } else if (command == "west" || command == "w") {
        if (connections[currentRoom][WEST] != -1) {
            currentRoom = connections[currentRoom][WEST];
        } else {
            cout << "You can't go that way." << endl;
        }
    } else if (command == "quit" || command == "q") {
        gameRunning = false;
    } else {
        cout << "I don't understand that command." << endl;
    }
}

cout << "Thanks for playing!" << endl;

    
    
    
    
    
    
    
    cout << endl;
    
    return 0;
}