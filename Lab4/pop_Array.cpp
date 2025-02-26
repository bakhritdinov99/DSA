//
// Created by farrukh on 2/26/2025.
//
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int stack[MAX_SIZE];
int top = -1;

// Element qo'shish (push) funksiyasi
void push(int value) {
    if (top >= MAX_SIZE - 1) { // Stek to'la holatini tekshirish
        cout << "Stek to'la!" << endl;
        return;
    }
    stack[++top] = value; // Topni oshirib, yangi element qo‘shiladi
    cout << value << " soni stekka qo'shildi." << endl;
}

int main() {
    push(10); // Stekka 10 ni qo‘shish
    push(20); // Stekka 20 ni qo‘shish
    push(30); // Stekka 30 ni qo‘shish
    push(40); // Stekka 40 ni qo‘shish

    return 0;
}