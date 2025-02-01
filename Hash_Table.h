#pragma once
#include<iostream>
#include<string>
#include<list>
#include"Menu.h"
#include"Grounds.h"

using namespace std;

class T_Item {
public:
	string id;
	string name;

	T_Item() {
		id = "";
		name = "";
	}

	T_Item(string k,string v) {
		id = k;
		name = v;
	}
};

class T_Table {

private:
	static const int size = 10;
	list<T_Item> table[size];
	
public:
	int getTicket(string id);
	bool isIdExist(string id);
	void buyTicket(string id, string name);
	void removeTicket(string id);
	void print();
};

int T_Table::getTicket(string id) {
	int sum = 0;
	for (int i = 0; i < id.length(); i++) {
		sum = sum + id[i];
	}
	return sum % size;
}
bool T_Table::isIdExist(string id) {
	int index = getTicket(id);

	for (T_Item t : table[index]) {
		if (t.id == id)
			return true;
	}
	return false;

}
void T_Table::buyTicket(string id, string name) {
	int index = getTicket(id);
	T_Item ti(id, name);
	int originalIndex = index;

	// Move to the next slot using linear probing
	while (!table[index].empty())
	{
		for (T_Item ti : table[index]) {
			if (ti.id == id) {
				cout << "Your ID number is already exists" << endl;
				return;
			}
		}
		index = (index + 1) % size;

		if (index == originalIndex) {
			cout << "\n\tAll tickets are sold out" << endl;
			return;
		}
	}
	
	table[index].push_back(ti);
}

void T_Table::removeTicket(string id) {
	int index = getTicket(id);

	// Get an iterator pointing to the beginning of the container at the specified index
	auto it = table[index].begin();

	// Iterate through the elements in the container at the specified index
	while (it!=table[index].end())
	{
		// Check if the current ticket's ID matches the specified ID
		if (it->id == id) {

			// Erase the ticket from the container
			it = table[index].erase(it);
			cout << "\n\tTicket with ID " << id << " remove successfully.\n" << endl;
			system("PAUSE");
			return;
		}
		else
		{
			++it;
		}
	}
	cout << "\tTicket with ID " << id << " not found." << endl;
}

void T_Table::print() {
	for (int i = 0; i < size; i++) {
		cout << "Ticket NO: " << i + 1 << " : ";
		for (T_Item t : table[i]) {
			cout << t.id << " - " << t.name << " | ";
		}
		cout << endl;
	}
}
