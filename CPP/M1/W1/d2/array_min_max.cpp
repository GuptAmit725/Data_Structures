#include <iostream>
using namespace std;

int main() {
    int n;
    int max,min;
    cin >> n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > INT_MAX){
            max = arr[i];
        }
        if(arr[i]<INT_MAX){
            min = arr[i];
        }
    }
    cout <<"Max value : ",max;
    cout <<"Minimum value : ",min;

}