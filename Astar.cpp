#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Node {
    int x, y;
    int gCost, hCost;
    Node* parent;

    Node(int x, int y, int gCost, int hCost, Node* parent = nullptr)
        : x(x), y(y), gCost(gCost), hCost(hCost), parent(parent) {}

    int fCost() const { return gCost + hCost; }
};

struct Compare {
    bool operator()(const Node* a, const Node* b) {
        return a->fCost() > b->fCost();
    }
};

int heuristic(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2); // Manhattan distance
}

vector<Node*> getNeighbors(Node* node, vector<vector<int>>& grid) {
    vector<Node*> neighbors;
    int dirs[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    int rows = grid.size(), cols = grid[0].size();

    for (auto& dir : dirs) {
        int newX = node->x + dir[0];
        int newY = node->y + dir[1];
        if (newX >= 0 && newX < rows && newY >= 0 && newY < cols && grid[newX][newY] == 0) {
            neighbors.push_back(new Node(newX, newY, 0, 0));
        }
    }
    return neighbors;
}

void aStar(vector<vector<int>>& grid, pair<int,int> start, pair<int,int> goal) {
    priority_queue<Node*, vector<Node*>, Compare> openList;
    vector<vector<bool>> closedList(grid.size(), vector<bool>(grid[0].size(), false));

    Node* startNode = new Node(start.first, start.second, 0, heuristic(start.first, start.second, goal.first, goal.second));
    openList.push(startNode);

    while (!openList.empty()) {
        Node* current = openList.top(); openList.pop();
        if (current->x == goal.first && current->y == goal.second) {
            cout << "Path found:\n";
            while (current != nullptr) {
                cout << "(" << current->x << "," << current->y << ") ";
                current = current->parent;
            }
            return;
        }

        closedList[current->x][current->y] = true;

        for (Node* neighbor : getNeighbors(current, grid)) {
            if (closedList[neighbor->x][neighbor->y]) continue;
            neighbor->gCost = current->gCost + 1;
            neighbor->hCost = heuristic(neighbor->x, neighbor->y, goal.first, goal.second);
            neighbor->parent = current;
            openList.push(neighbor);
        }
    }

    cout << "No Path Found\n";
}

int main() {
    vector<vector<int>> grid = {
        {0, 0, 0, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0}
    };

    pair<int,int> start = {0, 0}, goal = {4, 4};

    aStar(grid, start, goal);

    return 0;
}
