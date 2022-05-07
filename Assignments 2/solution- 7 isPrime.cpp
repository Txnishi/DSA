#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    for(int i=2; i< a; i++){
        if(a%i==0){
            return false;
        }
    }
    return 1;
}
int main() {
    for(int i=1;i<30;i++){
         if (isPrime(i)){
            cout<<"the number "<<i<<" is prime\n";
         }
         else{
            cout<<"the number "<<i<<" is not prime\n";
         }   
    }
}
