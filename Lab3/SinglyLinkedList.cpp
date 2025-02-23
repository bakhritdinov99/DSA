#include <iostream>
using namespace std;

// Node strukturasini aniqlash
struct Node {
    int data;       // Tugunning qiymati
    Node* next;     // Keyingi tugunga ko'rsatkich
};

// Ro'yxatni ekranga chiqarish funksiyasi
void printList(Node* head) {
    Node* temp = head; // Vaqtinchalik ko'rsatkich
    while (temp != nullptr) { // Ro'yxatning oxirigacha yuramiz
        cout << temp->data << " -> "; // Hozirgi tugun qiymatini chiqaramiz
        temp = temp->next; // Keyingi tugunga o'tamiz
    }
    cout << "NULL" << endl; // Ro'yxat oxirini ko'rsatamiz
}

int main() {
    // Ro'yxatning bir nechta tugunini yaratamiz
    Node* head = new Node{10, nullptr};          // Birinchi tugun
    head->next = new Node{20, nullptr};         // Ikkinchi tugun
    head->next->next = new Node{30, nullptr};   // Uchinchi tugun

    // Ro'yxatni ekranga chiqaramiz
    printList(head);

    return 0; // Dastur muvaffaqiyatli yakunlandi
}
