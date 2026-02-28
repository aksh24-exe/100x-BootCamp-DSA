#include<iostream>
using namespace std;

int countZero(){
    long long number;
    int count = 0, temp;
    cin>>number;
    if(number == 0){
        return (count += 1);
    }
    while(number){
        temp = number % 10;
        if(temp == 0)
            count += 1;
        number = number / 10;
    }

    return count;

}

int main(){
    int totalZero = countZero();
    cout<<totalZero;
    return 0;
}