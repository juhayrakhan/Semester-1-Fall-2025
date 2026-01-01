#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int GRID_SIZE = 20; // Grid dimensions
const int ROBOT_SIZE = 3; // Size of the robots (4x4)
// Function prototypes
void initializePositions(int &x1, int &y1, int &x2, int &y2);
void displayGrid(int x1, int y1, int x2, int y2);
// TO BE IMPLEMENTED:
void moveRobot(int &x, int &y, int dx, int dy);
bool checkWallCollision(int x, int y);
bool checkRobotCollision(int x1, int y1, int x2, int y2);
int main() {
    srand(time(0));
    int x1, y1, x2, y2; // Top-left positions of R1 and R2
    int dx1 = 1, dy1 = 0; // Direction of R1
    int dx2 = 0, dy2 = 1; // Direction of R2
    initializePositions(x1, y1, x2, y2);
    while (true) {
        system("clear"); // Clears the screen
        displayGrid(x1, y1, x2, y2);
        // Move R1
        moveRobot(x1, y1, dx1, dy1);
        if (checkWallCollision(x1, y1)) {
            dx1 = -dx1; dy1 = -dy1; // Reverse direction
        }
        // Move R2
        moveRobot(x2, y2, dx2, dy2);
        if (checkWallCollision(x2, y2)) {
            dx2 = -dx2; dy2 = -dy2; // Reverse direction
        }
        // Check robot collision
        if (checkRobotCollision(x1, y1, x2, y2)) {
            dx1 = -dx1; dy1 = -dy1;
            dx2 = -dx2; dy2 = -dy2;
        }
        // Pause to simulate animation
        for (int i = 0; i < 100000000; i++); // Simple delay
    }
    return 0;
}
// Function to initialize positions of the robots
void initializePositions(int &x1, int &y1, int &x2, int &y2) {
    x1 = rand() % (GRID_SIZE - ROBOT_SIZE);
    y1 = rand() % (GRID_SIZE - ROBOT_SIZE);
    do {
        x2 = rand() % (GRID_SIZE - ROBOT_SIZE);
        y2 = rand() % (GRID_SIZE - ROBOT_SIZE);
    } while (   (x1 < x2 + ROBOT_SIZE && x1 + ROBOT_SIZE > x2) &&
                (y1 < y2 + ROBOT_SIZE && y1 + ROBOT_SIZE > y2)); // Ensure no initial overlap
}
// Function to display the grid
void displayGrid(int x1, int y1, int x2, int y2) {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (i >= x1 && i < x1 + ROBOT_SIZE && j >= y1 && j < y1 + ROBOT_SIZE) {
                cout << "* ";
            } else if (i >= x2 && i < x2 + ROBOT_SIZE && j >= y2 && j < y2 + ROBOT_SIZE) {
                cout << "* ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}
// --- STUDENT CODE GOES HERE ---
// Write move robot logic here [10 marks]
void moveRobot(int &x, int &y, int dx, int dy) {
    x+=dx;
    y+=dy;
}
// Write wall collision logic here [10 marks]
bool checkWallCollision(int x, int y) {
    return (x>=GRID_SIZE-ROBOT_SIZE||x<=0||y>=GRID_SIZE-ROBOT_SIZE||y<=0);
}
// Write Robot collision logic here [10 marks]
bool checkRobotCollision(int x1, int y1, int x2, int y2) {
    int max=(x2>x1?x2:x1); int min=(x2>x1?x1:x2);
    if(max==min||max-min<=ROBOT_SIZE) return 1;
    max=(y2>y1?y2:y1); min=(y2>y1?y1:y2);
    if(max==min||max-min<=ROBOT_SIZE) return 1;
    return 0;
}