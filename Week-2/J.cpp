#include<iostream>
using namespace std;

int main(){
     long long x, n;
     long long mul=1;
     cin>>x>>n;
    for(long long i=1;i<=n;i++){
        mul = mul * x;
    }
    cout<<mul<<endl;
    return 0;

}