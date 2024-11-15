#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next = nullptr;
};

class SingleLinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;
    unsigned int count = 0;

public:
    void AddToTail(int value) {
        Node* temp = new Node; // память под узлы в хипе, потому что стек маленький и очень быстро закончится
        temp->data = value;
        if (count == 0)        
            head = temp;
        else
            tail->next = temp;       

        tail = temp;
        count++;
    }

    unsigned int GetCount() const {
        return count;
    }

    void Print() const {
        if (count == 0) {
            cout << "List is empty!\n";
        }

        Node* current = head;
       /* while (current != nullptr) {
            cout << current->data << ", ";
            current = current->next;
        }*/

        for (int i = 0; i < count; i++) {
            cout << current->data << ", ";
            current = current->next;
        }
        cout << "\n\n================\n\n";
    }
};

int main()
{
    SingleLinkedList list;

    list.AddToTail(10);
    list.AddToTail(20);
    list.AddToTail(30);
    list.AddToTail(40);
    list.AddToTail(50);
    list.Print();

    cout << sizeof(list) << "\n";
    cout << list.GetCount();


    // 1 variant
    /*Node elem1;
    elem1.data = 10;

    Node elem2;
    elem2.data = 20;
    elem1.next = &elem2;

    Node elem3;
    elem3.data = 30;
    elem2.next = &elem3;

    Node elem4;
    elem4.data = 40;
    elem3.next = &elem4;

    Node elem5;
    elem5.data = 50;
    elem4.next = &elem5;

    Node* current = &elem1;
    while (current != nullptr) {
        cout << current->data << ", ";
        current = current->next;
    }*/

    return 0;
}
