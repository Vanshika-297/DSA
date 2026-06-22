//Moore's voting Algo
#include <bits/stdc++.h>
using namespace std;
 class Solution{
    public:
    int majority(vector<int>&arr,int n){//finding majority element 
        int cnt=0;
        int el;
        for(int i=0;i<n;i++){
            if(cnt==0){cnt=1;}
            else if(arr[i]==el){cnt++;}
            else {cnt--;}
        }
        int cnt1=0;
        for(int i=0;i<n;i++){//verifying majority element
            if(el==arr[i]){
                cnt1++;
            }
            if(cnt1>n/2){
                return arr[i];
            }
        }
        return -1;
    }
 };

 int main(){
    int n;
    cout<<"enter no of elements in array";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution o;
    cout<<o.majority(arr,n);
 }
