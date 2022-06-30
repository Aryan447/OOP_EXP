// Design a class to represent a bank account. which include account number name of the depositor, type of the account, balance amount in the account. Define Methods, to assign initial values, to Deposit an amount, to Withdraw amount after checking balance, to display name and balance
#include <iostream>
using namespace std;

class bank_account{
    private:
        int account_number;
        string name;
        string type;
        float balance;
    public:
        void assign_initial_values(int,string,string,float);
        void deposit_amount(float);
        void withdraw_amount(float);
        void display_name_and_balance();
};

void bank_account::assign_initial_values(int a,string n,string t,float b){
    account_number=a;
    name=n;
    type=t;
    balance=b;
}
void bank_account::deposit_amount(float d){
    balance=balance+d;
}
void bank_account::withdraw_amount(float w){
    if(balance>=w){
        balance=balance-w;
    }
    else{
        cout<<"Insufficient balance"<<endl;
    }
}
void bank_account::display_name_and_balance(){
    cout<<"Name: "<<name<<endl;
    cout<<"Account type: "<<type<<endl;
    cout<<"Account Number: "<<account_number<<endl;
    cout<<"Balance: "<<balance<<endl;
}
int main(){
    bank_account b;
    b.assign_initial_values(123,"Aryan","Savings",10000);
    b.deposit_amount(5000);
    b.withdraw_amount(2000);
    b.display_name_and_balance();
}