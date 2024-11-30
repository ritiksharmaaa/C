#include <iostream>
#include <string>



using namespace std ; 



class BankAccount{
    private : 
        string accountNumber ;
        double balance ;
    public :
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum ;
            balance = initialBalance ;
        };

        // get balance 
        double getBalance() const {
            // here const is very similar to typr script wher we have to explicitly tell about which type of data type it return we put const so no one can modfied it 

            return balance ; 

        };

        // deposit money
        void deposit(double amount){
            // checking amount  is not to be zero 
            if(amount != 0 ){
                balance += amount ;
                cout << "Deposit successful. New balance is: " << balance << endl ;
                
            }else{
                cout << "Invalid deposit amount" << endl ;
                return ;
            };
        };

        //withdraw money 

        void withdraw(double amount){
            if (amount > 0 && amount <= balance){
                balance -= amount ;
                cout << "Withdrawal successful. New balance is: " << balance << endl ;
            };
        }
};

int main(){
    BankAccount rameshAccount("4562345235" , 300000.456);
    rameshAccount.getBalance();
    rameshAccount.deposit(5000.0);  
    rameshAccount.withdraw(20000.0);

    return 0 ;
}