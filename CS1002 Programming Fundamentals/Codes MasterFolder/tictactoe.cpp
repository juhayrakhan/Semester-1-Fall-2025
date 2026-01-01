#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char board[9];
    bool random= rand() % 2;
    char player = random? 'X' : 'O';
    bool gameOver = false;
    int draw = 9;
    //cout<<player;
    // --- INITIALIZATION ---
    for (int i = 0; i < 9; i++)
        board[i] = '1' + i;   // Fill board with 1–9

    cout << "TIC TAC TOE (2 Players)\n";
    cout << "Player 1 = X,  Player 2 = O\n";

    // --- GAME LOOP ---
    while (!gameOver) {
        // 1. Display the board
        cout << "\n";
        for (int i = 0; i < 9; i++) {
            cout << " " << board[i] << " ";
            if ((i + 1) % 3 == 0) {
                cout << "\n";
                if (i < 8) cout << "---+---+---\n";
            } else {
                cout << "|";
            }
        }

        // 2. Player input
        int move;
        cout << "\nPlayer " << player << ", enter your move (1-9): ";
        cin >> move;

        // 3. Validate input
        if (move < 1 || move > 9 || board[move - 1] == 'X' || board[move - 1] == 'O') {
            cout << "Invalid move! Try again.\n";
            continue; // go back to start of loop
        }

        // 4. Update board
        board[move - 1] = player;
     
        // 5. Check for win
        if (
            (board[0] == player && board[1] == player && board[2] == player) ||
            (board[3] == player && board[4] == player && board[5] == player) ||
            (board[6] == player && board[7] == player && board[8] == player) ||
            (board[0] == player && board[3] == player && board[6] == player) ||
            (board[1] == player && board[4] == player && board[7] == player) ||
            (board[2] == player && board[5] == player && board[8] == player) ||
            (board[0] == player && board[4] == player && board[8] == player) ||
            (board[2] == player && board[4] == player && board[6] == player)
        ) {
            cout << "\nPlayer " << player << " wins!\n";
            gameOver = true;
        }
       
        draw--;
        if (draw == 0 && !gameOver) {
            cout << "\nIt's a draw!\n";
            gameOver = true;
        }
        // 7. Switch player
        if (!gameOver) {
            if (player == 'X')
                player = 'O';
            else
                player = 'X';
        }
       
    }

    cout << "\nGame over. Thanks for playing!\n";
    return 0;
}