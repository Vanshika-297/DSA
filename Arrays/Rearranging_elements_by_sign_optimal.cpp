//when pos==neg
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> rearrange(vector<int> &nums)
    {
        vector<int> ans(nums.size());
        int posIndex=0,negIndex=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
            else{
                ans[posIndex]=nums[i];
                posIndex+=2;

            }
        }
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i=0;i<n;i++)
        cin>>nums[i];   
        Solution obj;
    vector<int> ans=obj.rearrange(nums);
    for (int i=0;i<n;i++)   
        cout<<ans[i]<<" ";
    return 0;
}