/*
 * TEMPLATE
 */

#include "include/raylib.h"

int main(void){
    InitWindow(130, 40, "hello,world.");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("hello,world.", 10, 10, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return (0);
}