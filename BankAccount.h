//
// Created by cristi on 27.05.2023.
//

#ifndef BANK_BANKACCOUNT_H
#define BANK_BANKACCOUNT_H


#include <limits>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <string>

class BankAccount {
private:
    int account_number;
    float balance;
    static const float MAX_BALANCE;
    bool isAccountNumberUnique(int) const;
public:
    BankAccount();
    BankAccount(int,float);
    virtual void displayAccountInfo() const;
    void deposit(float);
    bool withdraw(float);
};
#endif //BANK_BANKACCOUNT_H
