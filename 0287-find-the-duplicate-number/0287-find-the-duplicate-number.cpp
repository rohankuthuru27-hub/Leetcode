class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        int n=nums.size();
        vector<bool> dup(n,false);
        for(int i=0;i<n;i++){
          if(dup[nums[i]]==true){
            return nums[i];
          }
          dup[nums[i]]=true;
        }
        return -1;
    }
};