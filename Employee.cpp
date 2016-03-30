#include<iostream>
#include<string>

using namespace std;

class Employee() //class Employee
{
public: Employee(string,int); //constructor
		string name() const;
		int staffNumber() const;
		virtual float salary() const = 0;
		virtual ~Employee(); //destructor

private: int numberOfEmployees = 0;
		 const Name;
		 const staffNo;
};

Employee::Employee(string nam, int Staffnumber):
Name(name), staffNo(Staffnumber)
{
	++numberOfEmployees
}

string Employee::name()
{
	return Name;
}

int Employee::staffNumber()
{
	return staffNo;
}

/******************************************/
/*SalaryEmployee has a FIXED monthly salary
i. setSalary() where salary is a floating point number
*/
class SalaryEmployee:public Employee
{
public: SalaryEmployee(string, int, float);
		void setSalary(float);
		float salary();
		~SalaryEmployee();

private: float salry;
}

SalaryEmployee::SalaryEmployee(string nam, int Staffnumber, float salary) :
Employee(nam, Staffnumber)
{
	setSalary(salary);
}

void SalaryEmployee::setSalary(float salary)
{
	if (salary >= 0)
		salry = salary;
	else cout << "invalid" << endl;
}
 
float SalaryEmployee::salary()
{
	return salry; 
}

SalaryEmployee::~SalaryEmployee()
{}

/***********************************************/
class HourlyEmployee:public Employee
{
public: HourlyEmployee(string, int, float, int);
		void setHourlyRate(float);
		void setHoursWorked(int);
		~HourlyEmployee();

private: float Hourlyrate;
		 int Hoursworked;
};

HourlyEmployee::HourlyEmployee(string nam, int Staffnumber, float hrRate, int HrWork) :
Employee(nam, Staffnumber)
{
	setHourlyRate(hrlyRate);
	setHoursWorked(hrsWorked);
}

void HourlyEmployee::setHourlyRate(float hrlyRate)
{
	if (hrlyRate >= 0)
		Hourlyrate = hrlyRate;
	else cout << "Invalid" << endl;
}

float HourlyEmployee::salary()
{
	return Hourlyrate*Hoursworked;
}

void HourlyEmployee::setHoursWorked(int hrsWorked)
{
	if (hrsWorked >= 0 && hrsWorked <= 24)
		Hoursworked = hrsWorked;
	else cout << "Invalid" << endl;
}

HourlyEmployee::~HourlyEmployee()
{}

/************************/
int main()
{
	Employee *people[3]

		people[0] = new HourlyEmployee("Andy", 02, 50000);
	cout << "Name:" << people[0]->name();
	cout<<"Staff Number: " << people[0]->staffNumber();
	cout << "Earnings: " << people[0]->salary();
	cout << "Number of employees: " << Staff[0]->NoOfEmployee();

	people[1] = new SalaryEmployee("Ru", 29, , 100000);
	cout << people[1]->name();
	cout << people[1]->staffNumber();
	cout << people[1]->salary();
	cout << people[1]->noOfEmployee();

	return 0;

}