#include<bits/stdc++.h>
using namespace std;

 class Solution{
    public:
    vector<vector<int>> setZero(){
        vector<vector<int>> mat={
            {1,1,1,1},
            {1,0,1,1},
            {1,1,0,1},
            {1,0,0,1}
        };
        int n=mat.size();
        int m=mat[0].size();
        int row[n]={0};
        int col[m]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }    
         }
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] || col[j]){
                    mat[i][j]=0;
                }
            }
         }
         for(auto row:mat){
            for(auto val:row){
                cout<<val<<" ";
            }
            cout<<"\n";
         }
         return mat;
    }
 };
int main(){
    Solution o;
    o.setZero();
}
 