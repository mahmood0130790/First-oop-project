#include <iostream>
#include "Company.h"
using namespace std;

int Selection () {
	cout << "type 1 to add a department" << endl;
	cout << "type 2 to add an employee" << endl;
	cout << "type 3 to chanege an employee's department " << endl;
	cout << "type 4 to print a report" << endl;
	cout<<"type 0 to end programe"<<endl;
	int select; cin >> select;
	return select;
}

int main()
{
	
	Company company1;
	
	int sign = 1;
	while (sign != 0) {
		int selection = Selection();
		switch (selection) {
		case 1:
			company1.Add_Department(); cout << endl << endl << endl;
			break;

		case 2:
			company1.Add_Employee(); cout << endl << endl << endl;
			break;

		case 3:
			company1.CahngeDepartmentForEmp(); cout << endl << endl << endl;
			break;
		case 4:
			company1.reportfordepartments(); cout << endl << endl << endl;
			break;
		case 0:
			sign = 0; cout << endl << endl << endl;
			break;
		default:
			cout << "Wrong Choise ReEnter" << endl; cout << endl << endl << endl;

		}
	}
	return 0;
}

