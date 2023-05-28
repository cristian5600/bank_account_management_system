//
// Created by cristi on 27.05.2023.
//
#include "BankAccount.h"

using namespace  std;
bool BankAccount::isAccountNumberUnique(int) {
    ifstream file;
    string str;
    file.open("info.txt");
    if(file.is_open()){
        while(file.good()){
            file>>str;
            cout<<str<<" ";
        }
    }
    file.close();
    return true;
}

BankAccount::BankAccount() {
    this->balance = 0;
    this->account_number = 0;
}

BankAccount::BankAccount(int a, float b) {
    this->balance = 0;
    this->account_number = 0;
}
void BankAccount::displayAccountInfo(){

}
bool BankAccount::deposit(float a){
    return true;
}
bool BankAccount::withdraw(float){
    cout<<2;
    return true;
}