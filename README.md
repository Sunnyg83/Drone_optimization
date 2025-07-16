# Drone Delivery Optimization

## Project Description
This C++ program is designed for optimizing drone delivery networks. It lets you enter a network of delivery points (representing drone delivery locations) and the distances between them, then calculates the most efficient way to connect all points using the Minimum Spanning Tree (MST) algorithm. It shows you which connections to make and the total cost, ensuring every point is linked together with no unnecessary loops—ideal for planning efficient drone delivery routes.

## Features
- Input the number of delivery points (nodes) for drones
- Input the adjacency matrix representing distances between drone delivery locations
- Display the adjacency matrix
- Compute and display the Minimum Spanning Tree (MST):
  - Shows which connections to make for the drone network
  - Displays the total cost (minimum total distance)

## How to Build and Run
1. **Compile the program:**
   ```sh
   g++ -std=c++11 -o drone_optimization main.cpp Graph.cpp MST.cpp
   ```
2. **Run the program:**
   ```sh
   ./drone_optimization
   ```
3. **Follow the prompts:**
   - Enter the number of delivery points
   - Enter the adjacency matrix (row by row)
   - Use the menu to display the adjacency matrix or run the MST (or exit)

## Example
```
Enter number of delivery points: 2
Enter adjacency matrix (use 0 for no direct connection):
0 2
2 0

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Exit
Enter your choice: 2
MST edges (parent - node):
0 - 1 (weight: 2)
Total cost of MST: 2
```

## Current Algorithm
- Minimum Spanning Tree (MST) only

## Next Steps
- Add Traveling Salesperson Problem (TSP) for optimal drone delivery routes