#include<iostream>
using namespace std;

int main(){
    string s; 
    cin >> s;

    if(s.size() != 10){
        cout << "Weak";
        return 0;
    }

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for(char c : s){
        if(c >= 'a' && c <= 'z') hasLower = true;
        else if(c >= 'A' && c <= 'Z') hasUpper = true;
        else if(c >= '0' && c <= '9') hasDigit = true;
        else hasSpecial = true;
    }

    if(hasLower && hasUpper && hasDigit && hasSpecial){
        cout << "Strong";
    } else {
        cout << "Weak";
    }

    return 0;
}