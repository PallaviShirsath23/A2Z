#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;

//     if (n/2 == 0){
//         cout<<"Number is even.";
//     }
    
//     else {
//         cout<<"Number is odd.";
//     }
        
// }

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    // if (n>=0){
    //     cout<<"Abosolute value: "<<n;
    // }
    
    // else {
    //     cout<<"Absolute value: "<<-n;
    // }

    //if you want to change n into its absolute value 
    if (n<0){
        n=-n;
    }
    
    cout<<"absolute value : "<<n;
}