class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int l = 0, r = 0;
        long long sum = 0, ans = 0;
        while(r<n)
        {
            sum += arr[r];
            
            if(r-l+1 == k){
                ans = max(ans, sum);
                sum -= arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};