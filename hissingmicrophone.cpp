#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string N;
  int count = 1;
  cin>>N;
  for(int i = 0; i < N.size(); i++){
    if((N[i] == 's' || N[i] == 'S') && (N[i + 1] == 's' || N[i + 1] == 'S')){
      count++;
    }
    if(count == 2){
      break;
    }
  }
  if(count == 2){
    cout<<"hiss";
  }
  else{
    cout<<"no hiss";
  }
 return 0;
}