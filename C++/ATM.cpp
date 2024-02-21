#include <iostream>
#include<ctime>
#include <string>
using namespace std;
class Account
{
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
	
    // Constructor
    Account(std::string accNumber, std::string accHolder, double initialBalance) 
        : accountNumber(accNumber), accountHolderName(accHolder), balance(initialBalance) {}

    // Member function to display account information
    void displayAccountInfo() 
	{
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Account Holder: " << accountHolderName <<endl;
        cout << "Balance: $" << balance <<endl;
    }

    // Member function to deposit money
    void deposit(double amount) 
	{
        if (amount > 0) 
		{
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else 
		{
            cout << "Invalid amount for deposit." << std::endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) 
	{
        if (amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else 
		{
            cout << "Invalid amount for withdrawal or insufficient funds." << std::endl;
        }
    }
};

class ATM 
{
public:
    // Member function to simulate ATM operations
    static void executeATM(Account& account) 
	{
        int choice;
        double amount;

        do {
            // Display menu
        	cout << "\nATM Menu:" << endl;
            cout << "1. Display Account Information\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            // Perform operations based on user choice
            switch (choice) 
			{
                case 1:
                    account.displayAccountInfo();
                    break;
                case 2:
                    cout << "Enter the amount to deposit: $";
                    cin >> amount;
                    account.deposit(amount);
                    break;
                case 3:
                    cout << "Enter the amount to withdraw: $";
                    cin >> amount;
                    account.withdraw(amount);
                    break;
                case 4:
                    cout << "Exiting ATM. Thank you!\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } while (choice != 4);
    }
};

int main() 
{
	cout<<"-----WELCOME TO ATM-----\n";
	
	time_t now = time(0);
	
	char* dt= ctime(&now);
	
	cout<<"The Local date and time is:"<<dt<<endl;
    // Create an account
    Account userAccount("123456", "Manoj Kumar", 100000.0);

    // Simulate ATM operations
    ATM::executeATM(userAccount);
    
	
	return 0;
}