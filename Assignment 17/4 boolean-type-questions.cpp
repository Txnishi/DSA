#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i = 0; i<A.size(); i++){
        if(A[i] == target){
            return true;
        }
    }
    return false;
}

bool isTargetPresentIn2DVector(vector<vector<int> >A, int target){
    //returns true if target is present in A
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j< A[i].size(); j++){
            if(A[i][j]== target){
                return true;
            }
        }
    }
    
    return false;
}
bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    for(int row = 0; row< A.size(); row++){
        for(int col = 0; col< A[row].size() ; col++){
            if(A[row][col] == target && row == r){
                cout<<row<<endl;
                return true;
            }
        }
        
    }
    
    return false;
}

bool isTragetPresentInCol(vector<vector<int> >A, int target, int c){
    //returns true if target is present in column c of A then returns true else return false;
    for(int row = 0; row< A.size(); row++){
        for(int col = 0; col< A[row].size() ; col++){
            if(A[row][col] == target && col == c){
                cout<<col<<endl;
                return true;
            }
        }
        
    } 
    
    return false;
}


int main() {
    vector<int>B = {1,2,3,5,6,7,8,9};
    isTargetPresent(B , 4);
    
    vector<vector<int>>C = {
        {1,2,3}, {4,5,6}, {7,8,9}
    };
    
    isTargetPresentIn2DVector(C , 5);
    isTragetPresentInRow(C , 5 , 1);
    isTragetPresentInCol(C , 5 , 1);
}
