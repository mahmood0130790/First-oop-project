#pragma once
#include<iostream>
#include <string>
using namespace std;
class Department
{
private:
	string Depname; string DepManager; int DepID;
public:
		void Set_depName( string depname);
		string get_depName();

		void Set_depManger(string depManager);
		string Get_depManager();

		void Set_depID(int depID);
		int Get_depID();


};

