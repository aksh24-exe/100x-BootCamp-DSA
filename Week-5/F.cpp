#include<iostream>

using namespace std;

int main() {
    int num, find_num;
    cin >> num >> find_num;
    int arr[num];
    int count = 0;
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        if (arr[i] == find_num) {
            count++;
        }
    }
    cout << count;
    return 0;
}