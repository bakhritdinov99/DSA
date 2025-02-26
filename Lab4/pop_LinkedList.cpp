//
// Created by farrukh on 2/26/2025.
//
#include <iostream>
using namespace std;

// Stekning tugun tuzilmasi
struct Node {
    int data;
    Node* next;
};

Node* top = nullptr; // Stek bo'sh

// Element qo'shish (push) funksiyasi
void push(Node*& top, int value) {
    Node* newNode = new Node(); // Yangi tugun yaratish
    newNode->data = value;      // Tugunga qiymat berish
    newNode->next = top;        // Yangi tugunni stekning yuqorisiga qo‘shish
    top = newNode;              // Top ni yangi tugunga ko‘rsatish
}

// Stekdan element olib tashlash (pop) funksiyasi, qiymatni qaytaradi
int pop(Node*& top) {
    if (top == nullptr) { // Stek bo'shligini tekshirish
        cout << "Stek bo'sh!" << endl;
        exit(EXIT_FAILURE); // Xatolik holati
    }
    Node* temp = top;
    int poppedValue = top->data;
    top = top->next;
    delete temp;
    return poppedValue;            // O‘chirilgan elementning qiymatini qaytarish
}

// Stek elementlarini ko'rsatish funksiyasi
void display(Node* top) {
    if (top == nullptr) {
        cout << "Stek bo'sh!" << endl;
        return;
    }
    Node* current = top;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Barcha funksiyalarni sinash uchun main funksiyasi
int main() {
    Node* stack1 = nullptr;
    push(stack1, 10);
    push(stack1, 20);
    push(stack1, 30);
    push(stack1, 40);


    cout << "Olib tashlangan element: " << pop(stack1) << endl;

    cout << "Stek elementlari: ";
    display(stack1);

    return 0;
}
