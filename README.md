# Aisle-Project
### Problem 2

This repository contains the code solution for the Problem 2 ( Game of Life ) of the Developer Challenge.

The code is written purely in C++ language and Visual Studio Code was used to write the code. My code is contained in 4 files - main.cpp, game-of-life.h, universe.h, and insert-xy.h - among other miscellaneous files. 'main.exe' is the application created after the completion of the code.

The 'main.cpp' contains the starting code of the program and it executes all other files to run the application.
The 'universe.h' file contains the class Universe which basically contains data members and member function to create a universe matrix in which the coordinates (as indices of the matrix) of the alive cells are marked as true (1) and others as false (0). It also contains a member function 'countAliveNeighbors()' to count the all the alive cells around the element at (i,j) in matrix. 
The 'game-of-life.h' file contains the class GameOfLife which contains the seed of the system in the form of vector of pair of x and y coordinates. It then creates an object of the Universe class to represent the coordinates in matrix form and then find out the cells which will be alive after one tick. 
The insert-xy file contains a function to insert the (x,y) pair of coordinates into the vector.

The main logic behind solving the problem was to create a matrix of 0s and 1s, traverse each element of the matrix to pass through the conditions given the problem and to observe if the cell remains/becomes alive. If the cell remains/becomes alive, the indices are stored in an output vector of pairs in the form of xy-coordinates.

The screenshots of the outputs of the test cases along with 2 random inputs are provided in the Outputs folder.

