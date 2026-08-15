class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            arr[i]={nums[i],i};
        }
        sort(arr.begin(),arr.end());
        vector<int> ans;
        while(i<=j){
            int sum=arr[i].first+arr[j].first;
            if(sum==target){
                 ans.push_back(arr[i].second);
                  ans.push_back(arr[j].second);
                 break;
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};