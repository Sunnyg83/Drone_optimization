# Drone_optimization

## Project Description
This project is a terminal-based C++ application for optimizing drone delivery routes using graph algorithms. It allows users to input a network of delivery points as an adjacency matrix, and displays the resulting graph. The project is structured for easy extension to include advanced algorithms such as Minimum Spanning Tree (MST) and the Traveling Salesperson Problem (TSP).

## Features
- Input the number of delivery points (nodes)
- Input the adjacency matrix representing distances between points
- Display the adjacency matrix for verification

## How to Build and Run
1. **Compile the program:**
   ```sh
   g++ -std=c++11 -o drone_optimization main.cpp Graph.cpp
   ```
2. **Run the program:**
   ```sh
   ./drone_optimization
   ```
3. **Follow the prompts:**
   - Enter the number of delivery points
   - Enter the adjacency matrix (row by row)
   - View the displayed adjacency matrix

## Example
```
Enter number of delivery points: 3
Enter adjacency matrix (use 0 for no direct connection):
0 2 3
2 0 1
3 1 0
Adjacency Matrix:
0 2 3 
2 0 1 
3 1 0 
```

## Next Steps
- Implement Minimum Spanning Tree (MST) algorithm
- Implement Traveling Salesperson Problem (TSP) heuristic
- Add performance measurement and optimization