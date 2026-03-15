#include<iostream>

using namespace std;

int main() {
    int n, m, o;
    cin >> n >> m >> o;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(o == arr[i][j]){
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false";
    return 0;
}