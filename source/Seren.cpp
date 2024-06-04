/*
   _____                        _____       _       _ _ _ _         ______    _                 _
  / ____|                      / ____|     | |     | | (_) |       |  ____|  | |               | |
 | (___   ___ _ __ ___ _ __   | (___   __ _| |_ ___| | |_| |_ ___  | |__   __| |_   _  ___ __ _| |_ ___  _ __
  \___ \ / _ \ '__/ _ \ '_ \   \___ \ / _` | __/ _ \ | | | __/ _ \ |  __| / _` | | | |/ __/ _` | __/ _ \| '__|
  ____) |  __/ | |  __/ | | |  ____) | (_| | ||  __/ | | | ||  __/ | |___| (_| | |_| | (_| (_| | || (_) | |
 |_____/ \___|_|  \___|_| |_| |_____/ \__,_|\__\___|_|_|_|\__\___| |______\__,_|\__,_|\___\__,_|\__\___/|_|

*/

#include <raylib.h>

int main() {
	const int screenWidth{ 800 };
	const int screenHeight{ 600 };
	auto windowIcon{ LoadImage("icon.png") };

	InitWindow(screenWidth, screenHeight, "Seren Satellite Educator");
	SetWindowIcon(windowIcon);
	SetTargetFPS(60);
	while (!WindowShouldClose()) {

		BeginDrawing();
		ClearBackground(BLACK);

		DrawText("Hello Seren!", screenWidth / 2 - 80, screenHeight / 2, 28, WHITE);
		DrawLine(screenWidth / 2 - 100, screenHeight / 2 + 30, screenWidth / 2 + 100, screenHeight / 2 + 30, SKYBLUE);
		EndDrawing();
	}

	CloseWindow();
	UnloadImage(windowIcon);
}