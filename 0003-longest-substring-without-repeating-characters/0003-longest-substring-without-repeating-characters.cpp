class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lastseen;
        int l=0;
        int longest=0;
        int n=s.size();
        for(int r=0;r<n;r++){
            char c=s[r];
            if(lastseen.count(c)&&lastseen[c]>=l){
                l=lastseen[c]+1;
            }
            lastseen[c]=r;
            longest=max(longest,r-l+1);
        }
        return longest;
    }
};