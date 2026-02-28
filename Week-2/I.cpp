#include<iostream>
using namespace std;

int main(){
    long long n;
    long long mul = 1;
    cin>>n;
    for(long long i=1;i<=n;i++){
        mul = mul * i;
    }
    cout<<mul<<endl;
    return 0;

}