#pragma once

class Node {
public:
    char value;         // ��������
    Node* down;         // ���
    Node* right;        // �����

    Node(const char value) {
        this->value = value;
        down = nullptr;
        right = nullptr;
    }
};