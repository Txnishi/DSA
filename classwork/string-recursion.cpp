#include <bits/stdc++.h>
using namespace std;

void recursion(string X){
	cout<<X<<endl;
	
	if(X.size()==3){
		return;
	}

	for(char a='a'; a<='c'; a++){
		recursion(X + a);
	}
}


int main() {
	recursion("");
	return 0;
}
