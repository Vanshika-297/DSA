#include<bits/stdc++.h>
using namespace std;
 class Solution{
    public:
    long long maxSubarraySum(int arr[],int n){
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                maxi=max(sum,maxi);
            }
        }
        return maxi;
    }
 };
 int main(){
    int n;
    cout<<"Enter size of array \n";
    cin>>n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Solution o;
cout<<o.maxSubarraySum(arr,n);
 }