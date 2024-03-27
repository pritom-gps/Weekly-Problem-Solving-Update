class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n=s.length();
    int l=0,r=0;
    map<char,int>mp;
    int count=0;
    int ans=INT_MIN;
    while(r<n)
    {
        mp[s[r]]++;
        if(mp[s[r]]==1)
        count++;
        if(count==k)
        ans=max(ans,r-l+1);
        else if(count>k)
        {
            while (count > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                    count -= 1;
                l++;
            }
        }
        r++;
        
    }
    if(ans==INT_MIN)
    return -1;
    else
    return ans;
    }
};
