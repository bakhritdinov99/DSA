//
// Created by farrukh on 2/26/2025.
//
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int stack[MAX_SIZE];
int top = -1; // Stek bo'sh

void push(int value) {
    if (top >= MAX_SIZE - 1) { // Stek to'la holatini tekshirish
        cout << "Stek to'la!" << endl;
        return;
    }
    stack[++top] = value; // Topni oshirib, yangi element qo‘shiladi
}

// Stekdan element olib tashlash (pop) funksiyasi, olib tashlangan qiymatni qaytaradi
int pop() {
    if (top == -1) { // Stek bo'shligini tekshirish
        cout << "Stek bo'sh!" << endl;
        exit(EXIT_FAILURE); // Xatolik holati
    }
    return stack[top--]; // Oxirgi elementni olib tashlash va qaytarish
}

// Barcha funksiyalarni sinash uchun main funksiyasi
int main() {
    push(10);
    push(20);
    cout << pop() << " stekdan olib tashlandi." << endl;
    cout << pop() << " stekdan olib tashlandi." << endl;
    return 0;
}