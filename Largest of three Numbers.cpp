#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the three  number"<<endl;
	cin>>a>>b>>c;
	
	if(a>b&&a>c){
		cout<<"First number is grater";
	}else if(b>a&&b>c){
		cout<<"Secont number is grater";
	}
	else{
		cout<<"Third number is grater";
		
	}
	return 0;
	
}
