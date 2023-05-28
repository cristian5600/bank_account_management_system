//
// Created by cristi on 27.05.2023.
//
#include "BankAccount.h"

using namespace  std;
bool BankAccount::isAccountNumberUnique(int id) const{
    ifstream file;
    int aux = 0;
    string str;
    file.open("info.txt");
    if(file.is_open()){
        while(getline(file,str)){
            aux = stoi(str);
            if(id == aux)
                return false;
        }
        file.close();
    }
    else{
        cout << "UNABLE TO OPEN FILE \n";
    }
    return true;
}

BankAccount::BankAccount() {
    this->balance = 0;

    int account_number = rand() % 9000 + 1000;
    while (this->isAccountNumberUnique(account_number) == false)
        account_number = rand() % 9000 + 1000;
    this->account_number = account_number;
    // TODO: must add the account to info.txt

}

BankAccount::BankAccount(int account_number, float balance) {
    try
    {
        if (balance < 0)
            throw std::invalid_argument("ERROR: NEGATIVE BALANCE");
        if (typeid(account_number).name() != string("i"))
            throw std::invalid_argument("ERROR: account_number MUST BE OF TYPE INT");
        if (account_number < 1000 || account_number > 9999)
            throw std::invalid_argument("ERROR: account_number MUST HAVE 4 DIGITS \n");
        if ( this->isAccountNumberUnique(account_number) == false)
            throw std::invalid_argument("ERROR: account_number IS IN USE");
        

        this->balance = balance;
        this->account_number = account_number;
    // TODO: must add the account to info.txt
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        cout<< "given input is: ("<<account_number<<" ,"<<balance<<")"<<'\n';
        throw;
    }
    
    
}
void BankAccount::displayAccountInfo() const{
    cout<<"//////////////////"<<endl<<endl;
    cout<<"Account Number is: "<<this->account_number<<endl;
    cout<<"Balance is: "<<this->balance<<endl<<endl;
    cout<<"//////////////////"<<endl;
}
void BankAccount::deposit(float money){
    try{
        if( balance + money > MAX_BALANCE){
            throw std::overflow_error("ERROR: Balance exceeds balance maximum \n");
        }
        this->balance += money;
        //return true;
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
        throw;
    }
   //return false;
}
bool BankAccount::withdraw(float money){
    if(this->balance >= money){
        this->balance -= money;
        return true;
    }
    else return false;
}