#include<iostream>
#include<string>
#include"Menu.h"
#include"Hash_Table.h"
using namespace std;

class Ticket_Node
{
public:
	string C_id;
	Ticket_Node* next;
	Ticket_Node() {
		C_id =" ";
		next = NULL;
	}
	Ticket_Node(string Customer_id) {
		C_id = Customer_id;
		next = NULL;
	}

};

class Ticket_List
{
public:
	Ticket_Node* head;
	Ticket_Node* tail;
	int Ticket_count;
	Ticket_List() {
		head = NULL;
		tail = NULL;
		Ticket_count = 500;
	}
	void oderTicket_First(string Customer_id) {
		Ticket_Node* temp = new Ticket_Node(Customer_id);
		if (head == NULL) {
			head = temp;
			tail = temp;
			Ticket_count--;
		}
		else
		{
			cout << "You cann't get first ticket it is odered" << endl;
		}
	}

	void oderTicket_Last(string Customer_id) {
		Ticket_Node* temp = new Ticket_Node(Customer_id);
		if (tail == NULL) {
			head = temp;
			tail = temp;
			Ticket_count--;
		}
		else
		{
			cout << "You cann't  oder tickets all are booked" << endl;
		}
	}

	void oderTicket_At(string Customer_id,int pos) {
		if (pos<0 || pos>Ticket_count) {
			cout << "Invalid sheet number you entered" << endl;
		}
		else if (pos==0)
		{
			oderTicket_First(Customer_id);
		}
		else if (pos==Ticket_count)
		{
			oderTicket_Last(Customer_id);
		}
		else
		{
			Ticket_Node* temp = new Ticket_Node(Customer_id);
			Ticket_Node* current = head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			temp -> next = current -> next;
			current->next = temp;
			Ticket_count--;
		}
		
	}
	void remove_B_First() {
		if (head == NULL) {
			cout << "You did not book a ticket" << endl;
		}
		else
		{
			Ticket_Node* temp = head;
			if (Ticket_count == 1) {
				delete temp;
				head = NULL;
				tail = NULL;
			}
			else
			{
				head = head->next;
				delete temp;
			}
		}
	}
	void print_BT_List() {
		Ticket_Node* current = head;
		while (current!=NULL)
		{
			cout << current->C_id << " | ";
			current = current -> next;
		}
		cout << endl;
	}

	
};




int main() {
	
	mainMenu();
	
	
	return 0;
}