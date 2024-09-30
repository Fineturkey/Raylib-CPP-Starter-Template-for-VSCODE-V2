#include "C:\raylib\raylib\src\raylib.h"
#include "grid.h"
#include <iostream> 

using namespace std;

int main()
{
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.print();


    while(WindowShouldClose() == false){
        BeginDrawing();
        ClearBackground(darkBlue); 
        EndDrawing();
    }

    CloseWindow();
}