#pragma once
#include<iostream>
#include"Hash_Table.h"
#include"Grounds.h"
using namespace std;

void mainMenu();
void Enter(){
	cout << "\t\t-----------------------------------";
	cout << "\n\t\t<1> Get Ticket/sheet number";
	cout << "\n\t\t<2> Print the Tickets/sheets list";
	cout << "\n\t\t<3> Buy anothr Ticket/sheet ";
	cout << "\n\t\t<4> Cancel || Remove your order ";
	cout << "\n\t\t<5> Exit";
	cout << "\n\t\t-----------------------------------" << endl;
}

void Idexist() {
	cout << endl;
	cout << "\t---------------------------------------------------------\n";
	cout << "\tYou cann't buy a ticket Because your ID is alredy Exist!!\n";
	cout << "\tWe issue tickets,for one ID only one ticket\t";
	cout << "\n\t---------------------------------------------------------";
	cout << endl;
}

void Idvalid() {
	cout << "\n\t------------------------------------------------------------------------";
	cout << "\n\t!!!!!!! You can buy a ticket Because your ID is alredy NOT Exist !!!!!!!";
	cout << "\n\t======= This system is valid for one ID card only one ticket !!\t =======";
	cout << "\n\t------------------------------------------------------------------------\n"; cout << endl;
	system("PAUSE");
}
void AfterTN() {
	cout << endl;
	system("PAUSE");
	system("CLS");
	mainMenu();
}

void inValideinputi3() {
	system("CLS");
	cout << "\n\t\t\t------------------------";
	cout << "\n\t\t\t**** Invalide input ****";
	cout << "\n\t\t\t------------------------" << endl;
	system("PAUSE");
	system("CLS");
}

void invalidMatch() {
	cout << "\n\t\t\t------------------------------";
	cout << "\n\t\t\t**** Invalide Match/Input ****";
	cout << "\n\t\t\t------------------------------" << endl;
	system("PAUSE");
	system("CLS");
}


T_Table RMTK;
T_Table CMTK;
void groundsKandy() {
	cout << "\t<1> Bogambara Stadium\tRugby match\tDharmaraja College vs Kingswood College\t\tStart:3.00pm\n";
	cout << "\t<2> Pallekele Stadium\tCricket match\tSrilanka vs India\t\t\t\tStart:2.00pm\n";
	cout << "\t<3> Back\n";
	cout << "\nEnter your Choice 1,2 or 3\t";
	int i2;
	string id, name;
	cin >> i2;
	if (i2 == 1) {
		system("CLS");
		cout << "\n\tBogambara Stadium\tRugby match\tDharmaraja College vs Kingswood College\t\tStart:3.00pm\n";
		cout << "\n\tEnter your ID number\t: "; cin >> id;
		cout << "\n\tEnter your Name\t\t: "; cin >> name;
		
		if (!RMTK.isIdExist(id)) {
			Idvalid();
			RMTK.buyTicket(id, name);
			int i3;
			Enter();
			cout << "\nEnter your Choice 1,2,3,4 or 5\t";
			cin >> i3;
			if (i3 == 1) {
				system("CLS");
				cout << "\n\t\tYour Ticket/sheet number is\t: " << RMTK.getTicket(id) + 1 << endl;
				AfterTN();
				
			}
			else if (i3 == 2)
			{
				system("CLS");
				cout << "\nRugby match Ticket list" << endl;
				RMTK.print();
				cout << "\nCricket match Ticket list" << endl;
				CMTK.print();
			}
			else if (i3 == 3)
			{
				system("CLS");
				groundsKandy();
			}
			else if (i3 == 4) {
				RMTK.removeTicket(id);
				system("CLS");
				mainMenu();
			}
			else if (i3 == 5) {
				system("CLS");
				mainMenu();
			}
			else
			{
				inValideinputi3();
				groundsKandy();

			}
		}
		else
		{
			Idexist();
			groundsKandy();
		}
		

	}

	else if (i2 == 2)
	{
		system("CLS");
		cout << "\n\tPallekele Stadium\tCricket match\tSrilanka vs India\t\t\t\tStart:2.00pm\n";
		cout << "\n\tEnter your ID number\t: "; cin >> id;
		cout << "\n\tEnter your Name\t: "; cin >> name;
		

		if (!CMTK.isIdExist(id)) {
			Idvalid();
			CMTK.buyTicket(id, name);
			int i3;
			Enter();
			cout << "\nEnter your Choice 1,2,3,4 or 5\t";
			cin >> i3;
			if (i3 == 1) {
				system("CLS");
				cout << "\nYour Ticket/sheet number is\t: " << CMTK.getTicket(id) + 1 << endl;
				AfterTN();
			}
			else if (i3 == 2)
			{
				system("CLS");
				cout << "\nCricket match Ticket list" << endl;
				CMTK.print();
				cout << "\nRugby match Ticket list" << endl;
				RMTK.print();
			}
			else if (i3 == 3)
			{
				system("CLS");
				groundsKandy();
			}
			else if (i3 == 4) {
				CMTK.removeTicket(id);
				system("CLS");
				mainMenu();
			}
			else if (i3 == 5) {
				system("CLS");
				mainMenu();
			}
			else
			{
				inValideinputi3();
				groundsKandy();

			}
		}
		else
		{
			Idexist();
			groundsKandy();
		}

	}
	else if (i2 == 3) {
		system("CLS");
		mainMenu();
	}
	else
	{
		invalidMatch();
		groundsKandy();
	}
}

T_Table CMTC_1;
T_Table CMTC_2;
void groundsColombo() {
	
	cout << "\t<1> R. Premadasa Stadium\tCricket match\tAustralia vs New Zealand\t\tStart:3.00pm\n";
	cout << "\t<2> SSC Cricket Ground\t\tCricket match\tRoyal College vs Ananda College\t\tStart:2.00pm\n";
	cout << "\t<3> Back\n";
	cout << "\nEnter your Choice 1,2 or 3\t";
	int i2;
	string id, name;
	cin >> i2;
	if (i2 == 1) {
		system("CLS");
		cout << "\n\tR. Premadasa Stadium\tCricket match\tAustralia vs New Zealand\t\tStart:3.00pm\n";
		cout << "\n\tEnter your ID number\t: "; cin >> id;
		cout << "\n\tEnter your Name\t\t: "; cin >> name;

		if (!CMTC_1.isIdExist(id)) {
			Idvalid();
			CMTC_1.buyTicket(id, name);
			int i3;
			Enter();
			cout << "\nEnter your Choice 1,2,3,4 or 5\t";
			cin >> i3;
			if (i3 == 1) {
				system("CLS");
				cout << "\nYour Ticket/sheet number is\t: " << CMTC_1.getTicket(id) + 1 << endl;
				AfterTN();
			}
			else if (i3 == 2)
			{
				system("CLS");
				cout << "\nCricket match(Premadasa Stadium) Ticket list" << endl;
				CMTC_1.print();
				cout << "\nCricket match(SSC) Ticket list" << endl;
				CMTC_2.print();
			}
			else if (i3 == 3)
			{
				system("CLS");
				groundsColombo();
			}
			else if (i3 == 4) {
				CMTC_1.removeTicket(id);
				system("CLS");
				mainMenu();
			}
			else if (i3 == 5) {
				system("CLS");
				mainMenu();
			}
			else
			{
				inValideinputi3();
				groundsColombo();

			}
		}
		else
		{
			Idexist();
			groundsColombo();
		}


	}
	else if (i2 == 2) {
		system("CLS");
		cout << "\tSSC Cricket Ground\t\tCricket match\tRoyal College vs Ananda College\t\tStart:2.00pm\n";
		cout << "\n\tEnter your ID number\t: "; cin >> id;
		cout << "\n\tEnter your Name\t\t: "; cin >> name;

		if (!CMTC_2.isIdExist(id)) {
			Idvalid();
			CMTC_2.buyTicket(id, name);
			int i3;
			Enter();
			cout << "\nEnter your Choice 1,2,3,4 or 5\t";
			cin >> i3;
			if (i3 == 1) {
				system("CLS");
				cout << "\nYour Ticket/sheet number is\t: " << CMTC_2.getTicket(id) + 1 << endl;
				AfterTN();
			}
			else if (i3 == 2)
			{
				system("CLS");
				cout << "\nCricket match(SSC) Ticket list" << endl;
				CMTC_2.print();
				cout << "\nCricket match(Premadasa Stadium) Ticket list" << endl;
				CMTC_1.print();
			}
			else if (i3 == 3)
			{
				system("CLS");
				groundsColombo();
			}
			else if (i3 == 4) {
				CMTC_2.removeTicket(id);
				system("CLS");
				mainMenu();
			}
			else if (i3 == 5) {
				system("CLS");
				mainMenu();
			}
			else
			{
				inValideinputi3();
				groundsColombo();

			}
		}
		else
		{
			Idexist();
			groundsColombo();
		}
	}
	else if (i2 == 3) {
		system("CLS");
		mainMenu();
	}
	else
	{
		invalidMatch();
		groundsColombo();
	}
	
}

T_Table CMTG_1;
T_Table CMTG_2;
void groundsGalle() {
	
	cout << "\t<1> Galle  Cricket Stadium\tCricket match\tAustralia vs New Zealand\t\t\tStart:3.00pm\n";
	cout << "\t<2> Mahinda College Ground\tCricket match\tMahinda College vs Richmond College\t\tStart:2.00pm\n";
	cout << "\t<3> Back\n";
	cout << "\nEnter your Choice 1,2 or 3\t";
	int i2;
	string id, name;
	cin >> i2;
	if (i2 == 1) {
		system("CLS");
		cout << "\tGalle  Cricket Stadium\tCricket match\tAustralia vs New Zealand\t\t\tStart:3.00pm\n";
		cout << "\n\tEnter your ID number\t: "; cin >> id;
		cout << "\n\tEnter your Name\t\t: "; cin >> name;

		if (!CMTG_1.isIdExist(id)) {
			Idvalid();
			CMTG_1.buyTicket(id, name);
			int i3;
			Enter();
			cout << "\nEnter your Choice 1,2,3,4 or 5\t";
			cin >> i3;
			if (i3 == 1) {
				system("CLS");
				cout << "\nYour Ticket/sheet number is\t: " << CMTG_1.getTicket(id) + 1 << endl;
				AfterTN();
			}
			else if (i3 == 2)
			{
				system("CLS");
				cout << "\nCricket match(Galle  Cricket Stadium) Ticket list" << endl;
				CMTG_1.print();
				cout << "\nCricket match(Mahinda College Ground) Ticket list" << endl;
				CMTG_2.print();
			}
			else if (i3 == 3)
			{
				system("CLS");
				groundsGalle();
			}
			else if (i3 == 4) {
				CMTG_1.removeTicket(id);
				system("CLS");
				mainMenu();
			}
			else if (i3 == 5) {
				system("CLS");
				mainMenu();
			}

			else
			{
				inValideinputi3();
				groundsGalle();

			}
		}
		else
		{
			Idexist();
			groundsGalle();
		}


	}

	else if (i2 == 2)
	{
		system("CLS");
		cout << "\n\tMahinda College Ground\tCricket match\tMahinda College vs Richmond College\t\tStart:2.00pm\n";
		cout << "\n\tEnter your ID number\t: "; cin >> id;
		cout << "\n\tEnter your Name\t: "; cin >> name;


		if (!CMTG_2.isIdExist(id)) {
			Idvalid();
			CMTG_2.buyTicket(id, name);
			int i3;
			Enter();
			cout << "\nEnter your Choice 1,2,3,4 or 5\t";;
			cin >> i3;
			if (i3 == 1) {
				system("CLS");
				cout << "\nYour Ticket/sheet number is\t: " << CMTG_2.getTicket(id) + 1 << endl;
				AfterTN();
			}
			else if (i3 == 2)
			{
				system("CLS");
				cout << "\nCricket match(Mahinda College Ground) Ticket list" << endl;
				CMTG_2.print();
				cout << "\nCricket match(Galle  Cricket Stadium) Ticket list" << endl;
				CMTG_1.print();
			}
			else if (i3 == 3)
			{
				system("CLS");
				groundsGalle();
			}
			else if (i3 == 4) {
				CMTG_2.removeTicket(id);
				system("CLS");
				mainMenu();
			}
			else if (i3 == 5) {
				system("CLS");
				mainMenu();
			}
			else
			{
				inValideinputi3();
				groundsColombo();

			}
		}
		else
		{
			Idexist();
			groundsGalle();
			
		}

	}
	else if (i2 == 3) {
		system("CLS");
		mainMenu();
	}
	else
	{
		invalidMatch();
		groundsGalle();
	}
}

void mainMenu() {
	int i1;
	cout << "\t\t\t ===================================";
	cout << "\n\t\t\t ### Sport Ticket Booking System ###";
	cout << "\n\t\t\t ===================================";
	cout << "\n\t\t\t\t Welcome Customer!\n";
	cout << "\t\t\t ===================================\n";
	
	cout << "\n\t\t\t<1> Kandy\n";
	cout << "\t\t\t<2> Colombo\n";
	cout << "\t\t\t<3> Galle\n";
	cout << "\t\t\t<4> Exit\n";
	cout << "\nEnter your Location || Nearest place\t";
	cin >> i1;

	switch (i1)
	{
	case 1:
		system("CLS");
		cout << "\n\tGrounds\t\t\tMatches\t\t__VS__\t\t\t\t\t\tTime\n";
		groundsKandy();
		break;
	case 2:
		system("CLS");
		cout << "\n\tGrounds\t\t\t\tMatches\t\t__VS__\t\t\t\t\t\tTime\n";
		groundsColombo();
		break;
	case 3:
		system("CLS");
		cout << "\n\tGrounds\t\t\t\tMatches\t\t\t__VS__\t\t\t\t\t\tTime\n";
		groundsGalle();
		break;
	case 4:
		system("CLS");
		cout << "\n\t\t\t\tBrought To You by code-projects.org\n\n\t\t\t\t";
		system("PAUSE");
		exit(0);
	default:
		system("CLS");
		mainMenu();
		break;
	}

}

