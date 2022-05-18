#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int r, c, k;
    int mul=0;
    vector<vector<int>>A;
    vector<vector<int>>B;
    vector<vector<int>>M;
    cout<<"enter number of rows: "<<endl;
    cout<<"enter number of columns: "<<endl;
    cin>>r>>c;

    for(int i= 0; i<r; i++){
        vector<int>temp1;
        for(int j = 0; j<c; j++){
            int val=0;
            cin>>val;
            temp1.push_back(val);
        }
         A.push_back(temp1);
    }
            
    for(int i= 0; i<r; i++){
        vector<int>temp2;
        for(int j = 0; j<c; j++){
            int val=0;
            cin>>val;
            temp2.push_back(val);
        }
        B.push_back(temp2);
    }
    
 
    for(int i= 0; i<r; i++){
        vector<int>hehe;
        for(int j = 0; j<c; j++){
            for(int k=0; k<c; k++){
                mul += (A[i][k] * B[k][j]);
            }
            hehe.push_back(mul);
            mul=0;
        }
        M.push_back(hehe);
    }
    
    for(int i=0; i<r; i++){
        for(int  j=0; j<c; j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
