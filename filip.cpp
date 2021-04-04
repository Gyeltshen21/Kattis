#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int A, B, rem, rev1 = 0, rev2 = 0;
  cin>>A>>B;
  while(A != 0){
    rem = A % 10;
      A = A / 10;
      rev1 = (rev1 * 10) + rem;
    }
  while(B != 0){
    rem = B % 10;
    B = B / 10;
    rev2 = (rev2 * 10) + rem;
  }
  if(rev1 > rev2){
    cout<<rev1;
  }
  else{
    cout<<rev2;
  }
  return 0;
}