#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={1,2,3,4,5,7};
    int arr2[]={2,4,6,8,10};

    vector<int> ans;
    int j=0;

    for(int i=0;i<6;){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
    for(auto it: ans){
        cout<<it<<" ";
    }
}