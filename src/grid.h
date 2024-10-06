#pragma once
#include <vector>
#include "C:\raylib\raylib\src\raylib.h"

class Grid{

public:
    Grid();
    void initialize();
    void print();
    int grid[20][10]; 
    void Draw(); 
    bool IsCellOutside(int row, int column); 

private:

    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors; 
};