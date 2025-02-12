#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a first number: ";
    cin>>n;

    int b;
    cout<<"Enter a second number: ";
    cin>>b;

    char op ;
    cout<<"Enter the operation to be done(+,-,/,): ";
    cin>>op;

    switch(op) {
        case '+':
        cout<<n+b;
        break;

        case '-':
        cout<<n-b;
        break;

        case '/':
        cout<<n/b;
        break;

        case '*':
        cout<<n*b;
        break;

        default:
        cout<<"Invalid Operator";
    }



    

}