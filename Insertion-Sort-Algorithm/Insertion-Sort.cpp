#include<bits/stdc++.h>
using namespace std;

/*
    Time complexity: {

          best case: O(n) if array is sorted in ascending order and we want to sort is as ascending and vice versa.

          average case: O(n^2)

          worst case:  O(n^2) if the array is not sorted
    }

    Space complexity: {

        auxiliary space: O(1) because no extra space is used here

        overall with input: O(n) because for the array size which is given
    }

*/

void solve(int tc){

    int ar[8] = {2, 1, 6, 2, 3, 1, 4, 5};

    for(int i=1; i<8; i++){

        for(int j=i; j>0 ; j--){

            if(ar[j] < ar[j-1]){
                swap(ar[j], ar[j-1]);
            }
            else{
                break;
            }
        }
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

