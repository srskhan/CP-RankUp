class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int n = arr.size();
        int ans = 0,sum=0;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum == k)
                ans = max(ans, i+1);
            if(mp.find(sum)== mp.end())
                mp[sum]=i;
            if(mp.find(sum-k) != mp.end())
                ans = max(ans, i- mp[sum-k]);
        }
        
        return ans;
    }
};