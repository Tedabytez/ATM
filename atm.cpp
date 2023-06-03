#include <iostream>
#include <limits>

using namespace std;
void funds();

struct Atm
{
    Atm(int account_balance)
    {
        if (!set_balance(account_balance))
        {
            set_balance(7500);
        }
    }

    void set_pin(int& pin)
    {
        myPin = pin;
    }

    int get_pin()
    {
        return myPin;
    }

    void dispense(int& amount)
    {
        // if (amount > balance)
        // {
        //     cout << "lol... Viviiiiiid Imaginatiooooon!!!";
        // }
        if (amount != balance && amount != 0)
        {
            balance = balance - amount;
        }
    }

    double set_balance(int fund)
    {
        balance = fund;
        return balance;
    }

    int get_balance()
    {
        return balance;
    }

    void set_name(string& first_name)
    {
        name = first_name;
    }

    string get_name()
    {
        return name;
    }

private:
    int myPin;

private:
    string name;
    int savings;

private:
    double balance;

private:
    double current_balance;

private:
    int dispense_cash;
};

int main()
{

    funds();
    return 0;
}

void funds()
{
    int pin;
    int savings;
    double init;
    double amount;
    double transfer;
    string name;
    string input;

    Atm atm{init};

    cout << "Enter your pin---> ";
    cin >> pin;
    atm.set_pin(pin);

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid Pin... Please try again"
             << "\n";
        cout << "_________________________________"
             << "\n";
        cout << "Enter your pin---> ";
        cin >> pin;
        cout << "\n";
    }

    // Looping until user terminates to maintain state of data...
    while (true)
    {

        if (atm.get_pin() > 0)
        {
            cout << " 1. Account Balance "
                 << endl;
            cout << " 2. Cash Withdrawal "
                 << endl;
            cout << " 3. Transfer "
                 << endl;
            cout << " 4. Exit " << endl;
            cout << "Select an option ---> ";
        }
        else
        {
            cout << "Na sapa do you like this?...";
            break;
        }

        cin >> savings;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the correct option."
                 << "\n\n";
            cout << " 1. Account Balance "
                 << endl;
            cout << " 2. Cash Withdrawal "
                 << endl;
            cout << " 3. Transfer "
                 << endl;
            cout << "4. Exit " << endl;
            cout << "Select an option ---> ";
            cin >> savings;
        }

        if (savings == 1)
        {
            // cout << "Enter your first name---> ";
            // cin >> name;

            cout << "Your account balance is : " << '$' << atm.get_balance() << endl;
            cout << "_______________________________________________________"
                 << "\n\n";
        }

        else if (savings == 2)
        {
            cout << "Enter amount ---> ";
            cin >> amount;
            cout << "Osheyyy! Rich kid!!!... Withdrawal successful, please collect your cash. " << endl;
            atm.set_balance(atm.get_balance() - amount);
            cout << "Currrent balance is now ----> $" << atm.get_balance() << endl;
            cout << "_______________________________________________________"
                 << "\n\n";
        }

        else if (savings == 3)
        {
            cout << "Enter amount to transfer ---> ";
            cin >> transfer;
            atm.set_balance(atm.get_balance() - transfer);
            cout << "Transaction Successful..." << endl;
            cout << "Current balance is now ----> $" << atm.get_balance() << "\n\n";
            cout << "_______________________________________________________"
                 << "\n\n";
        }

        else if (savings == 4)
        {
            cout << "Have a good day :)" << endl;
            cout << "_______________________________________________________"
                 << "\n\n";
            break;
        }

        else
        {
            cout << "Please enter the correct option."
                 << "\n\n";
        }
    }
}