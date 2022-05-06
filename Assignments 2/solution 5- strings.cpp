#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1, str2;
    cin>>str1;
    cin>>str2;
    int len1=str1.size(), len2=str2.size();
    cout<<len1<<" "<<len2<<endl;
    cout<<str1+str2<<endl;
    swap(str1[0], str2[0]);
    cout<<str1<<" "<<str2;  
    return 0;
}
