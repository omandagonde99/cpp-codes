#include<iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array :";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool isshort = true;

    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            isshort = false;
            break;;
        }
    }

    if(isshort){
        cout<<"It is a shortest array";

    }else{
        cout<<"It is a not shortest array";
    }
    return 0;

}
