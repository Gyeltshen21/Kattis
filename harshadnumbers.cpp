#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  int sum = 0, rem, i = 1, temp;
  cin>>N;
  temp = N;
  while(N != 0){
    rem = N % 10;
    sum += rem;
    N = N / 10;
  }
  while(temp % sum != 0){
    N = temp + i;
    sum = 0;
    temp = N;
    while(N != 0){
      rem = N % 10;
      sum += rem;
      N = N / 10;
    }
  }
  cout<<temp;
 return 0;
}