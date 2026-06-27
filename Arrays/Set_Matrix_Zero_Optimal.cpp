#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> setZero(){
        vector<vector<int>> mat={
            {1,1,1,1},
            {1,0,1,0},
            {1,1,1,0},
            {1,1,0,1}
        };
        int n=mat.size();
        int m=mat[0].size();
        int cnt1=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    if(j!=0){
                        mat[0][j]=0;
                    }
                    else{
                        cnt1=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][j]!=0){
                if(mat[i][0]==0 || mat[0][j]==0){
                    mat[i][j]=0;
                }
            }
            }
        }
        if(mat[0][0]==0){
        for(int j=0;j<m;j++){
            mat[0][j]=0;
        }
        if(cnt1==0){
            for(int i=0;i<n;i++){
                mat[i][0]=0;
            }
        }}
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