#include<iostream>
using namespace std;

int sum(int arr[], int n);
int coutnumber(int arr[], int n);
int findavrage(int arr[], int n);


int findavrage(int arr[], int n){

    int total_sum = sum(arr,n);

    int total_count = coutnumber(arr,n);
    
    return total_sum/total_count;

}

int sum(int arr[] , int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum = sum+arr[i];
    }

    return sum;
}
int coutnumber(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        count++;
    }

    return count;
}
int main(){
    int s;
    int arr[100];
    cout<<"enter the size of array :";
    cin>>s;

    cout<<"Enter the number  in array :";
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }

    cout<<"the sum of the arry is "<< sum(arr,s);

    cout<<endl;

    cout<<"the count of array is"<< coutnumber(arr,s);

    cout<<endl;

    cout<<"the avrage of array is"<< findavrage(arr,s);

    return 0;

}
