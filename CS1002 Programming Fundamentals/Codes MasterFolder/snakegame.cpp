#include <iostream>
#include <unistd.h>   // for usleep - can also use sleep - but sleep is in secs
#include <cstdlib>    
using namespace std;

int main() {
    const int ROWS = 10, COLS = 30;
    char screen[ROWS][COLS];

    // Step 1: make boundary of #
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1)
                screen[i][j] = '#';
            else
                screen[i][j] = ' ';
        }
    }

    // Step 2: place a snake-like pattern (******) in the middle
    int snakeRow = ROWS / 2;
    int snakeLen = 6;
    for (int j = 0; j < snakeLen; j++) {
        screen[snakeRow][j + 2] = '*';
    }

    // Step 3: game loop
    while (true) {
        // Clear screen
        system("clear");

        // Print the matrix
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++)
                cout << screen[i][j];
            cout << endl;
        }

        // Step 4: rotate the snake one step to the right
        char last = screen[snakeRow][COLS - 2];
        for (int j = COLS - 2; j > 1; j--) {
            screen[snakeRow][j] = screen[snakeRow][j - 1];
        }
        screen[snakeRow][1] = last;

        usleep(100000); // delay for smooth motion (0.1s)
    }

    return 0;
}