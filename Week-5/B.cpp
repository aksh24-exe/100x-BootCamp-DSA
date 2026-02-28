#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    long long  sum = 0;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        sum = sum + arr[i];
    }
    cout<<sum;
    return 0;
}