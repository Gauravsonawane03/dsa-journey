#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve(vector<vector<int>> &maze, int row, int col, vector<vector<bool>> &visited, string &path, vector<string> &answers)
{
    if (row == maze.size() - 1 && col == maze.size() - 1)
    {
        answers.push_back(path);
        return;
    }
    int dr[] = {1, -1, 0, 0};
    int dc[] = {0, 0, 1, -1};
    char direction[] = {'D', 'U', 'R', 'L'};

    for (int k = 0; k < 4; k++)
    {
        int newRow = row + dr[k];
        int newCol = col + dc[k];
        if (0 <= newRow && newRow < maze.size() &&
            0 <= newCol && newCol < maze.size() &&
            maze[newRow][newCol] == 1 &&
            !visited[newRow][newCol])
        {
            visited[newRow][newCol] = true;
            path.push_back(direction[k]);

            solve(maze, newRow, newCol, visited, path, answers);

            path.pop_back();
            visited[newRow][newCol] = false;
        }
    }
}
vector<string> ratInMaze(vector<vector<int>> &maze)
{
    vector<vector<bool>> visited(
        maze.size(),
        vector<bool>(maze.size(), false));

    string path = "";

    vector<string> answers;
    if (maze[0][0] == 1)
    {
        visited[0][0] = true;
        solve(maze, 0, 0, visited, path, answers);
    }
    return answers;
}
int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    // vector<vector<int>> maze = {
    //     // {0, 1},
    //     // {1, 1}}; // Edge cases
    //     // {1}};

    vector<string> answers = ratInMaze(maze);

    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << endl;
    }
}