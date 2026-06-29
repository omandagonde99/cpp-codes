#include<iostream>
using namespace std;
int main (){
    int arr[100];
    int s;

    cout<<"enter the size of array :";
    cin>>s;

    cout<<"Enter the number in array :";
    for(int i=0; i<s; i++){
        cin>>arr[i];

    }

    int positive = 0;

    int negative = 0;


    for(int i=0; i<s; i++){
        if(arr[i]>0){
            positive++;
        }else if(arr[i]<0){
            negative++;

        }
    }

    cout<<"positive = "<<positive << endl;
     cout<<"negative = "<<negative<< endl;

    return 0;

    
}
