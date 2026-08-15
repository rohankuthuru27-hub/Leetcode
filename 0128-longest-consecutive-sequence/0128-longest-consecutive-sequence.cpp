class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(),nums.end());
        int ans=0;
        for(int i:numSet){
            if(!numSet.count(i-1)){
             int current=i;
             int streak=1;
               while(numSet.count(current+1)){
                streak++;
                current++;
            }
            ans=max(ans,streak);
    }
        }
        return ans;
    }
};