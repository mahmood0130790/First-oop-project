#include "Employee.h"


void Employee::set_Empname(string empname)
{
	Empname = empname;
}

string Employee::get_Empname()
{
	return Empname;
}

void Employee::set_Empsalary(double empsalary)
{
	Empsalary = empsalary;
}

double Employee::get_Empsalary()
{
	return Empsalary;
}

void Employee::set_Empage(int empage)
{
	Empage = empage;
}

int Employee::get_Empage()
{
	return Empage;
}

void Employee::set_EmpDepID(int empdepid)
{
	empDEPid=empdepid;
}

int Employee::get_EmpDepID()
{
	return empDEPid;
}
