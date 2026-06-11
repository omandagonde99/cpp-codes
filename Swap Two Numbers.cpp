#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the two  number"<<endl;
	cin>>a>>b;
	
	int temp = 0;
	
	temp = a;
	a= b;
	b= temp;
	
	cout<<a<<endl;
	cout<<b<<endl;
	
	return 0;
	
}
