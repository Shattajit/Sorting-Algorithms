#include<bits/stdc++.h>
using namespace std;

/*
    Time complexity: {

          best case: O(n^2) if array is sorted in ascending order

          average case: O(n^2)

          worst case:  O(n^2) if the array is sorted in decreasing order
    }

    Space complexity: {

        auxiliary space: O(1) because no extra space is used here

        overall with input: O(n) because for the array size which is given
    }

*/

int find_min(int *ar, int idx, int n){

    for(int i=idx+1;i<n;i++){  // it should be idx + 1 becuase the idx position will be filled with the smallest element from the range in {idx, n}..

        if(ar[i] < ar[idx]){
            idx = i;
        }
    }

    return idx;
}
void solve(int tc){

    int ar[8] = {2, 1, 6, 2, 3, 1, 4, 5};

    for(int i=0;i<8-1;i++){

        int idx = find_min(ar, i, 8);

        swap(ar[i], ar[idx]);
    }

    for(int i=0;i<8;i++) cout<<ar[i]<<" \n"[i==7];
}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;

    //cin>>tc;

    for(int i=1;i<=tc;i++){
        solve(tc);
    }
}
