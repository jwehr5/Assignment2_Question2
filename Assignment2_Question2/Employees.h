#pragma once
#ifndef EMPLOYEES_H
#define EMPLOYEES_H

//Defintion for the Abstract Class Employee
class Employee {


public:

	/* calculateWeeklySalary() calculates the weekly salary for each type of employee.
	   NonProfessional Employees get paid based on their hours times their rate.
	   Professional Employees have a monthly salary. Their weekly salary will be determined
	   by taking their monthly salary divided by 4.
	
	*@return The weekly salary for each type of employee.

    */
	virtual double calculateWeeklySalary() = 0;

	/*  calculateHealthCare() calculates the amount of the pay that gets sent towards health care contribtuions.
		NonProfessional Employees have 10% of their pay go towards health care contributions.
		Professional Employees have 20% of their pay go towards health care contributions.

	*@return The amount of pay that goes towards health care contributions.
	
	*/
	virtual double calculateHealthCare() = 0;


	/* calculateVacationDays() calculates the number of vacation days for each type of employee.
	   NonProfessional Employees get 1 vacation day for every 8 hours they work.
	   Professional Employees get a fixed number of vacation days. In this case they will get 12 vacation days.	
	
	* @return The number of vacation days.
	
	*/
	virtual int calculateVacationDays() = 0; 


};


//Definiton of the NonProfessionalEmployee Class
class NonProfessionalEmployee : public  Employee {

private:
	double hoursWorked;
	double hourlyRate;


public:

	NonProfessionalEmployee(double hw, double hr);
	double calculateWeeklySalary();
	double calculateHealthCare();
	int calculateVacationDays();

	//Getters and Setters
	int getHoursWorked();
	void setHoursWorked(double newHoursWorked);
	int getHourlyRate();
	void setHourlyRate(double newHourlyRate);

};


//Defintion of the ProfessionalEmployee Class
class ProfessionalEmployee : public Employee {

private:

	//We'll give the Professional Employees 12 vacation days.
	const int VACATION_DAYS = 12;
	double monthlySalary;

public:

	ProfessionalEmployee(double ms);
	double calculateWeeklySalary();
	double calculateHealthCare();
	int calculateVacationDays();

	//Getters and Setters
	int getMonthlySalary();
	void setMonthySalary(double newMonthlySalary);


};



#endif 
