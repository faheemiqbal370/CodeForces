#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //top
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<">";

        //inner space and last >
        if(i>1){
            for(int sp=1;sp<=2*i-3;sp++){
                cout<<" ";
            }
            cout<<">";
        }
         cout<<endl;
    }

         //lower half
        for(int i=n-1;i>=1;i--){
            
            for(int s=1;s<=i-1;s++){
                cout<<" ";
            }
        
        cout<<">";

        //inner space and last >
        if(i>1){
            for(int sp=1;sp<=2*i-3;sp++){
                cout<<" ";
            }
            cout<<">";
        }
        cout<<endl;

    }
}

   