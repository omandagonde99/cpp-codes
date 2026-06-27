#include<iostream>
int main(){

    std::cout<<"wellcome to count odd nuber in your array :"<<std::endl;

    int n;
    std::cout<<"Enter the number`s of array :";

    std::cin>>n;

    int arr[100];
    std::cout<<"Enter the element of array : ";

    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }


    int count = 0;
  

    for(int i=0; i<n; i++){
        if(i%2!=0){
            count++;
        }

    }
   
    std::cout<<"odd number is "<<count;


    return 0;


}
