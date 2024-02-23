#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1={1,2,1,3};


    int i = 0;
    int j = 0;

    int k = 2;

    int sumK=0;
    int n = arr1.size();

    int maxLen=0;

    for(j;j<n;j++){
        sumK+=arr1[j];
        while(sumK>k){
                sumK-=arr1[i];
                i++;
            }
        if(sumK==k){
            maxLen= max(maxLen,j-i+1);
        }
            
        
    }

    cout<<"MaxLen = "<<maxLen<<endl;


    for(auto it:arr1){
        cout<<it<<" ";
    }

}