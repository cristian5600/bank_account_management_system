#include <iostream>
#include "BankAccount.h"
using namespace std;
int main() {
    int val = 0;
    BankAccount b(1233,234);
    b.displayAccountInfo();
    b.deposit(999999992399);
    
    b.displayAccountInfo();
    //test.isAccountNumberUnique(3);
    return 0;
}
