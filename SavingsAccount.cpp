#include "BankAccount.h"
#include "SavingsAccount.h"
using namespace std;


SavingsAccount::SavingsAccount():BankAccount(){
    this->interest_rate = 0;
}
SavingsAccount::SavingsAccount(int account_number, float balance,float interest)
    :BankAccount(account_number,balance){
        this->interest_rate = interest;
    }

float SavingsAccount::calculate_interest(){
    cout<<endl<<"savings account :DDD"<<endl<<endl;
    return 0;
}
void SavingsAccount::displayAccountInfo() const {
    cout<<endl<<"~~SavingsAccount~~"<<endl<<endl;
    BankAccount::displayAccountInfo();
    cout<<endl<<"Interest is: "<<this->interest_rate;
    cout<<endl<<endl<<"//////////////////"<<endl;
}