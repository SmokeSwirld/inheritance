
#include "Aspirant.h"
#include "Passport.h"
int main()
{
	Aspirant aspi;
	aspi.PrinASpirant();
	aspi.SetStudentWork("superwork");
	aspi.PrinASpirant();
	aspi.SetName("Alex", "G");
	aspi.SetBirthday(5, 1, 1988);
	aspi.PrinASpirant();
	cout << "===========================================\n";
	Passport pa;
	pa.ShowALL();
	ForeignPassport pa1;
	pa1.ShowAllFP();
	cout << "===========================================\n\n";
	Visa vi;
	vi.ShowVisa();
	
	vi.NewVisa("Italy");
	vi.NewVisa("France");
	vi.NewVisa("Germany");
	vi.NewVisa("Greece");
	vi.ShowVisa();
	cout << "===========================================\n\n";
	pa1.NewVisa("USA");
	
	pa1.ShowAllFP();
}
