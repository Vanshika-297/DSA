//Kandane's algorithm
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long maxSubarraySum(int arr[],int n){
    int maxi=INT_MIN;
    long long sum=0;
    int start;
    int ansStart=-1;
    int ansEnd=-1;
    for(int i=0;i<n;i++){
        if(sum==0){start=i;}
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start;
            ansEnd=i;//used to print subarray
        }
        if(sum<0){sum=0;}
    }
    return maxi;
    }
};
int main(){
    int n;
    cout<<"Enter the no of elements in array \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution o;
    cout<<o.maxSubarraySum(arr,n);
}