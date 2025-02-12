/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    // OUR VARIABLES GO HERE
    int player_x, player_y;
    int speed_x, speed_y;
    
    // set some values
    player_x = screenWidth / 2;
    player_y = screenHeight / 2;
    speed_x = 0;
    speed_y = 0;
    
    // end our variables

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch(currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 1 seconds (60 frames) before jumping to TITLE screen
                if (framesCounter > 60)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = ENDING;
                }
            } break;
            case ENDING:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = TITLE;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                    DrawText("LOGO SCREEN", 20, 20, 40, LIGHTGRAY);
                    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, LIGHTGRAY);

                } break;
                case TITLE:
                {
                    // TODO: Draw TITLE screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKBLUE);
                    DrawText("TITLE SCREEN", 20, 20, 40, SKYBLUE);
                    DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, SKYBLUE);

                } break;
                case GAMEPLAY:
                {
                    // TODO: Draw GAMEPLAY screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLACK);
                    DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
                    DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, MAROON);
                    
                    // draw a background if we want
                    DrawRectangle(0, screenHeight-100, screenWidth, 100, BLACK);
                    // draw the player last
                    /*
                        int player_x, player_y;
                    int speed_x, speed_y;
                    */
                    // Move the player!
                    if ( IsKeyPressed(KEY_UP)) {
                        speed_y = -2;
                    }
                    
                    if ( IsKeyPressed(KEY_DOWN)) {
                        speed_y = 2;
                    }
                    
                    if ( IsKeyPressed(KEY_LEFT)) {
                        speed_x = -2;
                    }
                    
                    if ( IsKeyPressed(KEY_RIGHT)) {
                        speed_x = 2;
                    }
                    
                    player_x = player_x + speed_x;
                    player_y = player_y + speed_y;
                    
                    //wrap around
                    if (player_x > screenWidth){
                        player_x = 0;
                        speed_x++;
                    }
                    if (player_x < 0){
                        player_x = screenWidth;
                        speed_x++;
                    }
                    if (player_y > screenWidth){
                        player_y = 0;
                        speed_y++;
                    }
                    if (player_y < 0){
                        player_y = screenWidth;
                        speed_y++;
                    }
                    if (speed_x > 30){
                        player_x = 0;
                        speed_x--;
                    }
                    if (speed_y > 30){
                        player_y = 0;
                        speed_y--;
                    }
                    DrawRectangle(player_x, player_y, 50, 50, GREEN);
                    
                    
                  

                } break;
                case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
                    DrawText("ENDING SCREEN", 20, 20, 40, DARKBLUE);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, DARKBLUE);

                } break;
                default: break;
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}