#include <iostream>
using namespace std;

int main() {
    int row;
    int repeat = 100;
    int spaces;
    cin >>row;
    for(int o =1; o<=repeat;o++){
        for(int i = 1; i <= row ; i++){
            spaces = 2*row - 2*i;
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k = 1; k<=spaces ; k++){
                cout<<" ";
            }
            for(int l=1;l<=i;l++){
                cout<<"*";
            }
            cout<<"\n";
        }

        for(int i = 6;i>=1;i--){
            spaces = 2*row - 2*i;
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            for(int k = 1; k<=spaces ; k++){
                cout<<" ";
            }
            for(int l=1;l<=i;l++){
                cout<<"*";
            }
            cout<<"\n";

        }
    }    
    return 0;
}