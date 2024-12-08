#include <vector>
#include "Device.h"
#include "PortableHardDrive.h"
#include "Smartphone.h"
#include "Tablet.h"

using namespace std;

void main() {
	vector<Device*> devices;
	int choice;

	do {
		cout << "\nMenu:\n";
		cout << "1. Add device\n";
		cout << "2. Delete device\n";
		cout << "3. Show all devices\n";
		cout << "4. Change device\n";
		cout << "5. Search by name\n";
		cout << "6. Exit\n";
		cout << "Your choice: ";

		cin >> choice;
		if (choice == 1) {
			int type;
			cout << "Select the device type\n1 - Portable hard drive\n2 - Smartphone\n3 - Tablet)\n";
			cin >> type;
			string manufacturer, model, name;
			unsigned int capacity, count;
			cout << "Enter manufacturer: ";
			cin >> manufacturer;
			cout << "Enter model: ";
			cin >> model;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter capacity: ";
			cin >> capacity;
			cout << "Enter count: ";
			cin >> count;

			if (type == 1)
				devices.push_back(new PortableHardDrive(manufacturer, model, name, capacity, count));
			else if (type == 2)
				devices.push_back(new Smartphone(manufacturer, model, name, capacity, count));
			else if (type == 3)
				devices.push_back(new Tablet(manufacturer, model, name, capacity, count));
		}
		else if (choice == 2) {
			int index;
			cout << "Enter the device number to delete: ";
			cin >> index;

			if (index > 0 && index <= devices.size()) {
				delete devices[index - 1];
				devices.erase(devices.begin() + index - 1);
				cout << "The device has been removed.\n";
			}
			else {
				cout << "Invalid number.\n";
			}
		}
		else if (choice == 3) {
			for (size_t i = 0; i < devices.size(); ++i) {
				cout << i + 1 << ". ";
				devices[i]->Print();
			}
		}
		else if (choice == 4) {
			int index;
			cout << "Enter the device number to change: ";
			cin >> index;

			if (index > 0 && index <= devices.size()) {
				string newName;
				cout << "Enter new name: ";
				cin >> newName;
				devices[index - 1]->SetName(newName);
				cout << "New name.\n";
			}
			else {
				cout << "Invalid number.\n";
			}
		}
		else if (choice == 5) {
			string searchName;
			cout << "Enter a name to search: ";
			cin >> searchName;
			bool found = false;
			for (size_t i = 0; i < devices.size(); ++i) {
				if (devices[i]->GetName() == searchName) {
					cout << "Device found:\n";
					devices[i]->Print();
					found = true;
				}
			}
			if (!found)
				cout << "Device not found.\n";
		}
	} while (choice != 6);

	for (Device* device : devices)
		delete device;
}
