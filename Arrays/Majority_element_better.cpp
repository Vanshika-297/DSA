#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    int majority(vector<int>&arr,long long n){
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second>n/2){
                return it.first;
            }
        }
       return -1;
    }
};

int main(){
    int n;
    cout<<"Enter the size of Array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution o;
    cout<<o.majority(arr,n);
}
