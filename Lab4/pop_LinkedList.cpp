//
// Created by farrukh on 2/26/2025.
//
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Element qo'shish (push) funksiyasi
void push(Node*& top, int value) {
    Node* newNode = new Node(); // Yangi tugun yaratish
    newNode->data = value;      // Tugunga qiymat berish
    newNode->next = top;        // Yangi tugunni stekning yuqorisiga qo‘shish
    top = newNode;              // Top ni yangi tugunga ko‘rsatish
}

// Stek elementlarini chiqarish funksiyasi
void display(Node* top) {
    Node* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* stack1 = nullptr;
    push(stack1, 100);
    push(stack1, 200);
    push(stack1, 300);

    cout << "Stek elementlari: ";
    display(stack1);

    return 0;
}