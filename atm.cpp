#include <iostream>
#include <limits>

using namespace std;
void funds();

struct Atm
{
    Atm(double &account_balance, const string &initial_pin) : pin(initial_pin)
    {
        if (!set_balance(account_balance))
        {
            set_balance(7500);
        }
    }

    bool validate_pin(const string &valid_pin)
    {
        return pin == valid_pin;
    }

    void set_pin(const string &pin)
    {
        if (validate_pin(pin))
        {
            userPin = pin;
        }
    }

    bool is_valid_pin(const string &userPin)
    {
        return userPin.length() == 4 && userPin.find_first_not_of("0123456789") == string::npos;
    }

    string get_pin()
    {
        return userPin;
    }

    void dispense(int amount)
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

    void set_name(string first_name)
    {
        name = first_name;
    }

    string get_name()
    {
        return name;
    }

private:
    int savings;
    double balance;
    double current_balance;
    int dispense_cash;
    string pin;
    string userPin;
    string name;
};

int main()
{

    funds();
    return 0;
}

void funds()
{
    int savings;
    double init;
    double amount;
    double transfer;
    string name;
    string input;
    string pin;

    Atm atm{init, "1738"};

    cout << "Enter your pin---> ";
    cin >> pin;
    atm.set_pin(pin);

    while (true)
    {
        if (atm.is_valid_pin(pin) != true)
        {
            cout << "________________________________________________________________"
                 << "\n\n";
            cout << "Wrong PIN format...  Please try again using the format '0000'  " << endl;
            cout << "________________________________________________________________"
                 << "\n\n";
            cout << "Enter your PIN---> ";
            cin >> pin;
            atm.set_pin(pin);
        }
    
        else if ((atm.validate_pin(pin) && atm.is_valid_pin(pin)) == false)
        {
            cout << "_______________________________________________________"
                 << "\n\n";
            cout << "Invalid PIN... Please try again"
                 << "\n";
            cout << "_______________________________________________________"
                 << "\n\n";
            cout << "Enter your PIN---> ";
            cin >> pin;
            cout << "\n";
        }
        else{
            break;
        }
    }

    // while (cin.fail())
    // {
    //     cin.clear();
    //     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     cout << "Invalid Pin... Please try again"
    //          << "\n";
    //     cout << "_________________________________"
    //          << "\n";
    //     cout << "Enter your pin---> ";
    //     cin >> pin;
    //     cout << "\n";
    // }

    // Looping until user terminates to maintain state of data...
    while (true)
    {
        cout << " 1. Account Balance "
             << endl;
        cout << " 2. Cash Withdrawal "
             << endl;
        cout << " 3. Transfer "
             << endl;
        cout << " 4. Exit " << endl;
        cout << "_______________________________________________________"
             << "\n\n"; 
        cout << "Select an option ---> ";

        cin >> savings;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "_______________________________________________________"
                 << "\n\n";
            cout << "Please enter a valid option."
                 << "\n\n";
            cout << " 1. Account Balance "
                 << endl;
            cout << " 2. Cash Withdrawal "
                 << endl;
            cout << " 3. Transfer "
                 << endl;
            cout << " 4. Exit " << endl;
            cout << "\n\n";
            cout << "Select an option ---> ";
            cin >> savings;
            cout << "_______________________________________________________"
                 << "\n";
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

        // else
        // {
        //     // cout << "_______________________________________________________"
        //     //      << "\n\n";
        //     // cout << "Please enter a valid option."
        //     //      << "\n\n";
        // }
    }
}