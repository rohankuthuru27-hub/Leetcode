class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ans=0;
        while(i<j){
           int w=j-i;
           int h=min(height[i],height[j]);
           int area=w*h;
           ans=max(ans,area);
           height[i]<height[j]?i++:j--;
        }
        return ans;
    }
};