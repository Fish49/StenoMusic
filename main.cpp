#include <raylib.h>
#include <string>
#include <vector>

struct Lyric {
    std::string text;
    float time;
};

std::vector<Lyric> lyrics = {
    {"Hello", 1.0f},
    {"world!", 2.0f},
    {"This is a test.", 3.5f}
};

int main() {
    InitWindow(800, 600, "Stenography Music Game");
    SetTargetFPS(60);

    float songTime = 0.0f;
    size_t currentLyricIndex = 0;

    while (!WindowShouldClose()) {
        songTime += GetFrameTime();

        // Check if we need to update the lyric
        if (currentLyricIndex < lyrics.size() && songTime >= lyrics[currentLyricIndex].time) {
            currentLyricIndex++;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (currentLyricIndex > 0 && currentLyricIndex <= lyrics.size()) {
            DrawText(lyrics[currentLyricIndex - 1].text.c_str(), 200, 300, 40, BLACK);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
