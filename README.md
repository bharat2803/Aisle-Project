# Aisle-Project
Problem 2

This repository contains the code solution for the Problem 2 ( Game of Life ) of the Developer Challenge.

The code is written purely in C++ language and Visual Studio Code was used to write the code. My code is contained in 4 files - main.cpp, game-of-life.h, universe.h, and insert-xy.h - among other miscellaneous files. 'main.exe' is the application created after the completion of the code.

The 'main.cpp' contains the starting code of the program and it executes all other files to run the application. 
The 'universe.h' file contains the class Universe which basically contains data members and member function to create a universe matrix in which the coordinates (as indices of the matrix) of the alive cells are marked as true (1) and others as false (0). It also contains a member function 'countAliveNeighbors()' to count the all the alive cells around the element at (i,j) in matrix. 
The 'game-of-life.h' file contains the class GameOfLife which contains the seed of the system in the form of vector of pair of x and y coordinates. It then creates an object of the Universe class to represent the coordinates in matrix form and then find out the cells which will be alive after one tick. 
The insertXY function is simply to insert the (x,y) pair of coordinates into the vector.

The main logic behind solving the problem was to create a matrix of 0s and 1s, traverse each element of the matrix to pass through the conditions given the problem and to observe if the cell remains/becomes alive. If the cell remains/becomes alive, the indices are stored in an output vector of pairs in the form of xy-coordinates.

## Outputs

The outputs for the various inputs are shown below:

### A) Block pattern - Still life
![Screenshot (29)](https://user-images.githubusercontent.com/67018724/174355916-3751de7a-8265-42fa-9b1a-5152089f21cf.png)

### B) Boat pattern - Still life
![Screenshot (30)](https://user-images.githubusercontent.com/67018724/174356116-969ecc5d-0c9f-48c4-a3af-73fb7cfbd52f.png)

### C) Blinker pattern - oscillator
![Screenshot (32)](https://user-images.githubusercontent.com/67018724/174356238-a7074624-62a4-46ae-81b9-c181938500a5.png)

### D) Toad pattern - two phase oscillator
![Screenshot (33)](https://user-images.githubusercontent.com/67018724/174356334-dc5b8386-6103-4016-8124-965130c15d47.png)

### Random Input 1) 
![Screenshot (34)](https://user-images.githubusercontent.com/67018724/174356575-9f5989d3-7754-4a89-830d-09ffa93a80c0.png)

### Random Input 2) 
![Screenshot (35)](https://user-images.githubusercontent.com/67018724/174356662-d46977ad-7b34-4d0a-b7f4-094ab81a9edd.png)

