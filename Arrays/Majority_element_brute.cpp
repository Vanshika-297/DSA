#include<iostream>
#include<vector>
using namespace std;
 
class Solution{
    public:
    int majority(vector<int>&arr,long long n){
     for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>n/2) return arr[i];
     }
    return -1;

    }
};
int main(){
    long long n;
    cout<<"enter no of elements";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution o;
    cout<<o.majority(arr,n);
}