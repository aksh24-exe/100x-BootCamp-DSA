#include<iostream>
using namespace std;

void prime(){
    int num;
    cin >> num;

    if(num <= 1){
        cout << "Not Prime";
        return;
    }

    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            cout << "Not Prime";
            return;
        }
    }

    cout << "Prime";
}

int main(){
    prime();
    return 0;
}
