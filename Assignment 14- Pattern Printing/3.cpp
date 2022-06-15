#include <iostream>
using namespace std;

int main() {
	// your code goes here

int num, len, temp;
cin>>num;
temp = num;
while(temp!= 0){
	temp= temp/10;
	len++;
}

while(num!= 0){
int a = num%10;
for(int i=0; i<a; i++){
	cout<<"#";
}
cout<<endl;
num = num/10;
}
	return 0;
}

