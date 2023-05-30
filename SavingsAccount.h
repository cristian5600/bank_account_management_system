//
// Created by cristi on 30.05.2023.
//

#ifndef BANK_SAVINGSACCOUNT_H
#define BANK_SAVINGSACCOUNT_H



#include "BankAccount.h"


#include <limits>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <string>

class SavingsAccount : public BankAccount {
private:
    float interest_rate;
public:
    SavingsAccount();
    SavingsAccount(int,float,float);
    float calculate_interest();
    void displayAccountInfo() const;
};


#endif //BANK_SAVINGSACCOUNT_H
