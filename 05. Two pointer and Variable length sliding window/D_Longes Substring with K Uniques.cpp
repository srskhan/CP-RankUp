class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        int n=s.size();
        map<char,int> mp;
        int l=0,r=0;
        int ans=-1;
        while(r<n){
            mp[s[r]]++;
            if(mp.size()==k){
                ans= max(ans,r-l+1);
            }
            else{
                while(l<r && mp.size()>k){
                    mp[s[l]]--;
                    if(mp[s[l]]==0){
                        mp.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return ans;
        
    }
};