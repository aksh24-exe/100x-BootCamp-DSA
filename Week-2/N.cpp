#include<iostream>
using namespace std;

int main(){
     long long x;
     cin>>x;
     long long y = x;
     int temp;
     long long rev = 0;
     while(x){
        temp = x % 10;
        rev = rev * 10 + temp;
        x = x / 10;
     }
     if(rev == y){
        cout<<"YES";
     }else{
        cout<<"NO";
     }
    return 0;

}