#include<iostream>
using namespace std;
bool countFactor(int);
void printPrime(int);

int main() {
    int num;
    cin>>num;
    printPrime(num);
    return 0;
}

void printPrime(int num){
    for(int i=1;i<=num;i++){
        if(countFactor(i)){
            cout<<i<<" ";
        }
    }
}

bool countFactor(int num){
    int cnt = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }
    if(cnt == 2){
        return true;
    }else{
        return false;
    }
}
