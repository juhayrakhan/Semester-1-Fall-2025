#include <iostream>
using namespace std;
// Function prototypes for the four line segments
void drawSlope1(int rows, int columns); // First line segment
void drawSlope2(int rows, int columns); // Second line segment
void drawSlope3(int rows, int columns); // Third line segment
void drawSlope4(int rows, int columns); // Fourth line segment
int n=50;
int main() {
    const int rows = n; // Height of the grid
    const int columns = n; // Width of the grid
    // Draw each slope separately
    drawSlope1(rows, columns);
    drawSlope2(rows, columns);
    drawSlope3(rows, columns);
    drawSlope4(rows, columns);
    return 0;
}
// First line segment [5 marks]
void drawSlope1(int rows, int columns) {
    for(int i=0;i<rows/3;i++){
        for(int j=0;j<columns;j++){
            if(j==n-(3*i)-1||j==n-(3*i)||j==n-(3*i)-2) cout << "@ ";
            else cout << "- ";
        }
        cout << endl;
    }
}
// Second line segment [5 marks]
void drawSlope2(int rows, int columns) {
    for(int i=0;i<rows/6;i++){
        for(int j=0;j<columns;j++){
            if(j==(3*i)||j==(3*i)+1||j==(3*i)-1) cout << "@ ";
            else cout << "- ";
        }
        cout << endl;
    }
}
// Third line segment [5 marks]
void drawSlope3(int rows, int columns) {
    for(int i=0;i<rows/6;i++){
        for(int j=0;j<columns;j++){
            if(j==n/2-(3*i)-1||j==n/2-(3*i)||j==n/2-(3*i)-2) cout << "@ ";
            else cout << "- ";
        }
        cout << endl;
    }
}
// Fourth line segment [5 marks]
void drawSlope4(int rows, int columns) {
    for(int i=0;i<rows/3;i++){
        for(int j=0;j<columns;j++){
            if(j==(3*i)-1||j==(3*i)||j==(3*i)+1) cout << "@ ";
            else cout << "- ";
        }
        cout << endl;
    }
}
