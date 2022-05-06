#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
  if(b==0) return a;
  return gcd(b, a%b);
}

int main{
  int a= 56, b = 98;
  cout<<gcd(a,b);
  return 0;
}

// other method


#include <bits/stdc++.h>
using namespace std;
int gcd2(int p, int q){
  if(q>p){
    swap(p,q);
  }
  int r= p%q;
  while(r!=0){
    p=q;
    q=r;
    r=p%q;
  }
  return q;
}
int  main{
  int p, q;
  cin>>p>>q;
  cout<<gcd2(p,q);
  return 0;
}


