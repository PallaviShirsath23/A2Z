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



// int main(){
//     int n;
//     cin>>n;
//     cout<<"Input the size of array: ";

//     int arr[n];

//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i = 0; i<n; i++){
//         cout<<arr[i];
//     }
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];

//     int sum = 0;

//     for(int i =0; i<=size-1; i++){
//         cin>>arr[i];
//     }

//     for(int i =0; i<size; i++){
//         sum += arr[i];
//         //cout<<sum;
//     }
//     cout<<sum;
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];

//     int prod =1;

//     for(int i =0; i<=size-1; i++){
//         cin>>arr[i];
//     }

//     for(int i =0; i<size; i++){
//         prod*= arr[i];
//         //cout<<sum;
//     }
//     cout<<prod;
// }


// int main(){
//     int arr[] = {0,4,6,7,23,6,4,9,8,2,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Size of the array is "<<size<<endl;

//     int x;
//     cout<<"Enter the number you want to search: ";
//     cin>>x;

//     bool flag = false;

//     for(int i=0; i<size; i++){
//         if (arr[i]==x){
//             flag = true;
            
//             break;
//     }
    
//     if(flag) cout<<x<<" is present in the array"; 
//     else cout<<x<<" is not present in the array"; 
// }
// }

// int main(){
//     int arr[] ={23,24,12,40,5,6,56,17,13,16,25};

//     int mx =  arr[0];

//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Size of the array is "<<size<<endl;

//     for(int i =1 ; i<size; i++){
//         if(mx<arr[i]) mx=arr[i];
//         // break;
//         // mx = max(mx,arr[i]);
//         //cout<<mx;
//     }
//     cout<<mx;
// }

// int main(){
//     int arr[] ={23,24,12,40,5,6,56,17,13,16,25};

//     int minn =  arr[0];

//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Size of the array is "<<size<<endl;

//     for(int i =1 ; i<size; i++){
//         if(minn>arr[i]) minn=arr[i];
//         // break;
//         // mx = max(mx,arr[i]);
//         //cout<<mx;
//     }
//     cout<<minn;
// }

//second maximum

// int main(){
//     int arr[] ={23,24,12,40,5,6,56,17,13,16,25};

//     int mx = INT_MIN;
//     int smx = INT_MIN;

//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Size of the array is "<<size<<endl;

//     for(int i =1 ; i<size; i++){
//         if(mx<arr[i]) mx=arr[i];
//         // break;
//         // mx = max(mx,arr[i]);
//         //cout<<mx;
//     }
//     for (int i =0 ; i<size; i++){
//         if(smx<arr[i] && arr[i] != mx) smx = arr[i];
//     }
//     cout<<mx<<" "<<smx; 
// }




 