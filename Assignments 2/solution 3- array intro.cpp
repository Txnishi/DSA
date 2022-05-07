#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, i=0;
    cin>>n;
    int arr[n], j=n-1;
    for(int i=0; i< n; i++){
        cin>>arr[i];
    }
    while(i<j){
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        i++;
        j--;  
    }
    for(i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
     
    return 0;
}
