#include<iostream>
using namespace std;

int main(){
     long long N;
     cin>>N;
     int temp;
     long long sum = 0;
     while(N){
        temp = N % 10;
        sum = sum + temp;
        N = N / 10;
     }
     cout<<sum<<endl;
    return 0;

}