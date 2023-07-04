#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &arr)
{
    int n = arr.size();
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    ans.push_back(arr[0]);
    // for(int i=  0; i<n; i++){
    //     sort(arr[i].begin(),arr[i].end());
    // }
    for(int i=  1; i<n; i++){
        if(ans.back()[1]>=arr[i][0]){
            ans.back()[1] = max(arr[i][1],ans.back()[1]);
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
