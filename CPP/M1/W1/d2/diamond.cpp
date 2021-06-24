#include <iostream>
using namespace std;

int main() {
    int n;
    int spaces;
    cin >> n;
    for(int o = 1; o<=100; o++){
        for(int i=1;i<=n;i++){
            spaces = n - i;
            for(int k =1; k<=spaces;k++){
                cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            for(int l =1; l<=spaces;l++){
                cout<<" ";
            }
            cout<<"\n";
        }
        for(int i=n;i>=1;i--){
            spaces = n - i;
            for(int k =1; k<=spaces;k++){
                cout<<" ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            for(int l =1; l<=spaces;l++){
                cout<<" ";
            }
            cout<<"\n";
            }
    }
    return 0;
}