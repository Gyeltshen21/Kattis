#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count = 0;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == 'e'){
      count++;
    }
  }
  cout<<(s[0]);
  for(int j = 0; j < count * 2; j++){
    cout<<'e';
  }
  cout<<s[s.length() - 1];
  return 0;
}