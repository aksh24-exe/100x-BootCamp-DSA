#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int large = arr[0];
    int index = 1;
    for(int i=0;i<=n-1;i++){
        if(arr[i] > large){
            large = arr[i];
            index = i+1;
        }
    }
    cout<<large<<" "<<index;
    return 0;
}