#pragma once

#include "Employee.h"
#include "Department.h"
#include <string>
#include <iostream>
using namespace std;

class Company
{
private:
	int ie, id;
	Employee Employees[100];
	Department Departments[100];

public:
	
	void Add_Department();
	void Add_Employee();
	void CahngeDepartmentForEmp();
	void reportfordepartments();


	Company();
	
};

