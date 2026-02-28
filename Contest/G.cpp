#include<iostream>
using namespace std;

int main(){
    int num, temp;
    int count = 0;
    cin>>num;
    if (num == 0)
        count += 1;
    else {
        while(num){
            temp = num % 10;
            if(temp == 0)
                count += 1;
            num = num / 10;
        }
    }
    cout<<count<<endl;
    return 0;
} 