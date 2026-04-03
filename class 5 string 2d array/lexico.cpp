#include<iostream>
using namespace std;

int main(){
    string s,t; 
    cin>>s>>t;


    if(s<t){
        cout<<"A";
    }
    else if(s==t){
        cout<<"Equal";
    }
    else if(s>t){
        cout<<"B";
    }

}