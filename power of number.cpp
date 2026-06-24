#include<iostream>
using namespace std;
int main(){
    int n;
    int p;

    cout<<"enter the number :";
    cin>>n;

    cout<<"Enter the power :";
    cin>> p;

    long long result =1 ;

    for(int i=1;i<=p;i++){
        result = result * n;

    }

    cout<<result;

    return 0;


}
