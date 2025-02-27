#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i =1; i<=n; i++){
//         cout<<"Hwllo world"<<endl;
//     }
// }

// int main(){

//     // int n;
//     // cout<<"Enter a number: ";
//     // cin>>n;

//     // for(int i =1; i<=101; i++){
//     //     if(i%2 == 0){
//     //         cout<<i<<endl;
//     //         i++; 
//     //     }
//     // }
//     for(int i =2; i<=101; i= i+2){
//         cout<<i<<endl;
//     }
// }

//print table of 19

// int main(){

//     // for(int i=19; i<=190; i=i+19){
//     //     cout<<i<<endl;
//     // }

//     for(int i=19; i<=190; i++){
//         if(i%19 == 0){
//             cout<<i<<endl;
//     }
// }
// }

//print the table of n

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i=n; i<=(n*10); i=i+n){
//         cout<<i<<" ";
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter number o terms to be printed: ";
//     cin>>n;


//     // cout<<"Enter last term:";
//     // cin>>n;

//     //cout<<"Enter difference:";
//     //cin>>d;

//     for(int i =1; i<= 2*n-1 ;i+=2){
//         //ap = a*(n-1)*d;
//         cout<<i<<" ";
//     }
// }

// int main(){

//     int n;

//     cout<<"Enter number of terms to be printed: ";
//     cin>>n;


//     // cout<<"Enter last term:";
//     // cin>>n;

//     //cout<<"Enter difference:";
//     //cin>>d;

//     for(int i =4; i<= 3*n+1 ;i+=3){
//         //ap = a*(n-1)*d;
//         cout<<i<<" ";
//     }
// }

//another method

// int main(){

//     int n;
//     cout<<"Enter number of terms to be printed: ";
//     cin>>n;

//     int a = 4;

//     //using extra variable
//     for(int i =1; i<= n ;i++){
//         //ap = a*(n-1)*d;
//         cout<<a<<" ";
//         a+=3;
//     }
// }

//GP

// int main(){

//     int n;
//     cout<<"Enter number of terms to be printed: ";
//     cin>>n;

//     int a = 1;

//     //using extra variable
//     for(int i =1; i<= n ;i++){
//         //ap = a*(n-1)*d;
//         cout<<a<<" ";
//         a*=2;
//     }
// }

//print the highest factorof n(other than n)

// int main(){

//     int n;
//     cout<<"Enter number of which you want tp find the factors: ";
//     cin>>n;

//     int f = 1;

//     for(int i =1; i< n; i++){
//         if(n%i == 0){
//             f = i;
//         }
        
//     }
//     cout<<f;
// }

//another method

// int main(){

//     int n;
//     cout<<"Enter number of which you want tp find the factors: ";
//     cin>>n;

//     int f = 1;

//     for(int i =n/2; i>=1; i--){
//         if(n%i == 0){
//             cout<<i;
//             break;
//         }
        
//     }
//     cout<<f;
// }

//composite number

// int main(){
//     int n;
//     cout<<"Enter  a number you want to find where composite or not: ";
//     cin>>n;

//     bool flag = true; //prime


//     for(int i =2 ; i <= n/2 ;i++){
//         if(n%i == 0){
//             flag = false; //composite
//             break; // to get out of the loop
            
//         }
        
//     }
//     if(n == 1){
//         cout<<"Neither prime nor composite";
        

//     }
//     else if (flag == true){
//         cout<<"prime number";
//     }

//     else{
//         cout<<"Composite number";
        

//     }
// }

//continue statement

// int main(){
//     for (int i =1; i<=20; i++){
//         if(i != 3 && i!= 7){
//             cout<<i<<endl;
        
//         }

// }

//another method

// int main(){
//     for (int i =1; i<=20; i++){
//         if(i == 3 || i == 7)
//             continue;
//             cout<<i<<endl;

//     }
// }

//print odd numbers using continue

// int main(){
    
    
//     for(int i =1; i<=100; i++){
//         if(i%2 == 0)
//             continue;
//             cout<<i<<endl;
        
//     }
// }

// while loop

// int main(){
//     int i =1;
//     while(i<=10){
//         cout<<i<<endl;
//         i++;

//     }
// }

// int main(){
//     int i =1;
//     do{
//         cout<<i<<endl;
//         i++;

//     }while(i<=10);
// }

int main()