#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Node {
    Node* parent;
    vector<Node*> children;
    int wins = 0, visits = 0;
    int move; // Move ID or game action
};

double ucb1(Node* node) {
    if (node->visits == 0) return 1e9;
    return (double)node->wins / node->visits + sqrt(2 * log(node->parent->visits) / node->visits);
}

Node* selectBestChild(Node* node) {
    Node* best = nullptr;
    double bestVal = -1e9;
    for (auto child : node->children) {
        double val = ucb1(child);
        if (val > bestVal) {
            bestVal = val;
            best = child;
        }
    }
    return best;
}

void simulate(Node* node) {
    // Random playout from node
    node->wins += rand() % 2;
    node->visits++;
}

void expand(Node* node) {
    for (int i = 0; i < 2; i++) { // Dummy moves
        Node* child = new Node();
        child->parent = node;
        child->move = i;
        node->children.push_back(child);
    }
}

void backpropagate(Node* node, int result) {
    while (node != nullptr) {
        node->visits++;
        node->wins += result;
        node = node->parent;
    }
}

Node* mcts(Node* root, int iterations) {
    for (int i = 0; i < iterations; i++) {
        Node* node = root;
        while (!node->children.empty()) {
            node = selectBestChild(node);
        }
        expand(node);
        simulate(node);
        backpropagate(node, rand() % 2);
    }
    return selectBestChild(root);
}
