#include <iostream>
using namespace std;
int funds();

struct Atm
{
    Atm()
    {
        balance = 75000;
    }

    void set_pin(int pin)
    {
        if (pin >= 0000)
        {
            myPin = pin;
        }
    }

    void dispense(int amount)
    {
        if (amount != balance && amount != 0)
        {
            balance = balance - amount;
        }
    }

    void set_balance(int fund)
    {
        balance = fund;
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
    Atm atm;
    atm.set_name("Teda");
    atm.dispense(20000);
    cout << atm.get_balance() << endl;
    // cout << "Welcome. Enter your 4 digit pin: ";
    return 0;
}

// int funds()
// {
//     if (Atm.myPin >=0000 ){

//     cin >> .myPin;

//     cout << " 1. Account Balance " <<"\n";
//     cout << " 2. Cash Withdrawal " << "\n";
//     cout << " 3. Transfer " <<"\n\n";
//     cout << "Select an option ---> ";
//     // cin >> savings ;
//     }
//     else {
//         cout<< "incorrect" ;
//     }

//      if( savings ==1){
//         cout << "Enter your lastname--->" ;
//         cin >> name ;
//         current_balance = initial_balance;
//         cout << " Your account balance is : " << '$'<< current_balance <<"\n";
//      }

//      else if ( savings ==2){
//         cout << "Enter amount ---> ";
//         cin >> dispense ;
//         cout << " Withdrawal successful, please collect your cash. "<< "\n" ;
//         current_balance = initial_balance - dispense;
//         initial_balance = current_balance;
//         cout << "Currrent balance is now ----> $" << current_balance << "\n";

//     }

//     else if ( savings ==3){
//         cout << " Enter amount ";
//         cin >> trans ;
//         cout << " Transaction Successful.";

//     }

//     else {
//             cout << " Please enter the correct option. ";

//         }
// }