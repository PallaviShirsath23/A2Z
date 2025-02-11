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

// int main(){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;

//     // if (n>=0){
//     //     cout<<"Abosolute value: "<<n;
//     // }
    
//     // else {
//     //     cout<<"Absolute value: "<<-n;
//     // }

//     //if you want to change n into its absolute value 
//     if (n<0){
//         n=-n;
//     }
    
//     cout<<"absolute value : "<<n;
// }

//questions

// int main(){
//     int cp;
//     cout<<"Enter the cost price: ";
//     cin>>cp;

//     int sp;
//     cout<<"Enter the selling price: ";
//     cin>>sp;

//     if (sp>cp){
//         cout<<"You are in profit"<<endl;
//         cout<<"Profit made: "<<sp-cp;
//     }

//     else if (sp == cp){
//         cout<<"No profit, No loss";
//     }

//     else{
//         cout<<"You are in loss"<<endl;
//         cout<<"Loss held: "<<cp-sp;
//     }
    
// }

// int main(){

//     int l;
//     cout<<"Enter the length of the rectangle: ";
//     cin>>l;

//     int b;
//     cout<<"Enter the breadth of the rectangle: ";
//     cin>>b;

//     int area = l*b;
//     int perimeter = 2*(l+b);

//     cout<<"Area of the rectangle is: "<<area<<endl;
//     cout<<"Perimeter of rectangle is: "<<perimeter<<endl;


//     if (area>perimeter){
//         cout<<"Area is greater";
//     }

//     else{
//         cout<<"Perimeter is greater";
//     }
// }

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if (n>99 && n<=999){
        cout<<"It is a 3 digit number.";
    }

    else{
        cout<<"It is not a three digit number";
    }
}