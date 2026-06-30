#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter the size of number :";
    cin>>n;
    int arr[100];
    cout<<"enter the element in array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int left = 0;

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            //swap the two degits 
            int temp = arr[left];
            arr[left] = arr[i];
            arr[i] = temp;

            left++;

        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
