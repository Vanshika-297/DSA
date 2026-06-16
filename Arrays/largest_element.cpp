#include<iostream>
#include<vector>
using namespace std;
 
class Solution
{
    public:

    void largest(vector<int>&arr,long long n){
   int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;
}
};

int main(){
long long n;
cout<<"enter size of array \n";
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
Solution o;
o.largest(arr,n);
return 0;
}