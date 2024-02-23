#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<int> a={6,3,2,8,1};
  int largest = a[0];
  int secondLargest = -1;
  int smallest = a[0];
  int secondSmallest = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (a[i] > largest) {
      secondLargest = largest;
      largest = a[i];
    } else if (a[i] < largest && a[i] > secondLargest) {
      secondLargest = a[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] < smallest) {
      secondSmallest = smallest;
      smallest = a[i];
    }
    else if(a[i]>smallest && a[i]<secondSmallest){
        secondSmallest = a[i];
    }
  }

  cout<<secondLargest<<","<<secondSmallest<<endl;
}

