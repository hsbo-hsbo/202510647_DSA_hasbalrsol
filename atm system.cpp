#include <iostream>
#include <string>

using namespace std;

const int LIMIT = 100;

double currentBalance = 1000.0;

string records[LIMIT];
int totalRecords = 0;

void saveRecord(string text)
{
    if (totalRecords < LIMIT)
    {
        records[totalRecords] = text;
        totalRecords++;
    }
}

void showBalance()
{
    cout << "\nYour Balance is: $" << currentBalance << endl;
}

void deposit()
{
    double money;

    cout << "\nEnter amount: $";
    cin >> money;

    if (money > 0)
    {
        currentBalance = currentBalance + money;

        saveRecord("Deposit : $" + to_string(money));

        cout << "Money added successfully.\n";
    }
    else
    {
        cout << "Wrong amount.\n";
    }
}

void withdraw()
{
    double money;

    cout << "\nEnter amount: $";
    cin >> money;

    if (money <= 0)
    {
        cout << "Wrong amount.\n";
    }
    else if (money > currentBalance)
    {
        cout << "Balance not enough.\n";
    }
    else
    {
        currentBalance = currentBalance - money;

        saveRecord("Withdraw : $" + to_string(money));

        cout << "Please take your money.\n";
    }
}

void history()
{
    cout << "\n===== Operations =====\n";

    if (totalRecords == 0)
    {
        cout << "No records found.\n";
    }
    else
    {
        for (int i = 0; i < totalRecords; i++)
        {
            cout << i + 1 << "- " << records[i] << endl;
        }
    }
}

int main()
{
    int correctPin = 1234;
    int userPin;

    int tries = 0;
    bool login = false;

    while (tries < 3)
    {
        cout << "Enter PIN: ";
        cin >> userPin;

        if (userPin == correctPin)
        {
            login = true;
            break;
        }
        else
        {
            tries++;

            cout << "Incorrect PIN\n";
            cout << "Remaining tries: " << 3 - tries << endl;
        }
    }

    if (login == false)
    {
        cout << "\nCard blocked.\n";
        return 0;
    }

    int option;

    do
    {
        cout << "\n========== ATM ==========\n";
        cout << "1. Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. History\n";
        cout << "5. Exit\n";

        cout << "Choose: ";
        cin >> option;

        switch (option)
        {
        case 1:
            showBalance();
            break;

        case 2:
            deposit();
            break;

        case 3:
            withdraw();
            break;

        case 4:
            history();
            break;

        case 5:
            cout << "\nGoodbye.\n";
            break;

        default:
            cout << "\nInvalid option.\n";
        }

    } while (option != 5);

    return 0;
}