#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int array_number[number];
    for(int i=0;i<number;i++){
        cin>>array_number[i];
    }
    int P_COUNT=0, N_COUNT=0, EVEN_COUNT=0, ODD_COUNT=0;
    for(int i=0;i<number;i++){
        if(array_number[i]>0){
            P_COUNT += 1;
        }
        if(array_number[i]<0){
            N_COUNT += 1;
        }
         if(array_number[i]%2 == 0){
            EVEN_COUNT += 1;
        }
         if(array_number[i]%2 != 0){
            ODD_COUNT += 1;
        }
    }
    cout<<P_COUNT<<endl<<N_COUNT<<endl<<EVEN_COUNT<<endl<<ODD_COUNT<<endl;
    return 0;

}