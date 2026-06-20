#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int profit(vector<int>&arr){
        int mini=arr[0];
        int n=arr.size();
        int profit=0;
        int cost=0;
        for(int i=1;i<n;i++){
            cost=arr[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,arr[i]);
        }
        return profit;
    }
};
int main(){
    int n;
    cout<<"Enter size of array \n";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution o;
    cout<<o.profit(arr);
}