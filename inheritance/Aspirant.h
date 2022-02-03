#pragma once
#include "Students.h"
class Aspirant : virtual  public Students
{

	string tema;
		
public:
	Aspirant() :Students()
	{
		tema = "standart";
	}
	void SetStudentWork( string work)
	{
		tema = work;
	}

	void PrinASpirant()
	{
		GetShowAll();
		cout << "\n" << tema << "\n" << this << "\n";
	}
	


};
