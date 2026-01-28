#include <iostream>
using namespace std;

int main() {
    int n,a;
    int count=0;
    cin>>n;

    while(n>0){
        cin>>a;
        if((a != 0 && 18 % a == 0) || (a%45==0)){
            count++;
        }
        n--;
    }
    cout<<count<<endl;
}

