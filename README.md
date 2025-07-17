# Drone Delivery Optimization

## Project Description
This C++ program is designed for optimizing drone delivery networks. It lets you enter a network of delivery points (representing drone delivery locations) and the distances between them, then calculates the most efficient way to connect all points using the Minimum Spanning Tree (MST) algorithm. It shows you which connections to make and the total cost, ensuring every point is linked together with no unnecessary loops—ideal for planning efficient drone delivery routes.

## Features
- Input the number of delivery points (nodes) for drones
- Enter a custom label (including spaces) for each delivery point
- Input the adjacency matrix representing distances between delivery locations
- Display the adjacency matrix as a labeled, neatly aligned grid
- Compute and display the Minimum Spanning Tree (MST):
  - Shows which connections to make for the drone network
  - Displays the total cost (minimum total distance)
- Compute and display the Traveling Salesman Problem (TSP) route:
  - Prompts for a starting node
  - Shows the route visiting all delivery points and returning to the start
  - Displays the total route distance

## How to Build and Run
1. **Compile the program:**
   ```sh
   g++ -std=c++11 -o drone_optimization main.cpp Graph.cpp MST.cpp TSP.cpp
   ```
2. **Run the program:**
   ```sh
   ./drone_optimization
   ```
3. **Follow the prompts:**
   - Enter the number of delivery points
   - Enter a label for each location (labels can include spaces, e.g., "Main Street")
   - Enter the adjacency matrix (row by row)
   - Use the menu to display the adjacency matrix, run the MST, run the TSP, or exit

## Example
```
Enter number of delivery points: 4
Enter label for location 0: Start
Enter label for location 1: Point A
Enter label for location 2: Point B
Enter label for location 3: Point C
Enter adjacency matrix (use 0 for no direct connection):
0 1 2 3
1 0 1 2
2 1 0 1
3 2 1 0

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 1
Adjacency Matrix:
           Start Point A Point B Point C
   Start       0       1       2       3
 Point A       1       0       1       2
 Point B       2       1       0       1
 Point C       3       2       1       0

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 2
MST edges (parent - node):
0 - 1 (weight: 1)
1 - 2 (weight: 1)
2 - 3 (weight: 1)
Total cost of MST: 3

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 3
Enter starting node (0 to 3): 0
TSP Route: 0 -> 1 -> 2 -> 3 -> 0
Total Distance: 6

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 3
Enter starting node (0 to 3): 2
TSP Route: 2 -> 1 -> 0 -> 3 -> 2
Total Distance: 6

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 3
Enter starting node (0 to 3): 1
TSP Route: 1 -> 0 -> 2 -> 3 -> 1
Total Distance: 6

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 3
Enter starting node (0 to 3): 3
TSP Route: 3 -> 2 -> 1 -> 0 -> 3
Total Distance: 6

Menu:
1. Display adjacency matrix
2. Run MST (Minimum Spanning Tree)
3. Run TSP (Traveling Salesman Problem)
4. Exit
Enter your choice: 4
```

## Algorithms Implemented
- Minimum Spanning Tree (MST, Prim's algorithm)
- Traveling Salesman Problem (TSP, greedy nearest neighbor)

