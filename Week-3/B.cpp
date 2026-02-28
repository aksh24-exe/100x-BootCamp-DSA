#include<iostream>
using namespace std;

int main(){
    int n, m;
    char alpha = 'A';
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m;j++){
            cout<<alpha;
            
        }
        alpha += 1;
        cout<<endl;
    }
    return 0;
}