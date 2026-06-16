#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int> frequency(256,0);
    for(char ch:str){
        frequency[ch]++;
    }
    vector<bool> print(256,false);
    for(char ch:str){
        if(!print[ch]){
            cout<<frequency[ch];
            print[ch]=true;
        }
    }
    return 0;
}