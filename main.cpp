#include<bits/stdc++.h>
#include "game-of-life.h"
#include "Windows.h"

using namespace std;

int main()
{
    GameOfLife game;

    int initialLives;
    cout<< "\t \t \t Welcome to the Game Of Life! \n\n\n";
    cout<< "\t Please Enter the number of initial living cells = ";
    
    cin>> initialLives;

    cout<< "\n\t Please Enter the x and y coordinates of the alive cells = \n";

    vector<pair<int,int>> xy;

    for(int i = 0; i < initialLives; i++)
    {
        int x, y;
        cout<< "\t ";
        cin>> x>> y;
        insertXY(x,y,xy);
    }

    game.createSeed(initialLives,xy);

    cout<< "\n\t The coordinates of the alive cells after the first tick will be: \n";

    game.nextTick();

    cout<< "\n\t \t \t \tThank You!";
    cout<< "\n\n\t The program will close itself in a few seconds.";

    Sleep(10000);

    return 0;
}
