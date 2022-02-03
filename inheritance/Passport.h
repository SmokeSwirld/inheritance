#pragma once
#include "Libery.h"
class Passport
{
protected:
	string name;
	string surname;
	string country;
	string numberpassport;

public:

	Passport()
	{
		name = "Alex";
		surname = "G";
		country = "UKR";
		numberpassport = "1204GHUT678";
	}
	Passport(string name, string surname, string country, string numberpassport)
	{
		this->name = name;
		this->surname = surname;
		this->country = country;
		this->numberpassport = numberpassport;
	}
	void SetName(string name)
	{
		this->name = name;
	}
	void SetSurname(string surname)
	{
		this->surname = surname;
	}
	void SetCountry(string country)
	{
		this->country = numberpassport;
	}
	void SetNumberpassport(string numberpassport)
	{
		this->numberpassport = numberpassport;
	}
	string GetName()
	{
		return name;
	}
	string GetSurname()
	{
		return surname;
	}
	string GetCountry()
	{
		return country;
	}
	string GetNumberpassport()
	{
		return numberpassport;
	}
	void ShowALL( )
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "\nName: " << name << " Surname: " << surname << " Country: " << country << " Number Passport: " << numberpassport << "  (adress " << this << ")";
		cout << "\n";
		SetConsoleTextAttribute(h, 7);
	}

};
class Visa
{
protected:
	int lenght = 20;
	string* visa = new string[lenght];
	int count;
public:
	Visa()
	{
		count = 1;
		visa[0] = "Ukraine";

	}

	void NewVisa(string visa1)
	{

      visa[count++] = visa1;		

	}
	void ShowVisa()
	{
		
		for (int i = 0; i < count; i++)
		{
			cout << visa[i]<<" ";
		}
		cout << "\n";
	}

	~Visa()
	{
		if (visa != nullptr) delete[] visa;
		cout << "D-TOR";
	}
};

class ForeignPassport : virtual  public Passport, virtual public Visa
{
private:
	string numberForeignPassport;
public:
	ForeignPassport() :Passport()
	{
		numberForeignPassport = " 12030YFTE3465";
	}
	void SetNumberForeignPassport(string numberForeignPassport)
	{
		this->numberForeignPassport = numberForeignPassport;
	}
	string GetnumberForeignPassport()
	{
		return numberpassport;
	}
	void ShowAllFP()
	{
		ShowALL();
		cout << "FOREING PASSPORT : " << numberForeignPassport << "\n";
		ShowVisa();
	}

};

