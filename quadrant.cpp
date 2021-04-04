#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x>>y;
    if(x == 0){
       cout<<"y-axies"; 
    }
    else if(y == 0){
        cout<<"x-axies";
    }
    else if(x > 0 && y > 0){
        cout<<1;
    }
    else if(x < 0 && y < 0){
        cout<<3;
    }
    else if(x > 0 && y < 0){
        cout<<4;
    }
    else if(x < 0 && y > 0){
        cout<<2;
    }
    else{
        cout<<"lies at origin";
    }
    return 0;
}