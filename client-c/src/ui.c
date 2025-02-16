#include "ui.h"
#include "raylib.h"
#include <stdio.h>

void draw_ui(int client_id) {
    // Example “soft” and “hard” borders for the player’s screen position
    int screenWidth = GetScreenWidth();
    int screenHeight = GetScreenHeight();
    Rectangle softBorder =
        (Rectangle){90, 90, screenWidth - 180, screenHeight - 180};
    Rectangle hardBorder =
        (Rectangle){20, 20, screenWidth - 40, screenHeight - 40};

    // Draw ring around mouse
    DrawRing(GetMousePosition(), 5.2f, 10.3f, 0.0f, 360.0f, 0, RED);

    // Draw FPS
    DrawFPS(5, 5);
    char text[10];
    sprintf(text, "Id: %d", client_id);
    DrawText(text, 5, 20, 30, GREEN);
}
