#include "Libery.h"
using namespace std;


struct Birthday
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
}; 

class Students
{
protected:
	
	char* first_name;
	char* last_name;
	Birthday birthday;
	char* numbertelefone;
	int sizezachet = 0;
	int* p_zachet = new int[100];
	int sizekurswork = 0;
	int* p_kurswork = new int[100];
	int sizeekz = 0;
	int* p_ekzamen = new int[100];

public:
	
	Students();
	Students(const char* first_name, const char* last_name, const char* numbertelefone);
	Students(const Students& original);
	Students operator = (const Students& right)
	{
		Students result;
		this->first_name = new char[100];
		strcpy_s(this->first_name, 99, right.first_name);

		this->last_name = new char[100];
		strcpy_s(this->last_name, 99, right.last_name);

		this->numbertelefone = new char[100];
		strcpy_s(this->numbertelefone, 99, right.numbertelefone);

		sizezachet = right.sizezachet;
		sizekurswork = right.sizekurswork;
		sizeekz = right.sizeekz;
		for (int i = 0; i <= sizezachet; i++)
		{
			p_zachet[i] = right.p_zachet[i];
		}
		for (int i = 0; i <= sizekurswork; i++)
		{
			p_kurswork[i] = right.p_kurswork[i];
		}
		for (int i = 0; i <= sizeekz; i++)
		{
			p_ekzamen[i] = right.p_ekzamen[i];
		}
		birthday.day = right.birthday.day;
		birthday.month = right.birthday.month;
		birthday.year = right.birthday.year;

	return result;
	};
	~Students();
	void SetTelefone(const char* numbertelefone);
	void SetName(const char* first_name, const char* last_name);
	void SetBirthday(int day, int month, int year);
	void Setzachet(int zachet);
	void Setkursowa(int kursowa);
	void SetEkz(int ekz);
	void GetShowAll() const;

};