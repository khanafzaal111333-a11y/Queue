#include<bits/stdc++.h>
using namespace std;
//Optimized
vector<int> Max_ele_Win(vector<int>arr,int k){
    vector<int>ans;
    deque<int>q;
    for(int i=0;i<arr.size();i++){
        if(!q.empty()&&q.front()<=i-k){
            q.pop_front();
        }
        while(!q.empty()&&arr[q.back()]<=arr[i]){
              q.pop_back();
        }
        q.push_back(i);
        if(i>=k-1){
            ans.push_back(arr[q.front()]);
        }
    }
    return ans;
}
//Brute Force
vector<int> Max_ele_Win2(vector<int>arr,int k){
    vector<int>ans;
    for(int i=0;i<=arr.size()-k;i++){
         int max=arr[0];
         for(int j=i;j<i+k;j++){
            if(arr[j]>max){
                max=arr[j];
            }
         }
         ans.push_back(max);
    }
    return ans;
}
int main(){
    vector<int>ans={1,3,-1,-3,5,3,7,1,8};
    vector<int>ans1=Max_ele_Win2(ans,3);
    for(auto it:ans1){
        cout<<it<<" ";
    }
}