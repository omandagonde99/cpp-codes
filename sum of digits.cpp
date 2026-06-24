#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;

    cout<<"Enter the number :"<<endl;
    cin>>n;

    while(n>0){
        int degit = n%10;

        sum = sum + n;

        n = n/10;
    }
    cout<<sum;

    return 0;
    
}
