#include <iostream>
using namespace std;

int main() {
    int row;
    cin >> row;

    for(int i=1; i<=row;i++){
        if(i%2 != 0){
            for(int j=1;j<=3*row;j++){
                if((j%3==0) && (j%2 != 0)){
                    cout<<"*";
                }else{
                    cout<<" ";
                } 
            }
        }else{
            for(int j=1;j<=3*row;j++){
                if(j%2==0){
                    cout<<"*";
                }else{
                    cout<<" ";
                } 
            }    
        }
        cout<<"\n";
    }
    return 0;
}