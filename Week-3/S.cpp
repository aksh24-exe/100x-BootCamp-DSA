#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
       
       // i star
       for(int j=1;j<=i;j++){
            cout<<"*";
            if(i==j){
                cout<<" ";
            }
       }
        //(n-1) for space
       for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
       }
       // i star
       for(int j=1;j<=i;j++){
       cout<<"*";
       }
       cout<<endl;
       
    }
    for(int i=2;i<=n;i++){
       
       // i star
       for(int j=1;j<=i;j++){
            cout<<"*";
            if(j==i){
                cout<<" ";
            }
       }
        //(2n-21) for space
       for(int j=1;j<=2*n-2*i;j++){
        cout<<" ";
       }
       // i star
       for(int j=1;j<=i;j++){
        cout<<"*";
        
       }
       cout<<endl;
       
    }
    return 0;
}