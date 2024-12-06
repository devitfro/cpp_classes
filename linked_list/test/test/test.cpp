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
	void addToTail(int value) {
		Node* temp = new Node;
		temp->data = value;
		if (count == 0) {
			head = temp;
		}
		else {
			tail->next = temp;
		}

		tail = temp;
		count++;
	}

	unsigned int GetCount() const {
		return count;
	}

	void Print() const {
		if (count == 0) {
			cout << "List is empty..\n";
			return;
		}
		Node* current = head;

		while (current != nullptr) {
			cout << current->data << " ";
			current = current->next;
		}

		/*for (int i = 0; i < count; i++) {
			cout << current->data << " ";
			current = current->next;
		}*/
	}

	Node* Search(int value) const {
		if (count == 0) {
			cout << "List is empty..\n";
			return nullptr;
		}
		Node* current = head;

		for (int i = 0; i < count; i++) {
			if (current->data == value) return current;
			current = current->next;
		}
		return nullptr;
	}
	void DeleteFromHead() {
		head = head->next;
		count--;
	}

};

int main()
{
	SingleLinkedList list;
	//cout << sizeof(list) << "\n";
	list.addToTail(10);
	list.addToTail(20);
	list.addToTail(30);
	list.addToTail(40);
	list.addToTail(50);
	list.Print();
	cout << "\n";

	//cout << list.GetCount();
	cout << "\n";
	//Node* result = list.Search(30);
	//cout << result->data << "\n";
	list.DeleteFromHead();
	list.Print();

	//delete result;
	//list.Print();


	return 0;

}
