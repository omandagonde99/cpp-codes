#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];

    cout<<"Enter the size of arry :";
    cin>>n;

    cout<<"Enter the number in arry :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Move all nonzero elemet 

    int insertpos = 0;

    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[insertpos] = arr[i];
            insertpos++;

        }
    }

    for(int i=insertpos; i<n; i++){
        arr[i]=0;

    }

    //Print all element in array 

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
