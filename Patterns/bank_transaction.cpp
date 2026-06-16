#include<iostream>
using namespace std;
int main(){
    int no_of_transactions;
    int amount=0;
    long long int final_balance=0;
    long long int max_balance=0;
    cout<<"Enter the number of transactions: ";
    cin>>no_of_transactions;
    for(int i=1;i<=no_of_transactions;i++){
        cout<<"Enter the amount: ";
        cin>>amount;
        if(amount>0){
            final_balance+=amount;
        }
        else{
            final_balance+=amount;
        }
        if(final_balance>max_balance){
            max_balance=final_balance;
        }
    }
    cout<<"Final balance: "<<final_balance<<endl;
    cout<<"Maximum balance: "<<max_balance<<endl;
    return 0;
}