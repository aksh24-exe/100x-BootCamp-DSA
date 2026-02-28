#include<iostream>
using namespace std;

int main(){
     long long x;
     cin>>x;
     int temp;
     long long rev = 0;
     if(x == 0){
        cout<<x;
        return 0;
     }
     while(x){
        temp = x % 10;
        cout<<temp;
        x = x / 10;
     }
     
    return 0;

}