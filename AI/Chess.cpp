#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();
const int NEG_INF = numeric_limits<int>::min();

struct Move {
    int row, col;
};

bool isMovesLeft(vector<vector<char>>& board) {
    for (auto& row : board)
        for (auto cell : row)
            if (cell == '.')
                return true;
    return false;
}

int evaluate(vector<vector<char>>& board) {
    // Example: winning evaluation for Connect 4 or Chess endgame simplified
    return 0; // placeholder
}

int minimax(vector<vector<char>>& board, int depth, bool isMax) {
    int score = evaluate(board);

    if (score == 10) return score - depth;
    if (score == -10) return score + depth;
    if (!isMovesLeft(board)) return 0;

    if (isMax) {
        int best = NEG_INF;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    board[i][j] = 'X'; // AI Move
                    best = max(best, minimax(board, depth+1, false));
                    board[i][j] = '.';
                }
            }
        }
        return best;
    } else {
        int best = INF;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    board[i][j] = 'O'; // Opponent Move
                    best = min(best, minimax(board, depth+1, true));
                    board[i][j] = '.';
                }
            }
        }
        return best;
    }
}
