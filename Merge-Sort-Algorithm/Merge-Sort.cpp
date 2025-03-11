
#include<bits/stdc++.h>
using namespace std;

/*
    Time complexity: {

          best case: O(nlogn)

          average case: O(nlogn)

          worst case:  O(nlogn)
    }

    Space complexity: {

        space: O(n) + O(logn)  logn for the stack used in recursion internally

    }

*/

void Merge(int ar[], int shuru, int mid, int shesh){

    vector<int>vec(shesh - shuru + 1);

    int left = shuru, right = mid+1, index = 0;

    while(left <= mid && right <= shesh){

        if(ar[left] <= ar[right]){
            vec[index] = ar[left];
            index++, left++;
        }
        else{
            vec[index] = ar[right];
            index++, right++;
        }
    }

    while(left <= mid){
        vec[index] = ar[left];
        index++, left++;
    }

    while(right <= shesh){
        vec[index] = ar[right];
        index++, right++;
    }

    index = 0;

    while(shuru <= shesh){
        ar[shuru] = vec[index];
        shuru++, index++;
    }
}
void mergeSort(int ar[], int shuru, int shesh){

    if(shuru == shesh) return;

    int mid = shuru + (shesh - shuru) / 2;

    mergeSort(ar, shuru, mid);
    mergeSort(ar, mid + 1, shesh);

    Merge(ar, shuru, mid, shesh);
}
void solve(int tc){

    int ar[8] = {2, 1, 6, 2, 3, 1, 4, 5};

    mergeSort(ar, 0, 7);

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
