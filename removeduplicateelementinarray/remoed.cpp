
#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"Entr the size of array :";
    cin>>s;
    int arr[s];
    cout <<"Enter the element in arrry :";
    for(int i=0; i<s; i++){
        cin>>arr[i];

    }

    int insertpos = 1;
    for(int i=1; i<s; i++){
        if(arr[i]!=arr[i-1]){
           arr[insertpos] = arr[i];
            insertpos++;
        }
    }
    for(int i=0; i<insertpos; i++){
        cout<<arr[i];
    }

    cout<<"new size "<<insertpos;

    return 0;

}
