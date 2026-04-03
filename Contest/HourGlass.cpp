#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;

   for(int i=n;i>=1;i--){
    for(int k=1;k<=(n-i);k++){
        cout<<" "; 
    }
    for(int j=0;j<i;j++){
        cout<<".";
         if (j < i && j!=(i-1)) cout << " ";
    }
    cout<<endl; 
   }

   //2nd half
   for(int i=2;i<=n;i++){
    for(int k=1;k<=(n-i);k++){
        cout<<" "; 
    }
    for(int j=0;j<i;j++){
        cout<<".";
         if (j < i && j!=(i-1)) cout << " ";
    }
    cout<<endl; 
   }

}
