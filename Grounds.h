#pragma once
#include<iostream>
#include<string>
#include"Hash_Table.h"
#include"Menu.h"
using namespace std;


class match
{
public:
	string gName;
	string mName;
	string vS;
	string time;

	match() {
		gName = "";
		mName = "";
		vS = "";
		time = "";
	}
	match(string gn,string mn,string vs,string t) {
		gName = gn;
		mName = mn;
		vS = vs;
		time = t;
	}

	
	void print() {
		cout << "\t----------------------------------------------------------";
		cout << "\n\tVenue/Ground \t: " << gName;
		cout << "\n\tType of match \t: " << mName;
		cout << "\n\t_VS_ \t\t: " << vS;
		cout << "\n\tStart Time \t: " << time << endl;
		cout << "\t----------------------------------------------------------\n";
	}

};


//grounds kandyGrounds("Bogambara Stadium","Kandy");
//match rugbyMatch("Bogambara Stadium", "Rugby match", "2.00pm");






