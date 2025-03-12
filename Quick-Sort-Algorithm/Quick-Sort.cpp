
#include<bits/stdc++.h>
using namespace std;

/*
    Time complexity: {

        best case: O(nlogn)
        average case: O(nlogn)
        worst case: O(n^2)  if the pivot makes the array right skewed or left skewed
    }

    Spcae complexity: {
        best case: O(logn)  for the recursion calling and stored into stack memory
        average case: O(nlogn)
        worst case: O(n)  if the pivot makes the array right skewed or left skewed
    }
*/

int find_pivot(int ar[], int shuru, int shesh){

    int idx = shuru;

    for(int i=shuru; i <= shesh; i++){

        if(ar[i] <= ar[shesh]){
            swap(ar[i], ar[idx]);
            idx++;
        }
    }

    return idx - 1;
}
void QuickSort(int ar[], int shuru, int shesh){

    if(shuru >= shesh) return;

    int pivot = find_pivot(ar, shuru, shesh);

    QuickSort(ar, shuru, pivot - 1);
    QuickSort(ar, pivot + 1, shesh);
}
void solve(int tc){

    int ar[8] = {2, 1, 3, 5, 6, 1, 2, 1};

    QuickSort(ar, 0, 7);

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
