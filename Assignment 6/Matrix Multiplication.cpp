#include <bits/stdc++.h>
using namespace std;


vector<vector<int>>matrixMultiplication(vector<vector<int>>A, vector<vector<int>>B){
    int mul = 0;
    vector<vector<int>>M;
    for(int i= 0; i< A.size(); i++){
        vector<int>hehe;
        for(int j = 0; j<B.size(); j++){
            for(int k=0; k<B.size(); k++){
                mul += (A[i][k] * B[k][j]);
            }
            hehe.push_back(mul);
            mul=0;
        }
        M.push_back(hehe);
    }
    
    
    return M;

}


int main(){
    
    int r, c, k;
    int mul=0;
    vector<vector<int>>X;
    vector<vector<int>>Y;

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
         X.push_back(temp1);
    }
            
    for(int i= 0; i<r; i++){
        vector<int>temp2;
        for(int j = 0; j<c; j++){
            int val=0;
            cin>>val;
            temp2.push_back(val);
        }
        Y.push_back(temp2);
    }
    
    vector<vector<int>>D = matrixMultiplication(X, Y);
    
     for(int i=0; i<X.size(); i++){
        for(int  j=0; j<Y.size(); j++){
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
