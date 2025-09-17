#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
: {
    // TODO: 
    :Employee(name, id, "Salried"){
        this->yearlyPayment = yearlyPayment;
    }
}
/*TODO: calculate Payment */
double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 12.0;
}


/* IMPLEMENT GETTERS*/