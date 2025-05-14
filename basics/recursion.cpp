#include <iostream>
using namespace std;

//int cnt = 0;
// void name(int cnt){
//     if(cnt == 5) return;// base  case
//     cout<<"PALLAVI"<<" ";
//     // cnt++;
//     name(cnt+1);


// }

// int main(){
//     name(0);
// }


// void count(int i, int n){
//     if (i>n) return;
//     cout<<"PALLAVI ";
//     count(i+1,n);

// }

// int main(){
//     int n;
//     cout<<"Enter the number of times you want to print your name: ";
//     cin>>n;
//     count(1,n);
// }


// void rev_count(int i, int n){
//     if (i<1) return;
//     cout<<i<<" ";
//     rev_count(i-1,n);


// }

// int main(){
//     int n;
//     cout<<"Enter the numbers you want to print: ";
//     cin>>n;
//     rev_count(n,n);
// }


//using backtracking 1 to n

// void count(int i, int n){
//     if(i<1) return;
//     count(i-1,n);
//     cout<<i<<" ";

// }

// int main(){
//     int n;
//     cout<<"Enter the numbers you want to print: ";
//     cin>>n;
//     count(n,n);
// }

//using back tracking from n to 1

void count(int i, int n){
    if(i<1) return;
    cout<<i<<" ";
    count(i-1,n);
    

}

int main(){
    int n;
    cout<<"Enter the numbers you want to print: ";
    cin>>n;
    count(n,n);
}
