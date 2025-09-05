// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
// Attributes
protected:
    string name;
    int id;
    string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor
    Employee();
    Employee(const std::string& name, int id, const std::string& type, 
                   double payPerHour, double workedHours, double yearlyPayment);

    virtual ~Employee() {}

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // TODO: Getters
    string getType() const;

    string getName() const;
};

#endif

