#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> a={-1,-1,-1,3,4,4,5,-2,1,1};


    int k = 8;


    int n = a.size();

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {

        sum += a[i];

  
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }


        int rem = sum - k;


        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    cout<< maxLen;
}