#pragma once

#include <iostream>
using namespace std;

class Vector {
	unsigned int size = 0; // количество действительно присутствующих элементов в контейнере
	unsigned int capacity = 10; // ёмкость (вместительность, запас памяти)
	int* data = nullptr; // указатель на динамический массив целых чисел

	void EnsureCapacity();

public:
	// c-tor
	Vector();
	Vector(unsigned int);

	// copy c-tor
	Vector(const Vector&);

	// get
	unsigned int GetSize() const;
	unsigned int GetCapacity() const;

	// methods
	void PushBack(int);
	void PopBack();
	void PushFront(int value);
	void PopFront();
	void Insert(unsigned int, int);
	int GetElementAt(unsigned int) const;
	void RemoveAt(unsigned int);
	int IndexOf(int);
	int LastIndexOf(int);
	void RemoveByValue(int);
	void RemoveByValueAll(int);
	void Reverse();
	bool IsEmpty() const;
	void Clear();
	void Print() const;
	Vector Clone() const;
	void SortAsc();
	void SortDesc();
	void QuickSort(unsigned int, unsigned int, bool);
	Vector& operator=(const Vector&);

	// destructor
	~Vector() {
		// cout << "DESTRUCTOR!\n";
		if (data != nullptr) {
			delete[] data;
			data = nullptr;
		}
	}
};
