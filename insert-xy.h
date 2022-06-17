 #include<bits/stdc++.h>

 using namespace std;
 
 void insertXY(int x,int y, vector<pair<int,int>>& xy)   //to store (x,y) coordinates in a vector of pair
        {
            pair<int,int> temp;
            temp.first = x;
            temp.second = y;
            xy.push_back(temp);
        }