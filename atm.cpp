#include <iostream>
using namespace std; 
int savings; 
double initial_balance = 750000;
double current_balance;
int main (){
cout << "Welcome. Enter your 4 digit pin: ";
for(int i = 0; i < initial_balance; i++) {
 

struct {
    int myPin; 
}myStructure; 

if (myStructure.myPin >=0000 )


 {  
cin >> myStructure.myPin;

cout << " 1. Account Balance " <<"\n"; 
cout << " 2. Cash Withdrawal " << "\n";
cout << " 3. Transfer " <<"\n\n";
cout << "Select an option ---> ";
cin >> savings ;
}
else { 
    cout<< "incorrect" ;
}





int dispense; 
int trans;  
int name ; 




 
 


 if( savings ==1){
    cout << "Enter your lastname--->" ;
    cin >> name ; 
    current_balance = initial_balance;
    cout << " Your account balance is : " << '$'<< current_balance <<"\n";
    


 } else if ( savings ==2){
    cout << "Enter amount ---> "; 
    cin >> dispense ; 
    cout << " Withdrawal successful, please collect your cash. "<< "\n" ;
    current_balance = initial_balance - dispense;
    initial_balance = current_balance;
    cout << "Currrent balance is now ----> $" << current_balance << "\n"; 



} else if ( savings ==3){
    cout << " Enter amount ";
    cin >> trans ;
    cout << " Transaction Successful.";

        
}else {
        cout << " Please enter the correct option. "; 
        
    } 
    
}
return 0;
}