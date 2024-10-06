#include "grid.h"
#include <iostream>
#include "colors.h"

Grid::Grid(){
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    initialize(); 
    colors = GetCellColors(); 
}

void Grid::initialize(){
    for(int row = 0; row < numRows; row++){
        for(int cols = 0; cols < numCols; cols++){
            grid[row][cols] = 0;  
        }
    }
}

void Grid::print(){
    for(int row = 0; row < numRows; row++){
        for(int cols = 0; cols < numCols; cols++){
            std::cout << grid[row][cols] << " ";
        }
    }
    std::cout << std::endl;
}


void Grid::Draw(){
    for(int row = 0; row < numRows; row++){
        for(int cols = 0; cols < numCols; cols++){
            int cellValue = grid[row][cols];
            DrawRectangle(cols * cellSize + 1, row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}

bool Grid::IsCellOutside(int row, int column){
    if(row >= 0 && row < numRows && column >= 0 && column < numCols){
        return false;
    }
    return true; 
}