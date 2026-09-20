class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int l = 0;
        int r = height.size() - 1;
        while(l<r){
            int currarea = (r-l)*min(height[l],height[r]);
            if(maxarea<currarea)
            maxarea = currarea;
            if(height[l]<height[r])
            l++;
            else 
            r--;
        }
        return maxarea;

    }
};