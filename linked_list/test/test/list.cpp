#include <iostream>
using namespace std;

class SinglyLinkedList
{
public:
	struct Node
	{
		int data = 0;
		Node* next = nullptr;
	};

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int count = 0;

public:
	void AddToHead(int data)
	{
		Node* newElem = new Node();
		newElem->data = data;
		newElem->next = head;
		if (head == nullptr)
		{
			tail = newElem;
		}
		head = newElem;
		count++;
	}

	void AddToTail(int data)
	{
		Node* newElem = new Node();
		newElem->data = data;
		if (tail == nullptr)
		{
			head = newElem;
		}
		else
		{
			tail->next = newElem;
		}
		tail = newElem;
		count++;
	}

	void InsertInto(int data, int position)
	{
		if (position >= count)
		{
			AddToTail(data);
			return;
		}
		else if (position <= 0)
		{
			AddToHead(data);
			return;
		}

		Node* newElem = new Node();
		newElem->data = data;
		int i = 1;
		Node* beforeNew = head;
		while (i++ != position)
		{
			beforeNew = beforeNew->next;
		}
		newElem->next = beforeNew->next;
		beforeNew->next = newElem;

		count++;
	}

	void DeleteFromHead()
	{
		if (count == 0)
		{
			// cout << "Empty list!\n";
			return;
		}
		Node* temp = head;
		head = head->next;
		delete temp;
		count--;
		if (head == nullptr)
		{
			tail = nullptr;
		}
	}

	void DeleteFromTail()
	{
		if (count == 0) {
			// cout << "Empty list!\n";
			return;
		}
		DeleteByIndex(count - 1);
	}

	void DeleteByIndex(int position)
	{
		if (position <= 0)
		{
			DeleteFromHead();
			return;
		}

		if (position >= count)
		{
			position = count - 1;
		}

		int i = 1;
		Node* beforeDel = head;
		while (i++ != position)
		{
			beforeDel = beforeDel->next;
		}
		Node* sacrifice = beforeDel->next;
		beforeDel->next = sacrifice->next;
		delete sacrifice;
		count--;
		if (beforeDel->next == nullptr)
		{
			tail = beforeDel;
		}
	}

	void Clear()
	{
		while (head != nullptr)
		{
			DeleteFromHead();
		}
	}

	void Print() const
	{
		if (count == 0)
		{
			cout << "Empty list!\n";
			return;
		}
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}

	int GetCount() const
	{
		return count;
	}

	int IndexOf(int data) const
	{
		if (count == 0)
		{
			// cout << "Empty list!\n";
			return -1;
		}
		Node* temp = head;
		int i = 0;
		while (i < count)
		{
			if (data == temp->data)
			{
				return i;
			}
			i++;
			temp = temp->next;
		}

		return -1;
	}
};

int main()
{
	SinglyLinkedList sll;

	// вставка в конец списка
	sll.AddToTail(10);
	sll.AddToTail(20);
	sll.AddToTail(30);
	sll.AddToTail(40);
	sll.Print();

	// вставка в начало списка
	sll.AddToHead(50);
	sll.AddToHead(60);
	sll.AddToHead(70);
	sll.AddToHead(80);
	sll.Print();

	// количество элементов, поиск элементов
	cout << "count: " << sll.GetCount() << "\n";
	cout << "index of 70: " << sll.IndexOf(70) << ", index of 90: " << sll.IndexOf(90) << "\n";

	// вставка по позиции
	sll.InsertInto(-1, -1);
	sll.Print();
	sll.InsertInto(2, 2);
	sll.Print();
	sll.InsertInto(22, 22);
	sll.Print();

	// удаление с начала списка
	sll.DeleteFromHead();
	sll.DeleteFromHead();
	sll.DeleteFromHead();
	sll.Print();

	// удаление с конца списка
	sll.DeleteFromTail();
	sll.DeleteFromTail();
	sll.DeleteFromTail();
	sll.Print();

	// удаление по указанному индексу
	sll.DeleteByIndex(0);
	sll.DeleteByIndex(1);
	sll.DeleteByIndex(2);
	sll.Print();

	// очистка списка
	sll.Clear();
	sll.Print();
}