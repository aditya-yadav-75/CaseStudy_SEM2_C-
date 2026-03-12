#include <iostream>
using namespace std;

int main()
{
    float totalExpense, share;
    int participants, choice, currency;
    string currencyName;

    cout << "Online Expense Splitter" << endl;
    cout << "1. Split Expense" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter total expense amount: ";
        cin >> totalExpense;
        cout << "Select Currency Type" << endl;
        cout << "1. INR (Indian Rupee)" << endl;
        cout << "2. USD (US Dollar)" << endl;
        cout << "3. EUR (Euro)" << endl;
        cout << "4. GBP (British Pound)" << endl;
        cout << "5. JPY (Japanese Yen)" << endl;
        cout << "6. AUD (Australian Dollar)" << endl;
        cout << "7. CAD (Canadian Dollar)" << endl;
        cout << "Enter currency choice: ";
        cin >> currency;

        switch (currency)
        {
        case 1:
            currencyName = "INR";
            break;
        case 2:
            currencyName = "USD";
            break;
        case 3:
            currencyName = "EUR";
            break;
        case 4:
            currencyName = "GBP";
            break;
        case 5:
            currencyName = "JPY";
            break;
        case 6:
            currencyName = "AUD";
            break;
        case 7:
            currencyName = "CAD";
            break;
        default:
            currencyName = "INR";
        }

        cout << "Enter number of payers: ";
        cin >> participants;

        if (participants <= 0)
        {
            cout << "Number of participants must be greater than 0." << endl;
        }
        else
        {
            share = totalExpense / participants;
            cout << "\nEach Person Pays: " << share << " " << currencyName << endl;
        }
    }

    else if (choice == 2)
    {
        cout << "Exiting program..." << endl;
    }

    else
    {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}