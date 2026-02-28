#include <iostream>
using namespace std;

int main(){
    int n;
    int output;
    cin>>n;
    for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
        if(i%2 == 0)
            cout<<(j%2 == 0 ?0:1);
        else
            cout<<(j%2 == 0 ?1:0);
       }
       cout<<endl;
    }
    return 0;
}