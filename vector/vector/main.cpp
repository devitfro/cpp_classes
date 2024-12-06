#include "Vector.h"

int main()
{
	Vector ar;
	ar.Print();
	for (int i = 0; i < 5; i++) {
		ar.PushBack(rand() % 10);
	}
	ar.Print();

	ar.PushFront(100);
	ar.Reverse();
	ar.PopBack();
	ar.PopFront();
	ar.RemoveByValueAll(8);
	ar.Insert(3, 500);
	ar.Insert(5, 100);
	ar.RemoveAt(2);
	ar.Print();

	cout << ar.IndexOf(500) << "\n";
	cout << ar.LastIndexOf(100) << "\n";;

	int result = ar.GetElementAt(3);
	cout << result << "\n";

	cout << "Copy vector:\n";
	ar.Clone().Print();

	cout << "Sorting ascending:\n";
	ar.SortAsc();
	ar.Print();

	cout << "Sorting descending:\n";
	ar.SortDesc();
	ar.Print();
}