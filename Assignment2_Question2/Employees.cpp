/*
	Jayden Wehr
	Employees.cpp

*/

#include "Employees.h"
using namespace std;


//Function declarations for the NonProfessionalEmployee class

NonProfessionalEmployee::NonProfessionalEmployee(double hw, double hr) : hoursWorked(hw), hourlyRate(hr) {}

double NonProfessionalEmployee::calculateWeeklySalary() {

	return hoursWorked * hourlyRate;

}

double NonProfessionalEmployee::calculateHealthCare() {

	//We'll take 10% of the pay and put it towards health care contributions.
	return calculateWeeklySalary() * 0.10;
}

int NonProfessionalEmployee::calculateVacationDays() {

	/*
	* For every 8 hours, 1 vacation day is earned.
	* The number is rounded down, so someone who works 45 hours will still get 5 vacation days.
	*/
	return hoursWorked / 8;
}

int NonProfessionalEmployee::getHoursWorked() {

	return hoursWorked;
}

void NonProfessionalEmployee::setHoursWorked(double newHoursWorked) {

	hoursWorked = newHoursWorked;
}

int NonProfessionalEmployee::getHourlyRate() {

	return hourlyRate;
}

void NonProfessionalEmployee::setHourlyRate(double newHourlyRate) {

	hourlyRate = newHourlyRate;
}


///////////////////////////////////////////////////////////////////////////////


//Function declarations for the ProfessionalEmployee Class

ProfessionalEmployee::ProfessionalEmployee(double ms) :  monthlySalary(ms) {}

double ProfessionalEmployee::calculateWeeklySalary() {

	return monthlySalary / 4;

}

double ProfessionalEmployee::calculateHealthCare() {

	//We'll take 20% of the pay and put it towards health care contributions.
	return calculateWeeklySalary() * 0.20;
}

int ProfessionalEmployee::calculateVacationDays() {

	return VACATION_DAYS;
}

int ProfessionalEmployee::getMonthlySalary() {

	return monthlySalary;
}

void ProfessionalEmployee::setMonthySalary(double newMonthlySalary) {

	monthlySalary = newMonthlySalary;
}