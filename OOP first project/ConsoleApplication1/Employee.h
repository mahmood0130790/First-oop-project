#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
	string Empname; double Empsalary; int Empage; int empDEPid;
public:

	void set_Empname(string empname);
	string get_Empname();

	void set_Empsalary(double empsalary);
	double get_Empsalary();

	void set_Empage(int empage);
	int get_Empage();
	
	void set_EmpDepID(int empdepid);
	int get_EmpDepID();

};
