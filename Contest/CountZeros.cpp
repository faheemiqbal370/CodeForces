#include <iostream>
using namespace std;

int main() {
    int n;
    int count=0;
    cin>>n;

     if (n == 0) {
        cout << 1 << endl;  
        return 0;
    }
    while(n>0){
        int c=n%10;
        if(c==0){
            count++;
        }
        n=n/10;
    }
    cout<<count<<endl;
}

