#include<iostream>
using namespace std;

void binomial_coefficient(){
    int n, r;
    cin>>n>>r;
    int first = 1, second = 1, third = 1;
    for(int i=1;i<=n;i++){
        first *= i;
    }
    for(int i=1;i<=r;i++){
        second *= i;
    }
    for(int i=1;i<=(n-r);i++){
        third *= i;
    }
    int value = first/(second * third);
    cout<<value;
}

int main(){
    binomial_coefficient();
    return 0;
}