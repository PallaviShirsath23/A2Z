#include<bits/stdc++.h>
using namespace std;


int sq(int num){
    int square = num * num;
    // cout<<"Square of a number is: "<<square<<endl;
    return square;

}



int main(){
    int num, square;
    cout<<"Enter a number: ";
    cin>>num;
    int val = sq(num);
    val = sq(val);
    cout<<"Square of "<<num<<" is: "<<val<<endl;

}