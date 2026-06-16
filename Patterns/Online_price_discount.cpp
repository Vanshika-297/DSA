#include<iostream>
using namespace std;
int  main(){
    float price;
    float discount_percent;
    float discount_price;
    float final_price=0;
    cout<<"enter product price:\n";
    cin>>price;
    cout<<"enter discount percentage:\n";
    cin>>discount_percent;
    if((price>0) && (discount_percent>0)){
        discount_price=(discount_percent/100)*100;
        final_price=price-discount_price;
    }
    cout<<discount_price<<"\n";
    cout<<final_price<<"\n";
    return 0;
}