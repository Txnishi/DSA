#include <iostream>
using namespace std;

int main() {
	// your code goes here

int n;
cin>>n;
int sum =0;
for(int i =1; i<=n; i++){
	sum += i;
	for(int j=0; j< sum; j++){
		cout<<"#";
		}
	cout<<endl;
}


	return 0;
}
