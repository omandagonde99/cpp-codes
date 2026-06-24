#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    std::cout<<"Enter the number :" ;

    std::cin>>n;

    int orignal = n;


     while (n>0)
   {
    int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
   }
   cout<<rev;

    if(orignal==rev){
        std::cout<<"this number is paligram number";

    }else{
        std::cout<<"the number is not paligram ";
    }

       return 0;
}
