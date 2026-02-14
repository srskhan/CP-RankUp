// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        map<char,int> mp,ans;
        int l=0,r=0, cnt=0;
        int n = txt.size();
        int m = pat.size();
        for(auto c: pat){
            ans[c]++;
        }
        
        while(r<n)
        {
            mp[txt[r]]++;
            
            if(r-l+1 == m){
                if(mp == ans) cnt++;
                mp[txt[l]]--;
                if(mp[txt[l]]==0){
                    mp.erase(txt[l]);
                }
                l++;
            }
            r++;
        }
        return cnt;
        
    }
};