#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = as.size();
    int n2 = a.size();
    
    int i =0;
    int j=0;
    vector<int> unionArr;


    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
                
            }
            i++;
        }
    }
    




    return unionArr;
}