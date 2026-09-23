#include <iostream>
#include <vector>
using namespace std;
bool isSafe(const vector<string> &board, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < board.size(); i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}
void solve(vector<string> &board, int row, vector<vector<string>> &answers)
{
    if (row == board.size())
    {
        answers.push_back(board);
        return;
    }
    for (int col = 0; col < board.size(); col++)
    {
        if (isSafe(board, row, col))
        {
            board[row][col] = 'Q';
            solve(board, row + 1, answers);
            board[row][col] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int N)
{
    vector<string> board(N, string(N, '.'));
    vector<vector<string>> answers;
    solve(board, 0, answers);
    return answers;
}
int main(){
    vector<vector<string>> answers = solveNQueens(4);
    for(int i = 0; i < answers.size(); i++) {
        for(int j = 0; j < answers[i].size(); j++) {
            cout << answers[i][j] << endl;
        }
        cout << endl;
    }
}