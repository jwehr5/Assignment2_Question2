#include <iostream>
#include "Employees.h"
using namespace std;

int main() {

	//Testing the NonProfessional Employee class
	cout << "*** TESTING THE NONPROFESSIONAL EMPLOYEE CLASS ***" << endl;
	cout << "Creating a Nonprofessional Employee who works 40 hours a week and gets paid 28.24/hr." << endl;
	Employee* e1 = new NonProfessionalEmployee(40, 28.24);
	cout << "Weekly salary is: $" << e1->calculateWeeklySalary() << " [Should be $1129.6]" << endl;
	cout << "The amount from their weekly pay that go towards health care contributions is: $" << e1->calculateHealthCare() << " [Should be $112.96]" << endl;
	cout << "The number of vacation days for a given week is: " << e1->calculateVacationDays() << " [Should be 5]" << endl;

	cout << endl;

	cout << "Creating a Nonprofessional Employee who works 47 hours a week and gets paid 26.30/hr." << endl;
	Employee* e2 = new NonProfessionalEmployee(47, 26.30);
	cout << "Weekly salary is: $" << e2->calculateWeeklySalary() << " [Should be $1236.1]" << endl;
	cout << "The amount from their weekly pay that go towards health care contributions is: $" << e2->calculateHealthCare() << " [Should be $123.61]" << endl;
	cout << "The number of vacation days for a given week is: " << e2->calculateVacationDays() << " [Should be 5]" << endl;

	cout << endl << endl;

	//Testing the Professional Employee Class
	cout << "*** TESTING THE PROFESSIONAL EMPLOYEE CLASS ***" << endl;
	cout << "Creating a Professional Employee who has a monthly salary of $1156.40/month." << endl;
	Employee* e3 = new ProfessionalEmployee(1156.40);
	cout << "Weekly salary is: $" << e3->calculateWeeklySalary() << " [Should be $289.1]" << endl;
	cout << "The amount from their weekly pay that go towards health care contributions is: $" << e3->calculateHealthCare() << " [Should be $57.82]" << endl;
	cout << "The number of vacation days for a given week is: " << e3->calculateVacationDays() << " [Should be 12]" << endl;

	delete e1;
	delete e2;
	delete e3;

	return 0;
}