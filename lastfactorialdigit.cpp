#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int N, fact = 1;
 cin>>N;
 int T[N], rem;
 for(int i = 0; i < N; i++){
     cin>>T[i];
 }
 for(int j = 0; j < N; j++){
   for(int k = 1; k <= T[j]; k++){
     fact = fact * k;
   }
   rem = fact % 10;
   cout<<rem<<"\n";
   fact = 1;
 }
 return 0;
}