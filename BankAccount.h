//
// Created by cristi on 27.05.2023.
//
const float MAX_BALANCE = 10000000000;

#include <limits>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include <string>

#ifndef BANK_BANKACCOUNT_H
#define BANK_BANKACCOUNT_H
/*`BankAccount` (base class):
     - Attributes: account number, balance
     - Methods: deposit, withdraw, displayAccountInfo
     */
// TODO: should have file to store all account numbers and balances
// also,

class BankAccount {
private:
    int account_number;
    float balance;
    //bool isAccountNumberUnique(int);
    bool isAccountNumberUnique(int) const;
public:
    BankAccount();
    BankAccount(int,float);
    void displayAccountInfo() const;
    void deposit(float);
    bool withdraw(float);

};


#endif //BANK_BANKACCOUNT_H
