#include<bits/stdc++.h>

using namespace std;

class Universe
{
    vector<vector<bool>> universeMatrix;       //Dead cells are represented as 0 and living as 1
    int row;                                   
    int col;

    public:
    
    Universe()
    {
        row=0;
        col=0;
    }

    int getCol()
    {
        return col;
    }

    int getRow()
    {
        return row;
    }

    bool getUniverseMatrixElement(int i,int j)
    {
        return universeMatrix[i][j];
    }

    void setUniverseMatrix(vector<pair<int,int>> xyCoordinates)     //To create the universe matrix
    {
        for(auto xy : xyCoordinates)
        {
            if(xy.first > row)
            {
                row = xy.first;
            }
            if(xy.second > col)
            {
                col = xy.second;
            }
        }
        row+=2;                                 
        col+=2;
        for(int i = 0; i < row; i++)
        {
            vector<bool> temp;
            for(int j = 0; j < col; j++)
            {
                temp.push_back(0);
            }
            universeMatrix.push_back(temp);
        }
        for(auto xy : xyCoordinates)    //To set elements at the coordinates of the alive cells as 1
        {
            universeMatrix[xy.first][xy.second] = 1;
        }
    }   

    int countAliveNeighbors(int x,int y)    //To count alive neighbors around cell (i,j)
        {
            int count=0;
            if(x-1 >= 0 && universeMatrix[x-1][y] == 1)
            {
                count++;
            }
            if((x-1 >= 0 && y-1 >= 0) && universeMatrix[x-1][y-1] == 1)
            {
                count++;
            }
            if((x-1 >= 0  && y+1 < col) && universeMatrix[x-1][y+1] == 1)
            {
                count++;
            }
            if(y-1 >= 0 && universeMatrix[x][y-1] == 1)
            {
                count++;
            }
            if(y+1 < col && universeMatrix[x][y+1] == 1)
            {
                count++;
            }
            if(x+1 < row && universeMatrix[x+1][y] == 1)
            {
                count++;
            }
            if((x+1 < row && y-1 >= 0) && universeMatrix[x+1][y-1] == 1)
            {
                count++;
            }
            if((x+1 < row && y+1 < col) && universeMatrix[x+1][y+1] == 1)
            {
                count++;
            }
            return count;
        }

};