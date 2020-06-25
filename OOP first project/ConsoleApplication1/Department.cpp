#include "Department.h"

void Department::Set_depName(string depname)
{
	Depname = depname;
}

string Department::get_depName()
{
	return Depname;
}

void Department::Set_depManger(string depManager)
{
	DepManager = depManager;
}

string Department::Get_depManager()
{
	return DepManager;
}

void Department::Set_depID(int depID)
{
	DepID = depID;
}

int Department::Get_depID()
{
	return DepID;
}
