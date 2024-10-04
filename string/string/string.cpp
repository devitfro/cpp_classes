#include <iostream>
using namespace std;

int main()
{

	char* name = new char[256];
	strcpy_s(name, 5, "Alex");
	cout << name << "\n";

	int l = strlen(name);
	cout << l << "\n";

	return 0;
}

