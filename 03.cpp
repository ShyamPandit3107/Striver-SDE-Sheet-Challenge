#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &arr, int n)
{
        // first find the break point
    int ind = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i+1]>arr[i]){
            ind = i;
            break;
        }
    }
    // if ind is still at -1 then the array is at highest  permutation to find next one we have to reverse the array
    if(ind==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i = n-1; i>ind; i--){
        if(arr[ind]<arr[i]){
            swap(arr[ind],arr[i]);
            break;
        }
    }
    reverse(arr.begin()+ind+1,arr.end());
    return arr;
}