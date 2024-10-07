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
    int ClearFullRows();
    bool IsCellOutside(int row, int column); 
    bool IsCellEmpty(int row, int column);

private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows); 
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors; 
};