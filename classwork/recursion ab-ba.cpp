#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<bool>A(3);

void recursion(string X = " ",string str= "abc"){
	if(X.size() == str.size()){
		cout<<X<<endl;
		return;
	}	
	
	for(int i=0; i < str.size(); i++){
		if(A[i]==false){
			A[i]=1;
			recursion(X + str[i], str);
			A[i]=0;
		}
		
	}
	
}

int main() {
	
	string a;
	getline(cin,a);
	
	recursion("", a);
	return 0;
}
