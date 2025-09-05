#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type, 
                   double payPerHour, double workedHours, double yearlyPayment)
{
  // TODO: 
  name = name;
  id = id;
  type = type;
  payPerHour = payPerHour;
  yearlyPayment = yearlyPayment;
}

/* IMPLEMENT GETTERS*/
Employee::getType()const{return type;}

Employee::getName(){return name;}