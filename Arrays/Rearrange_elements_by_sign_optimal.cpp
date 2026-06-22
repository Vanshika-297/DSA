//when pos== neg
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> rearrange(vector<int>&arr,int n){
        vector<int> ans(n);
        int posIndex=0;
        int negIndex=1;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                ans[negIndex]=arr[i];                         //T.C=O(n) and S.C=O(n)
                negIndex+=2;
            }
            else{
                ans[posIndex]=arr[i];
                posIndex+=2;
            }
        }
        return ans;
    }
};
int main(){
    int n;
    cout<<"Enter the number of elements in an array \n";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution o;
    vector <int> ans=o.rearrange(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}