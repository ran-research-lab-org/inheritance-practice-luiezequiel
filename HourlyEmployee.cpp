#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours)
{
    // TODO: 
    name = name;          // guardo el nombre
    id = id;            // guardo el id
    payPerHour = payPerHour;    // guardo el pago por hora
    workedHours = workedHours;
}
/*TODO: calculate Payment */

HourlyEmployee::getPayPerHour() const{return payPerHour;}
HourlyEmployee::getPayPerHour() const {return workedHours;}

HourlyEmployee::calculatePay(){
    return getPayPerHour() * getWorkedHours();
}



