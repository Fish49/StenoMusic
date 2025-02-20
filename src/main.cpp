#include <raylib.h>
#include <string>
#include "Lyrics.h"

int main() {
    SetConfigFlags(FLAG_VSYNC_HINT);
    InitWindow(800, 600, "Stenography Music Game");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
