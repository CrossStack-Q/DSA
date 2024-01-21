#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1={1,2,3,4,2,1,1,1,2,1,1,2,3,4,1,1,1,1,1};


    int i = 0;
    int j = 0;

    int k = 6;

    int sumK=0;
    int n = arr1.size();

    int maxLen=0;

    for(j;j<n;j++){
        sumK+=arr1[j];
        if(sumK==k){
            
            maxLen= max(maxLen,j-i+1);
            cout<<"i="<<i<<" j="<<j<<endl;
        }
        else if(sumK>k){
            while(sumK>k){
                sumK-=arr1[i];
                i++;
            }
        }
    }

    cout<<"MaxLen = "<<maxLen<<endl;


    for(auto it:arr1){
        cout<<it<<" ";
    }

}