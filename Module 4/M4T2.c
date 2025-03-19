/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute 'raylib_compile_execute' script
*   Note that compiled executable is placed in the same folder as .c file
*
*   To test the examples on Web, press F6 and execute 'raylib_compile_execute_web' script
*   Web version of the program is generated in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*

// CSC 134
// M4T2
// vinecal4701 (Brian V.)
// 3/19/2025

We'll need to:
- Decide on a screen size 
- Decide what we're repeating (rectangle, png, etc.)
- Create a loop to draw a ROW of them
- Create a nested loop to draw a GRID (rows and columns) of them

    Color colors[MAX_COLORS_COUNT] = {
        DARKGRAY, MAROON, ORANGE, DARKGREEN, DARKBLUE, DARKPURPLE, DARKBROWN,
        GRAY, RED, GOLD, LIME, BLUE, VIOLET, BROWN, LIGHTGRAY, PINK, YELLOW,
        GREEN, SKYBLUE, PURPLE, BEIGE };

********************************************************************************************/

#include "raylib.h"

// Draw one critter
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, int frameCount, Color color1, Color color2);
void DrawUFO(int c_x, int c_y, int body_width, int body_height, int dome_width, int dome_height, Color bodyColor, Color domeColor, Color lightColor);//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    // The item I'm drawing
    int tile_width = 80;
    int tile_height = 60;
    
    int c_x = 0;
    int c_y = 0;               // current location of critter
    //int frameCount;
    

    InitWindow(screenWidth, screenHeight, "m4t2 - raylib example");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        c_x += 2;
        if (c_x > screenWidth) {
            c_x = 0;
            c_y += tile_height;
        }
        //c_y += 1;
        //tile_width += 1;
        //tile_height += 1;
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);
            // Draw our critter 
            //DrawCritter(c_x, c_y, tile_width, tile_height, frameCount, color1, color2, color3);
            for (int column=0; column<screenHeight; column += tile_height * 2) {
                //DrawUFO(c_x, c_y + column, tile_width, tile_height /2, tile_width / 2, tile_height / 4, GRAY, SKYBLUE,  RED);
                for (int row=0; row<screenWidth; row += tile_width * 2) {
                    DrawUFO(c_x + row, c_y + column, tile_width, tile_height /2, tile_width / 2, tile_height / 4, GREEN, RED, ORANGE);
                }
            }  


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

// Other function definitions here
// PROMPTED COPILOT TO CREATE AN INTERESTING CREATURE
void DrawCritter(int c_x, int c_y, int tile_width, int tile_height, int frameCount, Color color1, Color color2) {
    
    // Body color changes over time
    Color bodyColor = (frameCount % 60 < 30) ? PURPLE : ORANGE;

    // Draw the body of the creature
    DrawRectangle(c_x, c_y, tile_width, tile_height, bodyColor);

    // Antennae (two animated lines)
    int antennaMovement = (frameCount % 30 < 15) ? 5 : -5; // Oscillates up and down
    DrawLine(c_x + tile_width / 4, c_y - 10, c_x + tile_width / 4 + antennaMovement, c_y - 30, DARKBLUE); // Left antenna
    DrawLine(c_x + 3 * tile_width / 4, c_y - 10, c_x + 3 * tile_width / 4 + antennaMovement, c_y - 30, DARKBLUE); // Right antenna

    // Draw the eyes (two small white circles)
    DrawCircle(c_x + tile_width / 4, c_y + tile_height / 3, tile_width / 10, WHITE); // Left eye
    DrawCircle(c_x + 3 * tile_width / 4, c_y + tile_height / 3, tile_width / 10, WHITE); // Right eye

    // Draw pupils (two smaller black circles)
    DrawCircle(c_x + tile_width / 4, c_y + tile_height / 3, tile_width / 20, BLACK); // Left pupil
    DrawCircle(c_x + 3 * tile_width / 4, c_y + tile_height / 3, tile_width / 20, BLACK); // Right pupil

    // Draw a smiling mouth (an arc)
    DrawCircleSector((Vector2){c_x + tile_width / 2, c_y + 2 * tile_height / 3}, tile_width / 4, 0, 180, 10, RED);

    // Tail (wavy line that moves)
    for (int i = 0; i < 3; i++) {
        int offset = (i % 2 == 0) ? 5 : -5; // Create a wave effect
        DrawLine(c_x + tile_width + (i * 10), c_y + tile_height / 2 + offset, c_x + tile_width + (i + 1) * 10, c_y + tile_height / 2 - offset, bodyColor);
    }
    
}

void DrawUFO(int c_x, int c_y, int body_width, int body_height, int dome_width, int dome_height, Color bodyColor, Color domeColor, Color lightColor) {
    // Draw the body of the UFO (saucer)
    DrawEllipse(c_x, c_y, body_width, body_height, bodyColor);

    // Draw the dome of the UFO
    int dome_x = c_x;
    int dome_y = c_y - (body_height / 4) - (dome_height / 4);
    DrawEllipse(dome_x, dome_y, dome_width, dome_height, domeColor);

    // Draw lights on the UFO
    int light_radius = 8;
    int num_lights = 4;
    int light_spacing = body_width / (num_lights + 1);
    for (int i = 1; i <= num_lights; i++) {
        int light_x = c_x - (body_width / 2) + (i * light_spacing);
        int light_y = c_y + (body_height / 2) - light_radius;
        DrawCircle(light_x, light_y, light_radius, lightColor);
    }
}