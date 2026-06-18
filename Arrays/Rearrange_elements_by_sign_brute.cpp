#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> rearrange(vector<int> &nums)
    {
        vector<int> pos,neg;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            if (nums[i]>0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        for (int i=0;i<n/2;i++)
        {
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        return nums;
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