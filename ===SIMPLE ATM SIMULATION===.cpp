#include <iostream>
#include <string>
using namespace std;

const int MAX_LOGS = 120;
double accBalance = 3200.75;
string logList[MAX_LOGS];
int logCount = 0;

void addLog(string entry)
{
    if (logCount < MAX_LOGS)
    {
        logList[logCount] = entry;
        logCount++;
    }
}

void showBalance()
{
    cout << "\nYour Balance: $" << accBalance << endl;
}

void deposit()
{
    double amount;
    cout << "\nEnter deposit amount: $";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount." << endl;
        return;
    }

    accBalance += amount;
    addLog("Deposited $" + to_string(amount));
    cout << "Deposit successful." << endl;
}

void withdraw()
{
    double amount;
    cout << "\nEnter withdraw amount: $";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid amount." << endl;
        return;
    }

    if (amount > accBalance)
    {
        cout << "Not enough balance." << endl;
        return;
    }

    accBalance -= amount;
    addLog("Withdrawn $" + to_string(amount));
    cout << "Withdrawal successful." << endl;
}

void showLogs()
{
    cout << "\n--- Transaction Logs ---" << endl;
    if (logCount == 0)
    {
        cout << "No transactions yet." << endl;
        return;
    }

    for (int i = 0; i < logCount; i++)
    {
        cout << i + 1 << ". " << logList[i] << endl;
    }
}

int main()
{
    int correctPin = 8941;
    int userPin;
    int tries = 0;
    bool loggedIn = false;

    while (tries < 3)
    {
        cout << "Enter PIN: ";
        cin >> userPin;

        if (userPin == correctPin)
        {
            loggedIn = true;
            break;
        }

        tries++;
        cout <<"\033[31m";
        cout << "Wrong PIN. Attempts left: " << 3 - tries << endl;
        cout <<"\033[0m";
    }

    if (!loggedIn)
    {
        cout << "\nAccount locked." << endl;
        return 0;
    }

    int option;
    do
    {
        cout << "\n=== ATM Menu ===" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. View Logs" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose: ";
        cin >> option;

        if (option == 1)
            showBalance();
        else if (option == 2)
            deposit();
        else if (option == 3)
            withdraw();
        else if (option == 4)
            showLogs();
        else if (option == 0)
            cout << "\nThanks for using the ATM." << endl;
        else
            cout << "\nInvalid option." << endl;

    } while (option!= 0);

    return 0;
}