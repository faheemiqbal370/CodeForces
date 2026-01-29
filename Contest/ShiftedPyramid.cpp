#include <iostream>
using namespace std;

int main() {
   int n,m;
   cin>>n;

   for(int i=1;i<=n;i++){
    for(int k=1;k<i;k++){
        cout<<" ";
    } 
   for(int j=0;j<i;j++){
    cout<<"x"; 
   }
cout<<endl;
   }
}
