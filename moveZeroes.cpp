#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[8]={1,4,2,0,0,0,2,3};
    int j=0;

    


    for(j;j<8;j++){
        if(arr[j]==0){
            break;
        }
    }

    

    for(int i=j+1;i<8;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    

    for(auto it:arr){
        cout<<it<<" ";
    }



}