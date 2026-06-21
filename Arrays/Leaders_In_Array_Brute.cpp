#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> Leader(vector<int> &arr,int n){
        vector<int> ans;
        for(int i=0;i<n;i++){
            bool leader=false;
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    leader=true;
                    break;
                }
            }
            if(leader==true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
};
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Solution obj;
    vector<int> ans=obj.Leader(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}