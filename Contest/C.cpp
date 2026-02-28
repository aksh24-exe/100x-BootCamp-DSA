#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int temp;
    int count = 2;
    while(count){
        temp = num%10;
        num = num/10;
        count -= 1;
    }
    cout<<temp;
    return 0;
} 