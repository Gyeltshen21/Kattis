#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string N;
  int D;
  cin>>N>>D;
  if((N == "OCT" && D == 31) || (N == "DEC" && D == 25)){
    cout<<"yup";
  }
  else{
    cout<<"nope";
  }
 return 0;
}