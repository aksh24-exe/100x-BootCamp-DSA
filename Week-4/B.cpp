#include<iostream>
using namespace std;

void getter(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(num  % i == 0)
            cout<<i<<" ";
    }
}

int main(){

    getter();
    return 0;
}

