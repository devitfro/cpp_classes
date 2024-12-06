#include "Vector.h"

void Vector::EnsureCapacity() {
	if (size == capacity) {
		capacity *= 2;
		int* temp = new int[capacity];
		for (int i = 0; i < size; ++i) { // memcpy_s
			temp[i] = data[i];
		}
		delete[] data;
		data = temp;
	}
}

Vector::Vector() : Vector(10) {
	// cout << "C-TOR WITHOUT PARAMS!\n";
}

Vector::Vector(unsigned int capacity) {
	// cout << "C-TOR WITH PARAMS!\n";
	if (capacity < 10) {
		capacity = 10;
	}
	this->capacity = capacity;
	data = new int[capacity];
}

// copy c-tor
Vector::Vector(const Vector& original) {
	size = original.size;
	capacity = original.capacity;
	data = new int[capacity];
	for (unsigned int i = 0; i < size; ++i) {
		data[i] = original.data[i];
	}
}

// get
unsigned int Vector::GetSize() const {
	return size;
}

unsigned int Vector::GetCapacity() const {
	return capacity;
}

// methods
void Vector::PushBack(int value) {
	EnsureCapacity(); // проверка, хватит ли места для нового элемента
	data[size++] = value;
	//size++;
}

void Vector::PopBack() {
	data[size - 1] = NULL;
	size--;
}

void Vector::PushFront(int value) {
	EnsureCapacity();
	for (int i = size; i > 0; --i) { // i = 1
		data[i] = data[i - 1]; // data[1] = data[0]
	}
	data[0] = value;
	size++;
}

void Vector::PopFront() {
	int* temp = new int[size];

	for (int i = 1; i < size; ++i) {
		temp[i - 1] = data[i]; 
	}
	delete[] data;

	data = temp;
	size--;
}

void Vector::Insert(unsigned int index, int value) {
	if (index > size) {
		cout << "Index out of range.\n";
		return;
	}
	size++;
	EnsureCapacity();

	int* temp = new int[size];
	int newSize = 0;

	for (int i = 0; i < size; ++i) {
		if (i < index) {
			temp[newSize++] = data[i];
		}
		else if (i == index) {
			temp[newSize++] = value;
		}
		else {
			temp[newSize++] = data[i - 1];
		}
	}

	delete[] data;
	data = temp;
}

int Vector::GetElementAt(unsigned int index) const {
	if (index >= size) {
		cout << "Index out of range.\n";
		return 1;
	}
	return data[index];
}

void Vector::RemoveAt(unsigned int index) {
	if (index >= size) {
		cout << "Index out of range.\n";
		return;
	}

	for (unsigned int i = index; i < size - 1; ++i) {
		data[i] = data[i + 1];
	}

	size--;
}

int Vector::IndexOf(int value) {
	for (int i = 0; i < size; ++i) {
		if (data[i] == value) {
			return i;
		}
	}
	return -1;
}

int Vector::LastIndexOf(int value) {
	for (int i = size - 1; i >= 0; --i) {
		if (data[i] == value) {
			return i;
		}
	}
	return -1;
}

void Vector::RemoveByValue(int value) {
	int* temp = new int[size];
	int k = 0;

	for (int i = 0; i < size; ++i) {
		if (data[i] != value) {
			temp[k++] = data[i];
		}
	}

	delete[] data;

	data = temp;
	size--;
}

void Vector::RemoveByValueAll(int value) {
	int* temp = new int[size];
	int newSize = 0;

	for (int i = 0; i < size; ++i) {
		if (data[i] != value) {
			temp[newSize++] = data[i];
		}	
	}

	delete[] data;

	data = temp;
	size = newSize;
}

void Vector::Reverse() {
	int* temp = new int[size];

	for (int i = 0; i < size; ++i) {
		temp[i] = data[size - 1 - i];
	}

	delete[] data;
	data = temp;
}

bool Vector::IsEmpty() const {
	return size == 0;
}

void Vector::Clear() {
	size = 0;
}

void Vector::SortAsc() {
	QuickSort(0, size - 1, true);
}

void Vector::SortDesc() {
	QuickSort(0, size - 1, false);
}

void Vector::QuickSort(unsigned int left, unsigned int right, bool ascending) {
	if (left >= right) {
		return; // Базовый случай
	}

	int p = data[(left + right) / 2]; // Опорный элемент
	unsigned int i = left;
	unsigned int j = right;

	while (i <= j) {
		if (ascending) {
			while (data[i] < p) i++;
			while (data[j] > p) j--;
		}
		else {
			while (data[i] > p) i++;
			while (data[j] < p) j--;
		}

		if (i <= j) {
			int temp = data[i];
			data[i] = data[j];
			data[j] = temp;

			i++;
			if (j > 0) {
				j--;
			}
		}
	}

	// Рекурсивно сортируем левую и правую части
	if (left < j) QuickSort(left, j, ascending);
	if (i < right) QuickSort(i, right, ascending);
}

void Vector::Print() const {
	if (IsEmpty()) {
		cout << "Vector is empty.\n";
		return;
	}

	for (int i = 0; i < size; ++i) {
		cout << data[i] << " ";
	}
	cout << "\n";
}

Vector Vector::Clone() const {
	Vector cloneVector(capacity);
	cloneVector.size = size;

	for (int i = 0; i < size; ++i) {
		cloneVector.data[i] = data[i];
	}

	return cloneVector;
}

Vector& Vector::operator=(const Vector& other) {
	if (this == &other) {
		return *this;
	}

	delete[] data;

	size = other.size;
	capacity = other.capacity;
	data = new int[capacity];
	for (unsigned int i = 0; i < size; ++i) {
		data[i] = other.data[i];
	}

	return *this;
}

