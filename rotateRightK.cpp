#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int d = 2;
    int n = 7;
    
    // [6,7,1,2,3,4,5]
    int temp[d];
    int j=0;
    for(int i=n-d;i<n;i++){
        temp[j]=arr[i];
        j++;
    }

    for(int i=n-1;i>=d;i--){
        arr[i]=arr[i-d];
    }

    for(int i=0;i<d;i++){
        arr[i]=temp[i];
    }


    for(auto it:arr){
        cout<<it<<" ";
    }

    

}