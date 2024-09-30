#include "grid.h"
#include <iostream>

Grid::Grid(){
    numRows = 20;
    numCols = 10;
    cellSize = 30;
    initialize(); 
    colors = getCellColor(); 
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

std::vector<Color> Grid::getCellColor(){
    Color darkGrey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255};

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}

void Grid::draw(){
    for(int row = 0; row < numRows; row++){
        for(int cols = 0; cols < numCols; cols++){
            int cellValue = grid[row][cols];
            
        }
    }
}