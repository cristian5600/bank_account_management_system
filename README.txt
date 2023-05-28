1. Class Hierarchy:
   - `BankAccount` (base class):
     - Attributes: account number, balance
     - Methods: deposit, withdraw, displayAccountInfo

   - Derived Classes:
     - `SavingsAccount` (inherits from `BankAccount`):
       - Additional Attribute: interest rate
       - Method: calculateInterest

     - `CheckingAccount` (inherits from `BankAccount`):
       - Additional Attribute: overdraft limit
       - Method: withdraw (overridden to handle overdraft)

2. Inheritance:
   - The `BankAccount` class serves as the base class and provides common attributes and methods for all types of bank accounts.
   - The derived classes (`SavingsAccount` and `CheckingAccount`) inherit these common attributes and methods while adding specific attributes and behaviors.

3. Polymorphism:
   - Utilize polymorphism to allow common operations to be performed on objects of different account types.
   - In the example above, the `withdraw()` method is overridden in the `CheckingAccount` class to handle overdraft scenarios differently than the base class implementation.

4. Encapsulation:
   - Encapsulate the data and operations within each class by providing appropriate access modifiers (public, private, protected).
   - Keep the data members private and provide public member functions (getters, setters) to access and modify the account information.

5. Functionality:
   - Implement functions/methods for the following operations:
     - Creating new accounts: Create objects of the derived classes (`SavingsAccount`, `CheckingAccount`) by providing necessary information like account number, initial balance, interest rate, and overdraft limit.
     - Depositing money: Increase the account balance by the specified amount.
     - Withdrawing money: Decrease the account balance by the specified amount, considering overdraft limits for checking accounts.
     - Displaying account information: Print details like account number, balance, interest rate (for savings accounts), and overdraft limit (for checking accounts).
