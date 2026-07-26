#include<iostream>
#include<vector>

using namespace std;

vector<int> interseation(vector<int>& arr1 , vector<int>& arr2){
    vector<int> ans;
    for(int i=0; i<arr1.size(); i++){
        int element = arr1[i];
        for(int j=0; j<arr2.size(); j++){

            if(element==arr2[j]){
                ans.push_back(element);
                arr2[j]=-1;
                break;

            }
        }
    }
    return ans;
}
int main(){

    vector<int> arr1={1,2,2,3};
    vector<int> arr2={2,2,4};

    vector<int> result = interseation(arr1 , arr2);

    cout<<"interseation ";

    for(int x: result){
        cout<< x <<' ';

    }

    return 0;

}
