#include<iostream>
int main(){
    int n;
    int arr[100];
    std::cout<<"Enter the size of array :";

    std::cin>>n;

    std::cout<<"Enter the number in arrry :";
    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }
    int largest = arr[0], secondLargest = -1;
        for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    std::cout<<secondLargest;

    return 0;
}

