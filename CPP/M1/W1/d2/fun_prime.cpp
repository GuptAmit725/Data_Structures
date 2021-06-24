#include <iostream>
using namespace std;

bool isPrime(int n){
    int i;
    for(int i=2; i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
return true;
}

int main() {
    int a,b;
    cin>>a>>b;

    for(int j = a; j<=b; j++){
        if(isPrime(j)){
            cout<<j<<endl;
        }
    }
    return 0;
}