// this is my first file;
#include<bits/stdc++.h>
using namespace std;

class banking{
    double balance;
    string accountNumber;
    public:
        banking(double balance,string accountNumber){
            this->balance=balance;
            this->accountNumber=accountNumber;
        }
        void deposit(double deposit){
            if(deposit>0){
                balance+=deposit;
            }
        } 
        void withdraw(double deposit){
            if(deposit > 0 && deposit<=balance){
                balance-=deposit;
            }
        }

        double getBalance(){
            return balance;
        }
        string getAccountNumber(){
            return accountNumber;
        }
};

int main(){
    double balance;
    string accountNumber;
    cout<<"Please Enter opening balance"<<endl;
    cin>>balance>>accountNumber;
    banking* nikhil=new banking(balance,accountNumber);
    double new_balance=nikhil->getBalance();
    string new_account_number=nikhil->getAccountNumber();
    nikhil->deposit(50);
    cout<<nikhil->getBalance()<<"->" << new_account_number;
    return 0;
}