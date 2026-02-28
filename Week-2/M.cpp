#include<iostream>
using namespace std;

int main(){
     long long x;
     cin>>x;
     int temp;
     long long rev = 0;
     while(x){
        temp = x % 10;
        rev = rev * 10 + temp;
        x = x / 10;
     }
     cout<<rev<<endl;
    return 0;

}