#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void setZero(vector<vector<int>>&mat){
        int n=mat.size();
        int m=mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                matRow(mat,i);
                matCol(mat,j);
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1){
                mat[i][j]=0;
            }
        }}
}
void matRow(vector<vector<int>>&mat,int i){
    int m=mat[0].size();
    for(int j=0;j<m;j++){
        if(mat[i][j]!=0){
            mat[i][j]=-1;
        }
    }
}
int matCol(vector<vector<int>>&mat,int j){
    int n=mat.size();
    for(int i=0;i<n;i++){
        if(mat[i][j]!=0){
            mat[i][j]=-1;
        }
    }
    return 0;
}};
int main(){
    vector<vector<int>> mat={
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1}
    };
    Solution o;
    o.setZero(mat);

    cout<<"matrix after set zeros:\n";
    for(auto row:mat){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<"\n";

    }
    return 0;
}
