#include<iostream>
using namespace std;
int main(){ 
    int sum = 0;
    
    int arr[100];

    int n;

    cout<<"Enter the number :";

    cin>>n;

    cout<<"Enter the value in array :"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
       
        sum = sum + arr[i];
    }

    int avrage ;

    avrage = sum/n ;

    cout<<"The avrage is :"<<avrage;

    return 0;
    
}
