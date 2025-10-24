// this is my first file;
#include<bits/stdc++.h>
using namespace std;

class banking{
    int balance;
    string accountNumber;
    public:
        banking(int balance,string accountNumber){
            this->balance=balance;
            this->accountNumber=accountNumber;
            cout<<"account exists "<<endl;
            cout<<"Balance is ->"<< this->balance;
            cout<<" Account Number is ->"<< this->accountNumber;
        }
};

int main(){
    int balance,accountBalance;
    cout<<"Please Enter opening balance"<<endl;
    cin>>balance>>accountBalance;
    banking *nikhil=new banking(500,"001");
    return 0;
}