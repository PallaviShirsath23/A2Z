#include<iostream>
using namespace std;

// int main(){
//     int arr[5];
//     arr[0] = 23;
//     arr[1] = 2;
//     arr[2] = 3;
//     arr[3] = 26;
//     arr[4] = 28;


// }
// int main(){
//     int size = 10, b[size];


// }



int main(){
    int n;
    cin>>n;
    cout<<"Input the size of array: ";

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
}