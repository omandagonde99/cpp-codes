#include<iostream>
using namespace std;
int main(){
    int n1 , n2;
    cout<<"Enter the size both of array :";
    cin>>n1>>n2;

     int arr1[n1];
    cout <<"Enter the element in first arrry :";
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
     int arr2[n2];
    cout <<"Enter the element in second  arrry :";
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    int merged[n1+n2];
    int i=0, j=0,k=0;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;

    }    
    while(i<n1){
          merged[k] = arr1[i];
        i++;
        k++;
    }

    while(j<n2){
         merged[k] = arr2[j];
        j++;
        k++;
    }


        // Print merged array
    cout << "Merged Array: ";
    for(int i = 0; i < n1 + n2; i++){
        cout << merged[i] << " ";
    }
    return 0;

}
