#include<iostream>
#include<climits>
using namespace std;
void getmax(int arr[],int n){
    int max = INT_MIN;
    for (int i=0;i<n; i++){
        if(arr[i]>max){
            max = arr[i];

        }

    }
    cout<<"maxzimam is "<<max;

}

void getmin(int arr[],int n){
    int min = INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"minimum is "<<min;

}
int main(){
    
    int arr[100];
    int n;
    cout<<"enter the size of array :";
    cin>>n;

    cout<<"enter the number in array :";
    for (int i=0; i<n; i++){
        cin >>arr[i];

    }
    getmax(arr , n);
    cout<<endl;

    getmin(arr , n);

    return 0;

}
