#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string name;
  cin>>name;
  for(int i = 0; i < name.length(); i++){
    if(isupper(name[i])){
      cout<<name[i];
    }
  }
  return 0;
}