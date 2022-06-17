#include<bits/stdc++.h>
#include "insert-xy.h"
#include "universe.h"

using namespace std;

class GameOfLife 
{      
    
    int initialLives;
    vector<pair<int,int>> xyCoordinates;       //To Store Initial coordinates of the alive cells
    Universe universe;                         //To create a matrix to mark coordinates of alive cells

    public:

        GameOfLife() 
        {
            initialLives = 0;
            Universe();
        }

        void createSeed(int lives,vector<pair<int,int>> xy)    //To create the seed of the system
        {
            initialLives = lives;
            xyCoordinates = xy;
            universe.setUniverseMatrix(xyCoordinates);
        }

        void nextTick()                                     //To create a vector storing the alive cells after one tick
        {
            vector<pair<int,int>> newXyCoordinates;
            int row = universe.getRow();
            int col = universe.getCol();
            for(int i = 0; i < row; i++)
            {
                for(int j=0;j<col;j++)
                {
                    if(universe.getUniverseMatrixElement(i,j) == 0)
                    {
                        if(universe.countAliveNeighbors(i,j) == 3)
                        {
                            insertXY(i,j,newXyCoordinates);
                        }
                    }
                    else
                    {
                        if(universe.countAliveNeighbors(i,j) == 2 || universe.countAliveNeighbors(i,j) == 3)
                        {
                            insertXY(i,j,newXyCoordinates);
                        }
                    }
                }
            }
            printNextTick(newXyCoordinates);
        }

        void printNextTick(vector<pair<int,int>> coordinates)    //To print the coordinates of alive cells after one tick
        {
            for(auto xy : coordinates)
            {
                cout<< "\t "<< xy.first<< " "<< xy.second<<endl;
            }
        }
        
        

};