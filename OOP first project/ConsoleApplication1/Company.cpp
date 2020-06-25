#include "Company.h"

void Company::Add_Department()

{
	string Departmentname; int DerpartmentID; string DepManagername;
	
	cout << "Ente Dep name" << endl;
		cin >>Departmentname ;
		cout << "Ente Dep Manager" << endl;
		cin >> DepManagername;
		cout << "Ente Dep ID" << endl;
		cin >> DerpartmentID;

		Department department;
		department.Set_depName(Departmentname);
		department.Set_depManger(DepManagername);
		department.Set_depID(DerpartmentID);
		Departments[id-1] = department;
		id++;
		
}

void Company::Add_Employee()
{
	string Empname; float salary; int age; int empdepid;
	cout << "enter emp name" << endl;
	cin >> Empname;
	cout << "enter emp salary" << endl;
	cin >> salary;
	cout << "enter emp age" << endl;
	cin >> age;
	cout<<"Enter Employee's depID"<<endl;
	cin >> empdepid;
	
		Employee Employee;
	Employee.set_Empname(Empname);
	Employee.set_Empsalary(salary);
	Employee.set_Empage(age);
	Employee.set_EmpDepID(empdepid);
	Employees[ie-1] = Employee;
	ie++;
}

void Company :: CahngeDepartmentForEmp() {
	string empname; int empdepid;
	cout <<"Enter Emp name"<<endl;
	cin >> empname;
	cout << "Enter Emp new depID" << endl;
	cin >> empdepid;
	
	for (int i = 1; i <= ie-1; i++) {
		if (Employees[i-1].get_Empname() == empname) {
			Employees[i-1].set_EmpDepID(empdepid);
				break;
		}
	}
}

void Company ::reportfordepartments() {

	for (int j = 1; j <= id-1; j++) {
		
		int currentDepEmployees = 0;
		
		for (int m = 1; m <= ie - 1; m++) {
			if (Employees[m-1].get_EmpDepID() == Departments[j-1].Get_depID())
				currentDepEmployees++;
		}
		
		if (currentDepEmployees == 1)
			cout << "Departmet " << Departments[j - 1].Get_depID() << " has " << currentDepEmployees << " Employee" << endl;
		else if (currentDepEmployees > 1)
			cout << "Departmet " << Departments[j - 1].Get_depID() << " has " << currentDepEmployees << " Employees" << endl;
		else if (currentDepEmployees == 0)
			;
	}

}

Company::Company() 
{
	id = 1; ie = 1;
}