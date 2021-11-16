#pragma once

class Node {
public:
    char value;         // Значение
    Node* down;         // Низ
    Node* right;        // Право

    Node(const char value) {
        this->value = value;
        down = nullptr;
        right = nullptr;
    }
};