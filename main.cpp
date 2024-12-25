#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
int balance;
public:
//creating constructor
ATM(int bal){
    balance=bal;
}
//creating view balance method
int getbalance(){
    return balance;
}
//creating cash withdraw method
int withdraw(int amount){
    if(amount>balance){
        return false;
    }
    balance-=amount;
    return true;
}
//creating cash deposit method
void deposit(int amount){
    balance+=amount;

}
};
int main(){
    ATM atm(1000);
    int choice,amount,success;
    char op;
    do{
        
        cout<<"1.view balance"<<endl;
        cout<<"2.cash withdraw"<<endl;
        cout<<"3.cash deposit"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"enter your choice";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"your balance"<<atm.getbalance();
                break;
            case 2:
                cout<<"your availavle balance"<<atm.getbalance()<<endl;
                cout<<"enter the amount to withdraw";
                cin>>amount;
                success=atm.withdraw(amount);
                if(success){
                    cout<<"withdraw successfull..."<<endl;
                }
            else{
                cout<<"invalid balance...."<<endl;
            }
            break;
            case 3:
            cout<<"enter the amount deposit";
            cin>>amount;
            atm.deposit(amount);
            cout<<"deposit successfull"<<endl;
            break;
            case 4:
            cout<<"thanks for using ATM"<<endl;
            break;
            default:
            cout<<"invalid choice"<<endl;
        }
        cout<<"\nDo you want to try another trasaction[yes/no]";
        cin>>op;
    }while(op=='y' ||op=='y');
}




    
            