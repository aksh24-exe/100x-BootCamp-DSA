#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int small = arr[0];
    int index = 1;
    for(int i=0;i<=n-1;i++){
        if(arr[i] < small){
            small = arr[i];
            index = i+1;
        }
    }
    cout<<small<<" "<<index;
    return 0;
}