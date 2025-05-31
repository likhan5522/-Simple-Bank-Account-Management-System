#include <iostream>
using namespace std;
class BankAccount
{
public:
    string accountHolder;
    int accNumber;
    double currentBalance;
    double fdrMaturityAmount;
    double dpsMonthlyDeposit;
    double FDR_RATE = 0.08;
    double DPS_RATE = 0.06;

    BankAccount()
    {
        accountHolder = "";
        accNumber = 0;
        currentBalance = 0;
        fdrMaturityAmount = 0;
        dpsMonthlyDeposit = 0;
    }
    void setDetails(string holderName, int number, double initialAmount)
    {
        accountHolder = holderName;
        accNumber = number;
        currentBalance = initialAmount;
    }
    void deposit(double amount)
    {
        currentBalance += amount;
        cout << accountHolder << " deposited $" << amount << ". New Balance: $" << currentBalance << endl;
    }
    void withdraw(double amount)
    {
        if (amount > currentBalance)
            {
            cout << accountHolder << " has insufficient balance!" << endl;
            }
        else
            {
            currentBalance -= amount;
            cout << accountHolder << " withdrew $" << amount << ". New Balance: $" << currentBalance << endl;
            }
    }
    void createFDR(double amount, int years)
    {
        if (amount > currentBalance)
            {
            cout << accountHolder << " has insufficient balance for FDR!" << endl;
            return;
            }
        currentBalance -= amount;
        fdrMaturityAmount = amount + (amount * FDR_RATE * years);
        cout << accountHolder << " created FDR for " << years << " years. Maturity Amount: $" << fdrMaturityAmount << endl;
    }
    void createDPS(double monthlyAmount, int years)
    {
        dpsMonthlyDeposit = monthlyAmount;
        double totalDeposit = monthlyAmount * 12 * years;
        double interest = totalDeposit * DPS_RATE;
        double maturity = totalDeposit + interest;
        cout << accountHolder << " created DPS for " << years << " years. Maturity Amount: $" << maturity << endl;
    }
    void showDetails()
    {
        cout << "Account Holder: " << accountHolder
             << " | Account No: " << accNumber
             << " | Balance: $" << currentBalance << endl;
    }
};
int main()
{
    BankAccount users[10];

    string defaultNames[10] =
    {
        "Abdul Malek", "Firoz Hossain", "Sahadat Ali", "Abdul Kader", "Eusuf Khan",
        "Salman Khan", "Rabeya Akter", "Ivory Khatun", "Polash Saha", "Indubati"
    };

    for (int i = 0; i < 10; i++)
        {
        users[i].setDetails(defaultNames[i], 1001 + i, 1000);
        }
    users[0].deposit(500);
    users[0].withdraw(200);
    users[0].createFDR(700, 2);
    users[0].createDPS(100, 3);
    cout << "\n--- All User Details ---\n";
    for (int i = 0; i < 10; i++)
    {
        users[i].showDetails();
    }
    return 0;
}
