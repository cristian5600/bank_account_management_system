#include "BankAccount.h"

#include "SavingsAccount.h"

using namespace std;
int main() {
    
    SavingsAccount cont(3141,3241,99);
    cont.displayAccountInfo();
    cont.deposit(8999);
    cont.displayAccountInfo();
    cout<<cont.withdraw(999);
    cont.displayAccountInfo();
    
    return 0;
}
