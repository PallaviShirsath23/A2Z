#include <iostream>
using namespace std;

// int main(){

//     for(int i =0; i<6; i++ ){
//         for(int j =0; j<i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){

//     for(int i =5;i>0; i-- ){
//         for(int j =i; j>0; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     for(int i = 1; i<10;[

//         for(int j = 1; j<10 ; j++){
//             cout<<" "<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){

//     int n;
//     cin>>n;

//     for(int i =0; i<n; i++){
//         for(int j= 0; j<n-i+1; j++){
//             cout<<" ";
//         }
//         for( int j =0; j<2*i-1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<n-i+1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){

    int n;
    cin>>n;

    for(int i =n; i<n; i++){
        for(int j= n; j>n-i+1; j++){
            cout<<" ";
        }
        for( int j =n; j>2*i-1; j++){
            cout<<"*";
        }
        for(int j=n; j>n-i+1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}